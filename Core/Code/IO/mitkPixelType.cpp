/*=========================================================================

Program:   Medical Imaging & Interaction Toolkit
Language:  C++
Date:      $Date$
Version:   $Revision$

Copyright (c) German Cancer Research Center, Division of Medical and
Biological Informatics. All rights reserved.
See MITKCopyright.txt or http://www.mitk.org/copyright.html for details.

This software is distributed WITHOUT ANY WARRANTY; without even
the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the above copyright notices for more information.

=========================================================================*/


#include "mitkPixelType.h"
#include <mitkLogMacros.h>
#include <itkVector.h>
#include <itkRGBPixel.h>
#include <itkRGBAPixel.h>
#include <itkCovariantVector.h>
#include "itkDiffusionTensor3D.h"

#define HUNDRED_VECS(HUN)   \
  TEN_VECS(HUN)                \
  TEN_VECS(HUN+10)             \
  TEN_VECS(HUN+20)             \
  TEN_VECS(HUN+30)             \
  TEN_VECS(HUN+40)             \
  TEN_VECS(HUN+50)             \
  TEN_VECS(HUN+60)             \
  TEN_VECS(HUN+70)             \
  TEN_VECS(HUN+80)             \
  TEN_VECS(HUN+90)             \

#define TEN_VECS(TEN)   \
  if(false){}               \
  N_VEC(TEN+ 1)                \
  N_VEC(TEN+ 2)             \
  N_VEC(TEN+ 3)             \
  N_VEC(TEN+ 4)             \
  N_VEC(TEN+ 5)             \
  N_VEC(TEN+ 6)             \
  N_VEC(TEN+ 7)             \
  N_VEC(TEN+ 8)             \
  N_VEC(TEN+ 9)             \
  N_VEC(TEN+10)             \

#define N_VEC(N_DIRS)       \
  _N_VEC(N_DIRS,double)     \
  _N_VEC(N_DIRS,float)      \
  _N_VEC(N_DIRS,short)      \

#define _N_VEC(N_DIRS,PIXTYPE)                                                          \
  else if ( *m_TypeId == typeid( itk::Vector<PIXTYPE,N_DIRS> ))  \
  {                                                                                     \
  found = true;                                                                      \
  m_TypeId = & typeid( PIXTYPE );                                                    \
  m_NumberOfComponents *= N_DIRS;                                                \
  m_Type = mitkIpPicFloat;                                                               \
  m_Bpe = sizeof(PIXTYPE) * 8 * m_NumberOfComponents;                                \
  m_ItkTypeId = &typeid( itk::Vector<PIXTYPE,N_DIRS> );     \
  }                                                                                     \



mitk::PixelType::PixelType(void)
 : m_ComponentType(typeid(void)),
   m_PixelType(typeid(void)),
   m_ComponentTypeName(0)
{
  m_BytesPerComponent = 0;
  m_NumberOfComponents = 0;
}

mitk::PixelType::PixelType( const mitk::PixelType& other )
  : m_ComponentType( other.m_ComponentType ),
    m_PixelType( other.m_PixelType),
    m_ComponentTypeName( other.m_ComponentTypeName ),
    m_PixelTypeName( other.m_PixelTypeName )
{
  m_BytesPerComponent = other.m_BytesPerComponent;
  m_NumberOfComponents = other.m_NumberOfComponents;
}

