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

#ifndef _McCadMcRead_SequenceNodeOfSequenceOfCellPtr_HeaderFile
#define _McCadMcRead_SequenceNodeOfSequenceOfCellPtr_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadMcRead_SequenceNodeOfSequenceOfCellPtr_HeaderFile
#include <Handle_McCadMcRead_SequenceNodeOfSequenceOfCellPtr.hxx>
#endif

#ifndef _McCadMcRead_CellPtr_HeaderFile
#include <McCadMcRead_CellPtr.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class McCadMcRead_SequenceOfCellPtr;



class McCadMcRead_SequenceNodeOfSequenceOfCellPtr : public TCollection_SeqNode {

public:
 // Methods PUBLIC
 // 

McCadMcRead_SequenceNodeOfSequenceOfCellPtr(const McCadMcRead_CellPtr& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);

  McCadMcRead_CellPtr& Value() const;
//Standard_EXPORT ~McCadMcRead_SequenceNodeOfSequenceOfCellPtr();




 // Type management
 //
 Standard_EXPORT const Handle(Standard_Type)& DynamicType() const;
 //Standard_EXPORT Standard_Boolean	       IsKind(const Handle(Standard_Type)&) const;

protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


 // Fields PRIVATE
 //
McCadMcRead_CellPtr myValue;


};

#define SeqItem McCadMcRead_CellPtr
#define SeqItem_hxx <McCadMcRead_CellPtr.hxx>
#define TCollection_SequenceNode McCadMcRead_SequenceNodeOfSequenceOfCellPtr
#define TCollection_SequenceNode_hxx <McCadMcRead_SequenceNodeOfSequenceOfCellPtr.hxx>
#define Handle_TCollection_SequenceNode Handle_McCadMcRead_SequenceNodeOfSequenceOfCellPtr
#define TCollection_SequenceNode_Type_() McCadMcRead_SequenceNodeOfSequenceOfCellPtr_Type_()
#define TCollection_Sequence McCadMcRead_SequenceOfCellPtr
#define TCollection_Sequence_hxx <McCadMcRead_SequenceOfCellPtr.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)
//


#endif
