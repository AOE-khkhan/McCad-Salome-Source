// File generated by CPPExt (Value)
//
//                     Copyright (C) 1991 - 2000 by  
//                      Matra Datavision SA.  All rights reserved.
//  
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
// 
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//  
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _McCadModelManager_Model_HeaderFile
#define _McCadModelManager_Model_HeaderFile

#ifndef _Handle_TopTools_HSequenceOfShape_HeaderFile
#include <Handle_TopTools_HSequenceOfShape.hxx>
#endif
#ifndef _McCadConvertTools_ConvertorPtr_HeaderFile
#include <McCadConvertTools_ConvertorPtr.hxx>
#endif
#ifndef _McCadConvertTools_VoidGeneratorPtr_HeaderFile
#include <McCadConvertTools_VoidGeneratorPtr.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _MeshVS_DataMapOfIntegerAsciiString_HeaderFile
#include <MeshVS_DataMapOfIntegerAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TColStd_DataMapOfIntegerListOfInteger_HeaderFile
#include <TColStd_DataMapOfIntegerListOfInteger.hxx>
#endif
#ifndef _McCadModelManager_DataMapOfShapePtrInteger_HeaderFile
#include <McCadModelManager_DataMapOfShapePtrInteger.hxx>
#endif
#ifndef _McCadModelManager_DataMapOfIntegerPart_HeaderFile
#include <McCadModelManager_DataMapOfIntegerPart.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Graphic3d_NameOfMaterial_HeaderFile
#include <Graphic3d_NameOfMaterial.hxx>
#endif
class TopTools_HSequenceOfShape;
class TCollection_AsciiString;
class TopoDS_Shape;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadModelManager_Model  {

public:

    void* operator new(size_t,void* anAddress) 
      {
        return anAddress;
      }
    void* operator new(size_t size) 
      { 
        return Standard::Allocate(size); 
      }
    void  operator delete(void *anAddress) 
      { 
        if (anAddress) Standard::Free((Standard_Address&)anAddress); 
      }
 // Methods PUBLIC
 // 


Standard_EXPORT McCadModelManager_Model();


Standard_EXPORT   void Init() ;


Standard_EXPORT   void SetModelName(const TCollection_AsciiString& theName) ;


Standard_EXPORT   TCollection_AsciiString GetModelName() ;


Standard_EXPORT   void SetComponentName(const Standard_Integer theCID,const TCollection_AsciiString& theName) ;


Standard_EXPORT   TCollection_AsciiString GetComponentName(const Standard_Integer theCID) ;


Standard_EXPORT   void AddComponent(const Handle(TopTools_HSequenceOfShape)& theHSeqOfShp) ;


Standard_EXPORT   void AddPartToComponent(const Standard_Integer theCID,const TopoDS_Shape& theShape) ;


Standard_EXPORT   void MovePartToComponent(const Standard_Integer theID,const Standard_Integer theCID) ;


Standard_EXPORT   void FreePartFromComponent(const Standard_Integer theID,const Standard_Integer theCID) ;


Standard_EXPORT   void DeletePart(const Standard_Integer theID) ;


Standard_EXPORT   void DeleteComponent(const Standard_Integer theCID) ;


Standard_EXPORT   void HidePart(const Standard_Integer theID) ;


Standard_EXPORT   void UnHidePart(const Standard_Integer theID) ;


Standard_EXPORT   Standard_Integer NumberOfShapes() ;


Standard_EXPORT   TopoDS_Shape GetShapeByID(const Standard_Integer theID) ;


Standard_EXPORT   Standard_Integer GetID(const TopoDS_Shape& theShape) ;


Standard_EXPORT   Handle_TopTools_HSequenceOfShape GetComponent(const Standard_Integer theCID) ;


Standard_EXPORT   Standard_Integer GetCIDbyID(const Standard_Integer theID) ;


Standard_EXPORT   Standard_Integer GetCIDbyShape(const TopoDS_Shape& theShape) ;


Standard_EXPORT   TCollection_AsciiString GetCName(const Standard_Integer theCID) ;


Standard_EXPORT   TCollection_AsciiString GetNameByID(const Standard_Integer theID) ;


Standard_EXPORT   Quantity_NameOfColor GetComponentColor(const Standard_Integer theID) ;


Standard_EXPORT   Graphic3d_NameOfMaterial GetComponentMaterial(const Standard_Integer theID) ;


Standard_EXPORT   Standard_Integer GetComponentTransparency(const Standard_Integer theID) ;


Standard_EXPORT   McCadConvertTools_ConvertorPtr GetConvertor() ;


Standard_EXPORT   McCadConvertTools_VoidGeneratorPtr GetVoidGenerator() ;


Standard_EXPORT   Standard_Boolean ConvertModel() ;


Standard_EXPORT   Standard_Boolean DecomposeModel() ;


Standard_EXPORT   Standard_Boolean GenerateVoids() ;


Standard_EXPORT   Handle_TopTools_HSequenceOfShape GetModel() ;


Standard_EXPORT   Handle_TopTools_HSequenceOfShape GetDecomposedModel() ;


Standard_EXPORT   Handle_TopTools_HSequenceOfShape GetVoidCellModel() ;


Standard_EXPORT   Standard_Boolean WriteMCNPfile(const TCollection_AsciiString& theFile) ;





protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


Standard_EXPORT   void DeleteShape(const TopoDS_Shape& theShape) ;


 // Fields PRIVATE
 //
Handle_TopTools_HSequenceOfShape myModelShapes;
Handle_TopTools_HSequenceOfShape myConvertedModelShapes;
McCadConvertTools_ConvertorPtr myConvertor;
McCadConvertTools_VoidGeneratorPtr myVG;
TCollection_AsciiString myModelName;
MeshVS_DataMapOfIntegerAsciiString myComponentNames;
Standard_Integer myIDCount;
TColStd_DataMapOfIntegerListOfInteger myComponentMap;
McCadModelManager_DataMapOfShapePtrInteger myShapeIDMap;
McCadModelManager_DataMapOfIntegerPart myIDPartMap;
Standard_Integer myComponentsCount;
Standard_Boolean myIsConverted;
Standard_Boolean myIsDecomposed;


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
