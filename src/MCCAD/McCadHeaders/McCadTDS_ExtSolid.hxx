// File generated by CPPExt (Transient)
//
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

#ifndef _McCadTDS_ExtSolid_HeaderFile
#define _McCadTDS_ExtSolid_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadTDS_ExtSolid_HeaderFile
#include <Handle_McCadTDS_ExtSolid.hxx>
#endif

#ifndef _TopoDS_Solid_HeaderFile
#include <TopoDS_Solid.hxx>
#endif
#ifndef _Handle_TopTools_HSequenceOfShape_HeaderFile
#include <Handle_TopTools_HSequenceOfShape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TopTools_HSequenceOfShape;
class TopoDS_Solid;
class TopoDS_Face;
class TCollection_AsciiString;


//! \brief  This is an extended solid <br>

//!  This is an extended solid <br>

class McCadTDS_ExtSolid : public MMgt_TShared {

public:
 // Methods PUBLIC
 // 

Standard_EXPORT McCadTDS_ExtSolid();


Standard_EXPORT McCadTDS_ExtSolid(const TopoDS_Solid& theSolid);


Standard_EXPORT   void SetSolid(const TopoDS_Solid& theSolid) ;


Standard_EXPORT   TopoDS_Solid GetSolid() const;


Standard_EXPORT   void AppendFace(const TopoDS_Face& theFace) ;


Standard_EXPORT   void AppendFaces(const Handle(TopTools_HSequenceOfShape)& theFaceSeq) ;


Standard_EXPORT   TopoDS_Face GetFace() const;


Standard_EXPORT   Handle_TopTools_HSequenceOfShape GetFaces() const;


Standard_EXPORT   void SetHaveExt(const Standard_Boolean theHaveExt) ;


Standard_EXPORT   Standard_Boolean HaveExt() const;


Standard_EXPORT   void SetHaveComp(const Standard_Boolean theHaveComp) ;


Standard_EXPORT   Standard_Boolean HaveComp() const;


Standard_EXPORT   void AppendCompFace(const TopoDS_Face& theFace) ;


Standard_EXPORT   void AppendCompFaces(const Handle(TopTools_HSequenceOfShape)& theFaceSeq) ;


Standard_EXPORT   TopoDS_Face GetCompFace() const;


Standard_EXPORT   Handle_TopTools_HSequenceOfShape GetCompFaces() const;


Standard_EXPORT   void SetComment(const TCollection_AsciiString& theComment) ;


Standard_EXPORT   TCollection_AsciiString GetComment() const;


Standard_EXPORT   void PrintComment(Standard_OStream& theStream) ;
//Standard_EXPORT ~McCadTDS_ExtSolid();




 // Type management
 //
 Standard_EXPORT const Handle(Standard_Type)& DynamicType() const;
 //Standard_EXPORT Standard_Boolean	       IsKind(const Handle(Standard_Type)&) const;

protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //
Standard_Boolean myHaveExt;
Standard_Boolean myHaveComplement;


private: 

 // Methods PRIVATE
 // 


 // Fields PRIVATE
 //
TopoDS_Solid mySolid;
Handle_TopTools_HSequenceOfShape myFaces;
Handle_TopTools_HSequenceOfShape myComplementFaces;
TCollection_AsciiString myComment;


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
