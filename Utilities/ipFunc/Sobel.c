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
 *  this function performs a 3*3 nonlinear edge enhancement operation
 *  using a sobel operator. The operator could be used with 2D and 3D 
 *  filtering masks.  
 */

/** @brief performs a 3*3 nonlinear edge enhancement operation
 *  using a sobel operator. The operator could be used with 2D and 3D 
 *  filtering masks.  
 *
 *  @param pic_old      pointer to the image that should be convolved 
 *  @param mask         pointer to the mask that is used for convolution
 *  @param border       tells how the edge is transformed              
 *  @arg @c              ipFuncBorderOld  : original greyvalues         
 *  @arg @c              ipFuncBorderZero : edge is set to minimal greyvalue
 *
 * @return pointer to the transformed image
 *
 * AUTHOR & DATE
 */

/* include-Files                                                        */

#include "ipFuncP.h"   

ipPicDescriptor *ipFuncSobel ( ipPicDescriptor *pic_old,           
                               ipUInt4_t       dim_mask, 
                               ipFuncFlagI_t   border );
#ifndef DOXYGEN_IGNORE
 
/* definition of macros                                                 */

#define SOBEL( typ, pic, size, mask_anz, m )                             \
{                                                                        \
   ipInt4_t         ind[_ipPicNDIM];                                     \
   ipInt4_t         n[_ipPicNDIM];                                       \
   ipUInt4_t        i,j;                                                 \
   ipInt4_t         offset;                                              \
   ipInt4_t         *beg;                                                \
   ipFloat8_t       help, help2, min_gv, max_gv;                         \
                                                                         \
  /* calculate begin and end of the single masks                      */ \
                                                                         \
  beg = malloc ( ( mask_anz + 1 ) * sizeof ( ipInt4_t ) );               \
                                                                         \
  beg[0] = 0;                                                            \
  for ( i = 1; i <= mask_anz; i++ )                                      \
    beg[i] = beg[i-1] + m->length / mask_anz;                            \
                                                                         \
  /* initialization of index vector                                   */ \
                                                                         \
  for ( i = 0; i < pic->dim; i++ )                                       \
    n[i] = pic->n[i] - 1;                                                \
                                                                         \
  for ( i = pic->dim; i < _ipPicNDIM; i++ )                              \
    n[i] = 2;                                                            \
                                                                         \
  /* calculate max. and min. possible greyvalues                      */ \
                                                                         \
  _ipFuncExtT ( pic->type, pic->bpe, &min_gv, &max_gv );                  \
                                                                          \
  /* convolve  image with compressed mask                             */ \
                                                                         \
  for ( ind[7] = 1; ind[7] < n[7]; ind[7]++ )                            \
    for ( ind[6] = 1; ind[6] < n[6]; ind[6]++ )                          \
      for ( ind[5] = 1; ind[5] < n[5]; ind[5]++ )                        \
        for ( ind[4] = 1; ind[4] < n[4]; ind[4]++ )                      \
          for ( ind[3] = 1; ind[3] < n[3]; ind[3]++ )                    \
            for ( ind[2] = 1; ind[2] < n[2]; ind[2]++ )                  \
              for ( ind[1] = 1; ind[1] < n[1]; ind[1]++ )                \
                for ( ind[0] = 1; ind[0] < n[0]; ind[0]++ )              \
                  {                                                      \
                     offset = 0;                                         \
                     for ( i = 0; i < pic->dim; i++ )                    \
                       offset = offset + size[i] * ind[i];               \
                                                                         \
                     help2 = 0.;                                         \
                     for ( j = 0; j < mask_anz; j++ )                    \
                       {                                                 \
                          help = 0;                                      \
                          for ( i = beg[j]; i < beg[j+1] ; i++ )         \
                            help = help + m->mask_vekt[i] *              \
                              (( typ * )pic->data)[offset+m->off_vekt[i]];\
                          help2 = help2 + fabs ( help );                 \
                       }                                                 \
                                                                         \
                     (( typ * )pic_new->data )[offset] =                 \
                        ( help2 < max_gv )?                              \
                        ( ( help2 < min_gv ) ? ( typ )min_gv : help2 ) : \
                        ( typ ) max_gv;                                  \
                   }                                                     \
  free ( beg );                                                          \
}

