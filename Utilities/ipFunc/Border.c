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

/** @file
 *  This function sets all border pixels to zero.
 */

/** @brief sets all border pixels to zero.
 *
 * The size of the border is calculated using the size of the single 
 * dimensions of the mask (dim/2).
 * 
 * @param pic_old input image
 * @param mask mask which is used to calculate the border size
 * @param pic_rtn memory used for result image (if pic_rtn == NULL new
 *               memory is allocated.
 *
 * @return pic_new result image
 *
 * AUTHOR & DATE
 */

/* include files                                                                  */

#include "ipFuncP.h"

ipPicDescriptor *ipFuncBorder ( ipPicDescriptor *pic_old,
                                ipPicDescriptor *mask,
                                ipPicDescriptor *pic_rtn );

#ifndef DOXYGEN_IGNORE

#ifndef lint
  static char *what = { "@(#)????????\t\tDKFZ (Dept. MBI)\t"__DATE__ };
#endif


  
  /* definition of macros                                                           */


#define BORDER( type, pic, size )                                                  \
{                                                                                  \
  ipUInt4_t      i, j, k;          /* loop index                                */ \
  ipUInt4_t      offset;           /* offset of pixels in pic_new               */ \
  ipUInt4_t      anf[_ipPicNDIM];  /*                                           */ \
  ipUInt4_t      end[_ipPicNDIM];  /*                                           */ \
  ipUInt4_t      ind[_ipPicNDIM];  /* loop index vector                         */ \
  ipUInt4_t      off[_ipPicNDIM];  /* used to calculate offset of image pixels  */ \
                                                                                   \
                                                                                   \
  for ( i = 0; i < pic->dim; i++ )                                                 \
    {                                                                              \
       anf[i] = 0;                                                                 \
       end[i] = pic->n[i];                                                         \
    }                                                                              \
  for ( i = pic->dim; i < _ipPicNDIM; i++ )                                        \
    {                                                                              \
       anf[i] = 0;                                                                 \
       end[i] = 1;                                                                 \
       pic->n[i] = 1;                                                              \
    }                                                                              \
  for ( i = 0; i < pic->dim; i++ )                                                 \
    {                                                                              \
       anf[i] = pic->n[i] - mask->n[i]/2;                                          \
       end[i] = mask->n[i]/2;                                                      \
       for ( ind[7] = 0; ind[7] < end[7]; ind[7]++ )                               \
       {                                                                           \
         off[7] = size[7] * ind[7];                                                \
         for ( ind[6] = 0; ind[6] < end[6]; ind[6]++ )                             \
         {                                                                         \
           off[6] = size[6] * ind[6] + off[7];                                     \
           for ( ind[5] = 0; ind[5] < end[5]; ind[5]++ )                           \
           {                                                                       \
             off[5] = size[5] * ind[5] + off[6];                                   \
             for ( ind[4] = 0; ind[4] < end[4]; ind[4]++ )                         \
             {                                                                     \
               off[4] = size[4] * ind[4] + off[5];                                 \
               for ( ind[3] = 0; ind[3] < end[3]; ind[3]++ )                       \
               {                                                                   \
                 off[3] = size[3] * ind[3] + off[4];                               \
                 for ( ind[2] = 0; ind[2] < end[2]; ind[2]++ )                     \
                 {                                                                 \
                   off[2] = size[2] * ind[2] + off[3];                             \
                   for ( ind[1] = 0; ind[1] < end[1]; ind[1]++ )                   \
                   {                                                               \
                     off[1] = size[1] * ind[1] + off[2];                           \
                     for ( ind[0] = 0; ind[0] < end[0]; ind[0]++ )                 \
                     {                                                             \
                       (( type * ) pic_new->data )[off[1]] = 0;                    \
                       off[1]++;                                                   \
                     }                                                             \
                   }                                                               \
                 }                                                                 \
               }                                                                   \
             }                                                                     \
           }                                                                       \
         }                                                                         \
       }                                                                           \
       for ( ind[7] = anf[7]; ind[7] < pic->n[7]; ind[7]++ )                       \
       {                                                                           \
         off[7] = size[7] * ind[7];                                                \
         for ( ind[6] = anf[6]; ind[6] < pic->n[6]; ind[6]++ )                     \
         {                                                                         \
           off[6] = size[6] * ind[6] + off[7];                                     \
           for ( ind[5] = anf[5]; ind[5] < pic->n[5]; ind[5]++ )                   \
           {                                                                       \
             off[5] = size[5] * ind[5] + off[6];                                   \
             for ( ind[4] = anf[4]; ind[4] < pic->n[4]; ind[4]++ )                 \
             {                                                                     \
               off[4] = size[4] * ind[4] + off[5];                                 \
               for ( ind[3] = anf[3]; ind[3] < pic->n[3]; ind[3]++ )               \
               {                                                                   \
                 off[3] = size[3] * ind[3] + off[4];                               \
                 for ( ind[2] = anf[2]; ind[2] < pic->n[2]; ind[2]++ )             \
                 {                                                                 \
                   off[2] = size[2] * ind[2] + off[3];                             \
                   for ( ind[1] = anf[1]; ind[1] < pic->n[1]; ind[1]++ )           \
                   {                                                               \
                     off[1] = size[1] * ind[1] + off[2];                           \
                     off[0] = off[1] + anf[0];                                     \
                     for ( ind[0] = anf[0]; ind[0] < pic->n[0]; ind[0]++ )         \
                     {                                                             \
                       (( type * ) pic_new->data )[off[0]] = 0;                    \
                       off[0]++;                                                   \
                     }                                                             \
                   }                                                               \
                 }                                                                 \
               }                                                                   \
             }                                                                     \
           }                                                                       \
         }                                                                         \
       }                                                                           \
     end[i] = pic->n[i];                                                           \
     anf[i] = 0;                                                                   \
    }                                                                              \
}

