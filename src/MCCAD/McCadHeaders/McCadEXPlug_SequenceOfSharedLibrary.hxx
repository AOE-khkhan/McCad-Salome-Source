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

#ifndef _McCadEXPlug_SequenceOfSharedLibrary_HeaderFile
#define _McCadEXPlug_SequenceOfSharedLibrary_HeaderFile

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary_HeaderFile
#include <Handle_McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class OSD_SharedLibrary;
class McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadEXPlug_SequenceOfSharedLibrary  : public TCollection_BaseSequence {

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

McCadEXPlug_SequenceOfSharedLibrary();


Standard_EXPORT   void Clear() ;
~McCadEXPlug_SequenceOfSharedLibrary()
{
  Clear();
}



Standard_EXPORT  const McCadEXPlug_SequenceOfSharedLibrary& Assign(const McCadEXPlug_SequenceOfSharedLibrary& Other) ;
 const McCadEXPlug_SequenceOfSharedLibrary& operator =(const McCadEXPlug_SequenceOfSharedLibrary& Other) 
{
  return Assign(Other);
}



Standard_EXPORT   void Append(const OSD_SharedLibrary& T) ;

  void Append(McCadEXPlug_SequenceOfSharedLibrary& S) ;


Standard_EXPORT   void Prepend(const OSD_SharedLibrary& T) ;

  void Prepend(McCadEXPlug_SequenceOfSharedLibrary& S) ;

  void InsertBefore(const Standard_Integer Index,const OSD_SharedLibrary& T) ;

  void InsertBefore(const Standard_Integer Index,McCadEXPlug_SequenceOfSharedLibrary& S) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer Index,const OSD_SharedLibrary& T) ;

  void InsertAfter(const Standard_Integer Index,McCadEXPlug_SequenceOfSharedLibrary& S) ;


Standard_EXPORT  const OSD_SharedLibrary& First() const;


Standard_EXPORT  const OSD_SharedLibrary& Last() const;

  void Split(const Standard_Integer Index,McCadEXPlug_SequenceOfSharedLibrary& Sub) ;


Standard_EXPORT  const OSD_SharedLibrary& Value(const Standard_Integer Index) const;
 const OSD_SharedLibrary& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}



Standard_EXPORT   void SetValue(const Standard_Integer Index,const OSD_SharedLibrary& I) ;


Standard_EXPORT   OSD_SharedLibrary& ChangeValue(const Standard_Integer Index) ;
  OSD_SharedLibrary& operator()(const Standard_Integer Index) 
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


Standard_EXPORT McCadEXPlug_SequenceOfSharedLibrary(const McCadEXPlug_SequenceOfSharedLibrary& Other);


 // Fields PRIVATE
 //


};

#define SeqItem OSD_SharedLibrary
#define SeqItem_hxx <OSD_SharedLibrary.hxx>
#define TCollection_SequenceNode McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary
#define TCollection_SequenceNode_hxx <McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary.hxx>
#define Handle_TCollection_SequenceNode Handle_McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary
#define TCollection_SequenceNode_Type_() McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary_Type_()
#define TCollection_Sequence McCadEXPlug_SequenceOfSharedLibrary
#define TCollection_Sequence_hxx <McCadEXPlug_SequenceOfSharedLibrary.hxx>

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