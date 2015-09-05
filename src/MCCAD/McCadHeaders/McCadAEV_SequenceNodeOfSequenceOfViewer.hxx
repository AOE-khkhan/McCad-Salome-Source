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

#ifndef _McCadAEV_SequenceNodeOfSequenceOfViewer_HeaderFile
#define _McCadAEV_SequenceNodeOfSequenceOfViewer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadAEV_SequenceNodeOfSequenceOfViewer_HeaderFile
#include <Handle_McCadAEV_SequenceNodeOfSequenceOfViewer.hxx>
#endif

#ifndef _McCadAEV_Viewer_HeaderFile
#include <McCadAEV_Viewer.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class McCadAEV_Viewer;
class McCadAEV_SequenceOfViewer;



class McCadAEV_SequenceNodeOfSequenceOfViewer : public TCollection_SeqNode {

public:
 // Methods PUBLIC
 // 

McCadAEV_SequenceNodeOfSequenceOfViewer(const McCadAEV_Viewer& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);

  McCadAEV_Viewer& Value() const;
//Standard_EXPORT ~McCadAEV_SequenceNodeOfSequenceOfViewer();




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
McCadAEV_Viewer myValue;


};

#define SeqItem McCadAEV_Viewer
#define SeqItem_hxx <McCadAEV_Viewer.hxx>
#define TCollection_SequenceNode McCadAEV_SequenceNodeOfSequenceOfViewer
#define TCollection_SequenceNode_hxx <McCadAEV_SequenceNodeOfSequenceOfViewer.hxx>
#define Handle_TCollection_SequenceNode Handle_McCadAEV_SequenceNodeOfSequenceOfViewer
#define TCollection_SequenceNode_Type_() McCadAEV_SequenceNodeOfSequenceOfViewer_Type_()
#define TCollection_Sequence McCadAEV_SequenceOfViewer
#define TCollection_Sequence_hxx <McCadAEV_SequenceOfViewer.hxx>

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