/* -------------------------------------------------------------------  */
/*
**  function ipFuncSobel:                                             
**                                                                
*/
/* -------------------------------------------------------------------  */

ipPicDescriptor *ipFuncSobel ( ipPicDescriptor *pic_old,           
                               ipUInt4_t       dim_mask, 
                               ipFuncFlagI_t   border )
{

  ipPicDescriptor *pic_new;           /* convolved  image               */
  ipPicDescriptor *pic_mask;          /* sobel mask                     */
  ipInt4_t        offset, off_mask;
  ipUInt4_t       i, j;               /* loopindex                      */
  ipUInt4_t       pos;
  ipUInt1_t       mask_anz;           /* number of masks                */ 
  ipInt4_t        n[_ipPicNDIM];
  ipInt4_t        ind[_ipPicNDIM];    /* vector of loop indices (image) */ 
  ipFuncMasc_t    *m;                 /* length of mask and offsets     */
  ipUInt4_t       size[_ipPicNDIM];                                    
  ipInt2_t        sobel2[] =          /* 2D Sobel mask                  */
                  {  1,  0, -1,  2,  0, -2,  1,  0, -1,
                     1,  2,  1,  0,  0,  0, -1, -2, -1  };
  ipInt2_t        sobel3[] =          /* 3D Sobel mask                  */
                  {  1,  0, -1,  2,  0, -2,  1,  0, -1,
                     1,  0, -1,  2,  0, -2,  1,  0, -1,
                     1,  0, -1,  2,  0, -2,  1,  0, -1,

                     1,  0, -1,  1,  0, -1,  1,  0, -1, 
                     2,  0, -2,  2,  0, -2,  2,  0, -2, 
                     1,  0, -1,  1,  0, -1,  1,  0, -1, 
                     
                     1,  2,  1,  0,  0,  0, -1, -2, -1, 
                     1,  2,  1,  0,  0,  0, -1, -2, -1, 
                     1,  2,  1,  0,  0,  0, -1, -2, -1, 

                     1,  1,  1,  0,  0,  0, -1, -1, -1,
                     2,  2,  2,  0,  0,  0, -2, -2, -2,
                     1,  1,  1,  0,  0,  0, -1, -1, -1,

                     1,  2,  1,  1,  2,  1,  1,  2,  1, 
                     0,  0,  0,  0,  0,  0,  0,  0,  0,
                    -1, -2, -1, -1, -2, -1, -1, -2, -1,

                     1,  1,  1,  2,  2,  2,  1,  1,  1,
                     0,  0,  0,  0,  0,  0,  0,  0,  0,
                    -1, -1, -1, -2, -2, -2, -1, -1, -1 };

  /* check whether data are correct                                     */

  if ( _ipFuncError ( pic_old ) != ipFuncOK ) return ( ipFuncERROR );
  if ( ( pic_old->dim < dim_mask ) || ( dim_mask < 1 ) )
    {  
       _ipFuncSetErrno ( ipFuncDIMMASC_ERROR );
       return ( ipFuncERROR );
    }

  /* initialisation of pic_mask                                         */

  pic_mask = ipPicNew ();
  if ( pic_mask == NULL ) 
    {  
       _ipFuncSetErrno ( ipFuncPICNEW_ERROR );
       return ( ipFuncERROR );
    }

  pic_mask->type = ipPicInt;
  pic_mask->bpe  = 16;
  pic_mask->dim  = dim_mask+1;
  for ( i = 0; i < dim_mask; i++ )
    pic_mask->n[i] = 3;

  if ( dim_mask == 3 ) 
    { 
       mask_anz = 6;
       pic_mask->n[dim_mask] = mask_anz;
       pic_mask->data = sobel3;     
    }
  else if ( dim_mask == 2 )
    {
       mask_anz = 2;
       pic_mask->n[dim_mask] = mask_anz;
       pic_mask->data = sobel2;
    }
  else
    {  
       pic_mask->data = NULL;
       ipPicFree ( pic_mask );
       _ipFuncSetErrno ( ipFuncDIM_ERROR );
       return ( ipFuncERROR );
    }

  /* initialisation of vectors                                          */
   
  for ( i = 0; i < dim_mask; i++ )
    n[i] = 2;                                  
 
  for ( i = dim_mask; i < _ipPicNDIM; i++ )
    n[i] = 0;

  /* allocate mask structure                                            */

  m = malloc ( sizeof ( ipFuncMasc_t ) );
  if ( m == NULL ) 
    {
       pic_mask->data = NULL;
       ipPicFree ( pic_mask );
       _ipFuncSetErrno ( ipFuncMALLOC_ERROR );
       return NULL;
    }
  m->off_vekt  = malloc ( _ipPicElements( pic_mask ) * sizeof ( ipInt4_t ) );
  if ( m->off_vekt == NULL ) 
    {
       free ( m );
       pic_mask->data = NULL;
       ipPicFree ( pic_mask );
       _ipFuncSetErrno ( ipFuncMALLOC_ERROR );
       return NULL;
    }
  m->mask_vekt = malloc ( _ipPicElements( pic_mask ) * sizeof ( ipFloat8_t ) );
  if ( m->mask_vekt == NULL ) 
    {
       free ( m->off_vekt );
       free ( m );
       ipPicFree ( pic_mask );
       _ipFuncSetErrno ( ipFuncMALLOC_ERROR );
       return NULL;
    }
 
  /* create a new picture, copy the header, allocate memory             */

  if ( border == ipFuncBorderOld ) 
    pic_new = ipPicClone ( pic_old );
  else if ( border == ipFuncBorderZero )
    { 
       pic_new = ipPicCopyHeader ( pic_old, 0 );
       pic_new->data = malloc ( _ipPicSize ( pic_new ) );
    }
  else 
    {
       _ipFuncSetErrno ( ipFuncFLAG_ERROR );
       pic_mask->data = NULL;
       ipPicFree ( pic_mask );
       free ( m->off_vekt );
       free ( m );
       return ( ipFuncERROR );
    }

  if ( pic_new == NULL )
    {
       _ipFuncSetErrno ( ipFuncPICNEW_ERROR );                
       pic_mask->data = NULL;
       ipPicFree ( pic_mask );
       free ( m->off_vekt );
       free ( m );
       return ( ipFuncERROR );
    }
 
  /* calculate offset vector for the compressed mask                    */

  m->length = 0; 
  size[0] = 1;
  for ( i = 1; i < pic_old->dim; i++ )
    size[i] = size[i-1] * pic_old->n[i-1];

  off_mask = 0;
  for ( i = 0; i < mask_anz; i++ )
    for ( ind[2] = -1; ind[2] < n[2]; ind[2]++ )
      for ( ind[1] = -1; ind[1] < n[1]; ind[1]++ )
        for ( ind[0] = -1; ind[0] < n[0]; ind[0]++ )
          {
            if ( (( ipInt2_t * )pic_mask->data)[off_mask] != 0 )
              {
                 offset = 0;
                 for ( j = 0; j < dim_mask; j++ )
                   offset = offset + ind[j] * size[j];
                 m->off_vekt[m->length] = offset;
                 m->length++;
              }
            off_mask++;     
          }
      
  /* remove elements that are zero from mask                          */  
                                                                         
  pos = 0;                                                               
  for ( i = 0; i < m->length; i++ )                                      
    {                                                                    
      while ( (( ipInt2_t * )pic_mask->data)[pos] == 0 ) pos++;           
      m->mask_vekt[i] = ( ipFloat8_t )(( ipInt2_t * )pic_mask->data)[pos]; 
      pos++;                                                             
    }                                                                    
                                                                         
 
  /* macro for the sobel operator                                       */

  ipPicFORALL_3 ( SOBEL, pic_old, size, mask_anz, m );                   

  pic_mask->data = NULL;
  ipPicFree ( pic_mask );
  free ( m->off_vekt );
  free ( m->mask_vekt );
  free ( m );

  /* Copy Tags */

  ipFuncCopyTags(pic_new, pic_old);
  
  
  
  return pic_new;
}
#endif