mitk::PixelType& mitk::PixelType::operator =( const mitk::PixelType& other)
{
  *this = other;
  return *this;
}
/*
mitk::PixelType::PixelType( const std::type_info& aTypeId, int numberOfComponents, ItkIOPixelType anItkIoPixelType )
  : m_ComponentType( aTypeId ), m_PixelType( typeid(anItkIoPixelType) ), m_NumberOfComponents( numberOfComponents ),
    m_PixelTypeName( m_PixelType.name() ), m_ComponentTypeName( m_ComponentType.name() ),
    m_BytesPerComponent(0)
{
  m_BytesPerComponent = sizeof( m_ComponentType );

  Initialize( aTypeId, numberOfComponents, anItkIoPixelType );
}
*/
bool mitk::PixelType::operator==(const mitk::PixelType& rhs) const
{
  MITK_DEBUG << "operator==" << std::endl;

  MITK_DEBUG << "m_NumberOfComponents = " << m_NumberOfComponents << " " << rhs.m_NumberOfComponents << std::endl;
  MITK_DEBUG << "m_BytesPerComponent = " << m_BytesPerComponent << " " << rhs.m_BytesPerComponent << std::endl;

  return ( this->m_PixelType == rhs.m_PixelType
    && this->m_ComponentType == rhs.m_ComponentType
    && this->m_NumberOfComponents == rhs.m_NumberOfComponents
    && this->m_BytesPerComponent == rhs.m_BytesPerComponent
    );
}

bool mitk::PixelType::operator ==(const std::type_info& typeId) const
{
  return (m_NumberOfComponents == 1
       && m_ComponentType == typeId);
}

bool mitk::PixelType::operator!=(const mitk::PixelType& rhs) const
{
  return !(this->operator==(rhs));
}

bool mitk::PixelType::operator!=(const std::type_info& typeId) const
{
  return !(this->operator==(typeId));
}

#define SET_ITK_TYPE_ID(anItkIoPixelType_test, numberOfComponents_test, ITK_TYPE)     \
  if ( (itk::ImageIOBase::anItkIoPixelType_test == anItkIoPixelType ) &&              \
       (numberOfComponents_test == m_NumberOfComponents)                              \
     )                                                                                \
  {          *                                                                         \
    m_ItkTypeId = &typeid(ITK_TYPE);                                                  \
  }

#define SET_TYPE(TYPE, IPPIC_TYPE)                                                    \
  if ( *m_TypeId == typeid( TYPE ) )                                                  \
  {                                                                                   \
    m_Type = IPPIC_TYPE;                                                              \
    m_Bpe = sizeof(TYPE) * 8 * m_NumberOfComponents;                                  \
                                                                                      \
    typedef itk::Vector<TYPE, 3> Vector3Type;                                         \
    typedef itk::CovariantVector<TYPE, 3> CovariantVector3Type;                       \
    typedef itk::Point<TYPE, 3> Point3Type;                                           \
    typedef itk::Vector<TYPE, 2> Vector2Type;                                         \
    typedef itk::CovariantVector<TYPE, 2> CovariantVector2Type;                       \
    typedef itk::Point<TYPE, 2> Point2Type;                                           \
                                                                                      \
    SET_ITK_TYPE_ID(UNKNOWNPIXELTYPE, 1, TYPE ) else                                  \
    SET_ITK_TYPE_ID(SCALAR, 1, TYPE ) else                                            \
                                                                                      \
    SET_ITK_TYPE_ID(VECTOR, 2, Vector2Type ) else                                     \
    SET_ITK_TYPE_ID(COVARIANTVECTOR, 2, CovariantVector2Type ) else                   \
    SET_ITK_TYPE_ID(POINT, 2, Point2Type ) else                                       \
                                                                                      \
    SET_ITK_TYPE_ID(RGB, 3, itk::RGBPixel<TYPE> ) else                                \
    /*SET_ITK_TYPE_ID(DIFFUSIONTENSOR3D, 6, itk::DiffusionTensor3D<TYPE> ) else */    \
    SET_ITK_TYPE_ID(VECTOR, 3, Vector3Type ) else                                     \
    SET_ITK_TYPE_ID(COVARIANTVECTOR, 3, CovariantVector3Type ) else                   \
    SET_ITK_TYPE_ID(POINT, 3, Point3Type ) else                                       \
                                                                                      \
    SET_ITK_TYPE_ID(RGBA, 4, itk::RGBAPixel<TYPE> ) else                              \
    {                                                                                 \
    }                                                                                 \
  }                                                                                   \
  else 