/* ------------------------------------------------------------------------------ */
/*
*/
/* ------------------------------------------------------------------------------ */

ipPicDescriptor *ipFuncBorder ( ipPicDescriptor *pic_old,
                                ipPicDescriptor *mask,
                                ipPicDescriptor *pic_rtn )
{
  ipPicDescriptor *pic_new;            /* pointer to transformed image            */
  ipInt4_t       i;                    /* loop index                              */
  ipUInt4_t      end[_ipPicNDIM];      /* end of image                            */
  ipUInt4_t      beg[_ipPicNDIM];      /* end of image                            */
  ipUInt4_t      size[_ipPicNDIM];     /*                                         */

  /* check whEther data are correct                                               */

  if ( _ipFuncError ( pic_old ) != ipFuncOK ) return ( ipFuncERROR );
  if ( _ipFuncError ( mask ) != ipFuncOK ) return ( ipFuncERROR );
  if ( pic_old->dim != mask->dim ) 
    { 
       _ipFuncSetErrno ( ipFuncDIM_ERROR );
       return ( ipFuncERROR );
    }

  for ( i = 0; i < pic_old->dim; i++ )
    {
       if ( pic_old->n[i] <= mask->n[i]  ) 
         { 
            _ipFuncSetErrno ( ipFuncUNFIT_ERROR );
            return ( ipFuncERROR );
         }
    }


  /* create a new picture, copy the header, allocate memory             */

/*  pic_new = _ipFuncMalloc ( pic_old, pic_rtn, ipOVERWRITE );*/
  if ( pic_rtn == NULL )
     pic_new = ipPicClone ( pic_old );
  else 
     pic_new = pic_old;

  if ( pic_new == NULL ) return ( ipFuncERROR );

  /* initialize vectors and variables                                             */

  size[0] = 1;
  for ( i = 1; i < _ipPicNDIM; i++ )
    size[i] = size[i-1] * pic_old->n[i-1];
  size[pic_old->dim] = 0;

  ipPicFORALL_1 ( BORDER, pic_old, size )    

  /* Copy Tags */

  ipFuncCopyTags(pic_new, pic_old);
  
  

  return ( pic_new );
}
#endif