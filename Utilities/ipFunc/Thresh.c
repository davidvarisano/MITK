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
 *  this function performs a thresholding operation with a single theshold
 */

/** @brief performs a thresholding operation with a single theshold

 *  All greyvalues above the threshold are set to the maximal possible
 *  greyvalue and all greyvalues below this threshold to the minimal greyvalue.
 *  @param pic_old      pointer to the image that should be transformed
 *  @param threshold    threshold
 *  @param pic_return   memory used to store return image ( if pic_return == NULL
 *                new memory is allocated )
 *
 * @return pointer to the transformed image 
 *
 * AUTHOR & DATE
 */

/* include-Files                                                        */

#include "ipFuncP.h"   
 
ipPicDescriptor *ipFuncThresh ( ipPicDescriptor *pic_old, 
                                ipFloat8_t      threshold,
                                ipPicDescriptor *pic_return );

#ifndef DOXYGEN_IGNORE

/* definition of macro for normalisation                                */

#define THRESH( type, pic )                                              \
{                                                                        \
  ipUInt4_t  i, no_elem;                                                 \
                                                                         \
  no_elem = _ipPicElements ( pic );                                      \
  for ( i = 0; i < no_elem; i++ )                                        \
    {                                                                    \
      (( type * ) pic_new->data ) [i] =                                  \
         ( (( type * ) pic->data ) [i] > ( type )  threshold ) ?         \
            ( type ) 1 : ( type ) 0;                                     \
    }                                                                    \
} 


/* -------------------------------------------------------------------  */
/*
**  function picThresh:                                                   
**                  
*/
/* -------------------------------------------------------------------  */

ipPicDescriptor *ipFuncThresh ( ipPicDescriptor *pic_old, 
                                ipFloat8_t      threshold,
                                ipPicDescriptor *pic_return )
{

  ipPicDescriptor *pic_new;  /* inverted picture                        */
  ipUInt4_t       i, j;      /* loopindex                               */
  ipFloat8_t      max_gv;    /* max. possible greyvalue                 */
  ipFloat8_t      min_gv;    /* min. possible greyvalue                 */


  /* check image data                                                   */

  if ( _ipFuncError ( pic_old ) != ipFuncOK ) return ( ipFuncERROR );

  /* calculate max. or min possible greyvalue for datatype              */

  if ( _ipFuncExtT ( pic_old->type, pic_old->bpe, &min_gv, &max_gv  ) == ipFuncERROR )
    return ( ipFuncERROR );

  /* test whether threshold is ok                                       */

  if ( threshold < min_gv || threshold > max_gv ) 
    {
       _ipFuncSetErrno ( ipFuncDATA_ERROR );
       return ( ipFuncERROR );
    }

  /* create a new picture, copy the header, allocate memory             */

  pic_new = _ipFuncMalloc ( pic_old, pic_return, ipOVERWRITE );

  if ( pic_new == NULL ) return ( ipFuncERROR );
       
  /* macro to invert the picture (for all data types)                   */

  ipPicFORALL( THRESH, pic_old );

  /* Copy Tags */

  ipFuncCopyTags(pic_new, pic_old);
  
     

  return pic_new;
}
#endif