void mitk::PixelType::Initialize( const std::type_info& aTypeId, int numberOfComponents, ItkIOPixelType anItkIoPixelType )
{
  /* //m_TypeId = &aTypeId;
   m_NumberOfComponents = numberOfComponents;
   if(m_NumberOfComponents == 1)
     m_ItkTypeId = &aTypeId;
   else
     m_ItkTypeId = NULL;
   /*SET_TYPE(double, mitkIpPicFloat)
   SET_TYPE(float, mitkIpPicFloat)
   SET_TYPE(long, mitkIpPicInt)
   SET_TYPE(unsigned long, mitkIpPicUInt)
   SET_TYPE(int, mitkIpPicInt)
   SET_TYPE(unsigned int, mitkIpPicUInt)
   SET_TYPE(short, mitkIpPicInt)
   SET_TYPE(unsigned short, mitkIpPicUInt)
   SET_TYPE(char, mitkIpPicInt)
   SET_TYPE(unsigned char, mitkIpPicUInt)

   
   if ( *m_TypeId == typeid( itk::DiffusionTensor3D<float> ) )
   {
     m_TypeId = & typeid( float );
     m_NumberOfComponents *= 6;
     m_Type = mitkIpPicFloat;
     m_Bpe = sizeof(float) * 8 * m_NumberOfComponents;
     m_ItkTypeId = &typeid( itk::DiffusionTensor3D<float> );
   }
   else if ( *m_TypeId == typeid( itk::DiffusionTensor3D<double> ) )
   {
     m_TypeId = & typeid( double );
     m_NumberOfComponents *= 6;
     m_Type = mitkIpPicFloat;
     m_Bpe = sizeof(double) * 8 * m_NumberOfComponents;
     m_ItkTypeId = &typeid( itk::DiffusionTensor3D<double> );
   }
   else if ( *m_TypeId == typeid( itk::RGBPixel<unsigned char> ) )
   {
     m_Type = mitkIpPicUInt;
     m_NumberOfComponents = 3;
     m_Bpe = sizeof(unsigned char) * 8 * m_NumberOfComponents;
     m_ItkTypeId = &typeid( itk::RGBPixel<unsigned char> );
   }
   else if ( *m_TypeId == typeid( itk::RGBAPixel<unsigned char> ) )
   {
     m_Type = mitkIpPicUInt;
     m_NumberOfComponents = 4;
     m_Bpe = sizeof(unsigned char) * 8 * m_NumberOfComponents;
     m_ItkTypeId = &typeid( itk::RGBAPixel<unsigned char> );
   }
   else
   {
     bool found = false;
     
     // the following lines allow for fixed-size vector images up to a certain size limit
     // (commented out for shorter compile times)
     //HUNDRED_VECS(000)
     //HUNDRED_VECS(100)
     //HUNDRED_VECS(200)
     //HUNDRED_VECS(300)
     //HUNDRED_VECS(400)
     //HUNDRED_VECS(500)
     //HUNDRED_VECS(600)
     //HUNDRED_VECS(700)

     // allow for fixed-size vectors of specific length
     // (inspired by itkPointshell.cpp, precompiled q-ball configs)
     //TEN_VECS(0)
     //N_VEC(11)
     //N_VEC(12)
     if(false){}
     N_VEC(2)
     N_VEC(3)
     N_VEC(6)
     N_VEC(42)
     N_VEC(92)
     N_VEC(162)
     N_VEC(252)
     N_VEC(362)
     N_VEC(492)
     N_VEC(642)
     N_VEC(812)
     N_VEC(1002)

     if(!found)
       itkExceptionMacro( "Pixel type currently not supported." );
   }
   m_BitsPerComponent = m_Bpe / m_NumberOfComponents;*/
}
