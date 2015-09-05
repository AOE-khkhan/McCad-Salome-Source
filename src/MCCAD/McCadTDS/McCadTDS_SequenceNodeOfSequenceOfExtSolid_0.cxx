// File generated by CPPExt (Transient)
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

#include <McCadTDS_SequenceNodeOfSequenceOfExtSolid.hxx>

#ifndef _Standard_TypeMismatch_HeaderFile
#include <Standard_TypeMismatch.hxx>
#endif

#ifndef _McCadTDS_ExtSolid_HeaderFile
#include <McCadTDS_ExtSolid.hxx>
#endif
#ifndef _McCadTDS_SequenceOfExtSolid_HeaderFile
#include <McCadTDS_SequenceOfExtSolid.hxx>
#endif
//McCadTDS_SequenceNodeOfSequenceOfExtSolid::~McCadTDS_SequenceNodeOfSequenceOfExtSolid() {}
 


Standard_EXPORT Handle_Standard_Type& McCadTDS_SequenceNodeOfSequenceOfExtSolid_Type_()
{

    static Handle_Standard_Type aType1 = STANDARD_TYPE(TCollection_SeqNode);
  static Handle_Standard_Type aType2 = STANDARD_TYPE(MMgt_TShared);
  static Handle_Standard_Type aType3 = STANDARD_TYPE(Standard_Transient);
 

  static Handle_Standard_Transient _Ancestors[]= {aType1,aType2,aType3,NULL};
  static Handle_Standard_Type _aType = new Standard_Type("McCadTDS_SequenceNodeOfSequenceOfExtSolid",
			                                 sizeof(McCadTDS_SequenceNodeOfSequenceOfExtSolid),
			                                 1,
			                                 (Standard_Address)_Ancestors,
			                                 (Standard_Address)NULL);

  return _aType;
}


// DownCast method
//   allow safe downcasting
//
const Handle(McCadTDS_SequenceNodeOfSequenceOfExtSolid) Handle(McCadTDS_SequenceNodeOfSequenceOfExtSolid)::DownCast(const Handle(Standard_Transient)& AnObject) 
{
  Handle(McCadTDS_SequenceNodeOfSequenceOfExtSolid) _anOtherObject;

  if (!AnObject.IsNull()) {
     if (AnObject->IsKind(STANDARD_TYPE(McCadTDS_SequenceNodeOfSequenceOfExtSolid))) {
       _anOtherObject = Handle(McCadTDS_SequenceNodeOfSequenceOfExtSolid)((Handle(McCadTDS_SequenceNodeOfSequenceOfExtSolid)&)AnObject);
     }
  }

  return _anOtherObject ;
}
const Handle(Standard_Type)& McCadTDS_SequenceNodeOfSequenceOfExtSolid::DynamicType() const 
{ 
  return STANDARD_TYPE(McCadTDS_SequenceNodeOfSequenceOfExtSolid) ; 
}
//Standard_Boolean McCadTDS_SequenceNodeOfSequenceOfExtSolid::IsKind(const Handle(Standard_Type)& AType) const 
//{ 
//  return (STANDARD_TYPE(McCadTDS_SequenceNodeOfSequenceOfExtSolid) == AType || TCollection_SeqNode::IsKind(AType)); 
//}
//Handle_McCadTDS_SequenceNodeOfSequenceOfExtSolid::~Handle_McCadTDS_SequenceNodeOfSequenceOfExtSolid() {}
#define SeqItem Handle_McCadTDS_ExtSolid
#define SeqItem_hxx <McCadTDS_ExtSolid.hxx>
#define TCollection_SequenceNode McCadTDS_SequenceNodeOfSequenceOfExtSolid
#define TCollection_SequenceNode_hxx <McCadTDS_SequenceNodeOfSequenceOfExtSolid.hxx>
#define Handle_TCollection_SequenceNode Handle_McCadTDS_SequenceNodeOfSequenceOfExtSolid
#define TCollection_SequenceNode_Type_() McCadTDS_SequenceNodeOfSequenceOfExtSolid_Type_()
#define TCollection_Sequence McCadTDS_SequenceOfExtSolid
#define TCollection_Sequence_hxx <McCadTDS_SequenceOfExtSolid.hxx>
#include <TCollection_SequenceNode.gxx>

