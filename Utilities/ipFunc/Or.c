/*****************************************************************************

 Copyright (c) 1993-2000,  Div. Medical and Biological Informatics, 
 Deutsches Krebsforschungszentrum, Heidelberg, Germany
 All rights reserved.

 Redistribution and use in source and binary forms, with or without 
 modification, are permitted provided that the following conditions are met:

 - Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

 - Redistributions in binary form must reproduce the above copyright notice, 
   this list of conditions and the following disclaimer in the documentation 
   and/or other materials provided with the distribution.

 - All advertising materials mentioning features or use of this software must 
   display the following acknowledgement: 
          
     "This product includes software developed by the Div. Medical and 
      Biological Informatics, Deutsches Krebsforschungszentrum, Heidelberg, 
      Germany."

 - Neither the name of the Deutsches Krebsforschungszentrum nor the names of 
   its contributors may be used to endorse or promote products derived from 
   this software without specific prior written permission. 

   THIS SOFTWARE IS PROVIDED BY THE DIVISION MEDICAL AND BIOLOGICAL
   INFORMATICS AND CONTRIBUTORS ``AS IS'' AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
   OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
   IN NO EVENT SHALL THE DIVISION MEDICAL AND BIOLOGICAL INFORMATICS,
   THE DEUTSCHES KREBSFORSCHUNGSZENTRUM OR CONTRIBUTORS BE LIABLE FOR 
   ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
   DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE 
   GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER 
   IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
   OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN 
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 

 Send comments and/or bug reports to:
   mbi-software@dkfz-heidelberg.de

*****************************************************************************/

/**@file
 *  this function connects two images using the OR
 */

/** @brief connects two images using the OR 
 *
 *  @param pic_1    pointer to the first image 
 *  @param pic_2     pointer to the second image 
 *  @param pic_return  memory used to store return image ( if pic_return == NULL
 *                new memory is allocated )
 *
 * @return pointer to the new image
 *
 * AUTHOR & DATE
 */

/* include-Files                                                        */

#include "ipFuncP.h"   
 
ipPicDescriptor *ipFuncOr   ( ipPicDescriptor *pic_1,   
                              ipPicDescriptor *pic_2,
                              ipPicDescriptor *pic_return ) ;
#ifndef DOXYGEN_IGNORE

/* definition of invert-macro                                           */

#define OR( type, pic_1, pic_2, pic_new )                                \
{                                                                        \
  ipUInt4_t  i, no_elem;                                                 \
                                                                         \
  no_elem = _ipPicElements ( pic_1 );                                    \
  for ( i = 0; i < no_elem; i++ )                                        \
    {                                                                    \
       (( type * ) pic_new->data ) [i] =                                 \
             (( type * ) pic_1->data ) [i] ||                            \
             (( type * ) pic_2->data ) [i];                              \
    }                                                                    \
} 
               
 

/* -------------------------------------------------------------------  */
/*
*/
/* -------------------------------------------------------------------  */

ipPicDescriptor *ipFuncOr   ( ipPicDescriptor *pic_1,   
                              ipPicDescriptor *pic_2,
                              ipPicDescriptor *pic_return ) 
{

  ipPicDescriptor *pic_new;  /* pointer to new image                    */
  ipUInt4_t       i;         /* loop index                              */

  /* check whether images have the same size                            */

  if ( _ipFuncError ( pic_1 ) != ipFuncOK ) return ( ipFuncERROR );
  if ( _ipFuncError ( pic_2 ) != ipFuncOK ) return ( ipFuncERROR );
  if ( ( pic_1->type != pic_2->type ) || ( pic_1->bpe != pic_2->bpe ) )
    {
      _ipFuncSetErrno ( ipFuncUNFIT_ERROR );
      return NULL;
    }
  if ( pic_1->dim == pic_2->dim )
    for ( i = 0; i < _ipPicNDIM; i++ )
      {
        if ( pic_1->n[i] != pic_2->n[i] )
          {
             _ipFuncSetErrno ( ipFuncUNFIT_ERROR );
             return NULL;
          }
      }
  else 
    {
       _ipFuncSetErrno ( ipFuncUNFIT_ERROR );
       return NULL;
    }

  /* allocate new iumage                                                */

  pic_new = _ipFuncMalloc ( pic_1, pic_return, ipOVERWRITE );     
  if ( pic_new == NULL ) return ( ipFuncERROR );

  /* macro to connect two images using AND                              */

  ipPicFORALL_2 ( OR, pic_1, pic_2, pic_new ); 

  /* Copy Tags */

  ipFuncCopyTags(pic_new, pic_1);
                        
  return pic_new;
}
#endif