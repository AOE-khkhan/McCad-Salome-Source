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

#include <McCadTool_ListNodeOfListOfTask.hxx>

#ifndef _Standard_TypeMismatch_HeaderFile
#include <Standard_TypeMismatch.hxx>
#endif

#ifndef _McCadTool_Task_HeaderFile
#include <McCadTool_Task.hxx>
#endif
#ifndef _McCadTool_ListOfTask_HeaderFile
#include <McCadTool_ListOfTask.hxx>
#endif
#ifndef _McCadTool_ListIteratorOfListOfTask_HeaderFile
#include <McCadTool_ListIteratorOfListOfTask.hxx>
#endif
//McCadTool_ListNodeOfListOfTask::~McCadTool_ListNodeOfListOfTask() {}
 


Standard_EXPORT Handle_Standard_Type& McCadTool_ListNodeOfListOfTask_Type_()
{

    static Handle_Standard_Type aType1 = STANDARD_TYPE(TCollection_MapNode);
  static Handle_Standard_Type aType2 = STANDARD_TYPE(MMgt_TShared);
  static Handle_Standard_Type aType3 = STANDARD_TYPE(Standard_Transient);
 

  static Handle_Standard_Transient _Ancestors[]= {aType1,aType2,aType3,NULL};
  static Handle_Standard_Type _aType = new Standard_Type("McCadTool_ListNodeOfListOfTask",
			                                 sizeof(McCadTool_ListNodeOfListOfTask),
			                                 1,
			                                 (Standard_Address)_Ancestors,
			                                 (Standard_Address)NULL);

  return _aType;
}


// DownCast method
//   allow safe downcasting
//
const Handle(McCadTool_ListNodeOfListOfTask) Handle(McCadTool_ListNodeOfListOfTask)::DownCast(const Handle(Standard_Transient)& AnObject) 
{
  Handle(McCadTool_ListNodeOfListOfTask) _anOtherObject;

  if (!AnObject.IsNull()) {
     if (AnObject->IsKind(STANDARD_TYPE(McCadTool_ListNodeOfListOfTask))) {
       _anOtherObject = Handle(McCadTool_ListNodeOfListOfTask)((Handle(McCadTool_ListNodeOfListOfTask)&)AnObject);
     }
  }

  return _anOtherObject ;
}
const Handle(Standard_Type)& McCadTool_ListNodeOfListOfTask::DynamicType() const 
{ 
  return STANDARD_TYPE(McCadTool_ListNodeOfListOfTask) ; 
}
//Standard_Boolean McCadTool_ListNodeOfListOfTask::IsKind(const Handle(Standard_Type)& AType) const 
//{ 
//  return (STANDARD_TYPE(McCadTool_ListNodeOfListOfTask) == AType || TCollection_MapNode::IsKind(AType)); 
//}
//Handle_McCadTool_ListNodeOfListOfTask::~Handle_McCadTool_ListNodeOfListOfTask() {}
#define Item Handle_McCadTool_Task
#define Item_hxx <McCadTool_Task.hxx>
#define TCollection_ListNode McCadTool_ListNodeOfListOfTask
#define TCollection_ListNode_hxx <McCadTool_ListNodeOfListOfTask.hxx>
#define TCollection_ListIterator McCadTool_ListIteratorOfListOfTask
#define TCollection_ListIterator_hxx <McCadTool_ListIteratorOfListOfTask.hxx>
#define Handle_TCollection_ListNode Handle_McCadTool_ListNodeOfListOfTask
#define TCollection_ListNode_Type_() McCadTool_ListNodeOfListOfTask_Type_()
#define TCollection_List McCadTool_ListOfTask
#define TCollection_List_hxx <McCadTool_ListOfTask.hxx>
#include <TCollection_ListNode.gxx>
