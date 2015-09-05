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

#ifndef _McCadAEV_SequenceOfEditor_HeaderFile
#define _McCadAEV_SequenceOfEditor_HeaderFile

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_McCadAEV_SequenceNodeOfSequenceOfEditor_HeaderFile
#include <Handle_McCadAEV_SequenceNodeOfSequenceOfEditor.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class McCadAEV_Editor;
class McCadAEV_SequenceNodeOfSequenceOfEditor;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadAEV_SequenceOfEditor  : public TCollection_BaseSequence {

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

McCadAEV_SequenceOfEditor();


Standard_EXPORT   void Clear() ;
~McCadAEV_SequenceOfEditor()
{
  Clear();
}



Standard_EXPORT  const McCadAEV_SequenceOfEditor& Assign(const McCadAEV_SequenceOfEditor& Other) ;
 const McCadAEV_SequenceOfEditor& operator =(const McCadAEV_SequenceOfEditor& Other) 
{
  return Assign(Other);
}



Standard_EXPORT   void Append(const McCadAEV_Editor& T) ;

  void Append(McCadAEV_SequenceOfEditor& S) ;


Standard_EXPORT   void Prepend(const McCadAEV_Editor& T) ;

  void Prepend(McCadAEV_SequenceOfEditor& S) ;

  void InsertBefore(const Standard_Integer Index,const McCadAEV_Editor& T) ;

  void InsertBefore(const Standard_Integer Index,McCadAEV_SequenceOfEditor& S) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer Index,const McCadAEV_Editor& T) ;

  void InsertAfter(const Standard_Integer Index,McCadAEV_SequenceOfEditor& S) ;


Standard_EXPORT  const McCadAEV_Editor& First() const;


Standard_EXPORT  const McCadAEV_Editor& Last() const;

  void Split(const Standard_Integer Index,McCadAEV_SequenceOfEditor& Sub) ;


Standard_EXPORT  const McCadAEV_Editor& Value(const Standard_Integer Index) const;
 const McCadAEV_Editor& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}



Standard_EXPORT   void SetValue(const Standard_Integer Index,const McCadAEV_Editor& I) ;


Standard_EXPORT   McCadAEV_Editor& ChangeValue(const Standard_Integer Index) ;
  McCadAEV_Editor& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}



Standard_EXPORT   void Remove(const Standard_Integer Index) ;


Standard_EXPORT   void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


Standard_EXPORT McCadAEV_SequenceOfEditor(const McCadAEV_SequenceOfEditor& Other);


 // Fields PRIVATE
 //


};

#define SeqItem McCadAEV_Editor
#define SeqItem_hxx <McCadAEV_Editor.hxx>
#define TCollection_SequenceNode McCadAEV_SequenceNodeOfSequenceOfEditor
#define TCollection_SequenceNode_hxx <McCadAEV_SequenceNodeOfSequenceOfEditor.hxx>
#define Handle_TCollection_SequenceNode Handle_McCadAEV_SequenceNodeOfSequenceOfEditor
#define TCollection_SequenceNode_Type_() McCadAEV_SequenceNodeOfSequenceOfEditor_Type_()
#define TCollection_Sequence McCadAEV_SequenceOfEditor
#define TCollection_Sequence_hxx <McCadAEV_SequenceOfEditor.hxx>

#include <TCollection_Sequence.lxx>

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
