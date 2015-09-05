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

#ifndef _McCadMcRead_FillBuilder_HeaderFile
#define _McCadMcRead_FillBuilder_HeaderFile

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_McCadMcRead_Fill_HeaderFile
#include <Handle_McCadMcRead_Fill.hxx>
#endif
class McCadMcRead_Fill;
class TCollection_AsciiString;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


//! \brief Make MCNP Fill Card for MCNP reader

//! Builds Fill Card with MCNP syntax. <br>
//! <br>
//! <br>

class McCadMcRead_FillBuilder  {

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


Standard_EXPORT McCadMcRead_FillBuilder();


Standard_EXPORT   Standard_Boolean Build(const TCollection_AsciiString& sDesc) ;


Standard_EXPORT   Standard_Boolean IsDone() const;


Standard_EXPORT   Handle_McCadMcRead_Fill GetFiller() const;





protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


Standard_EXPORT   void Done() ;


Standard_EXPORT   void NotDone() ;


Standard_EXPORT   Standard_Boolean ExtractPrefix(const TCollection_AsciiString& sDesc) ;


Standard_EXPORT   Standard_Boolean ExtractEntry(const TCollection_AsciiString& sDesc) ;


 // Fields PRIVATE
 //
Standard_Boolean myIsDone;
Handle_McCadMcRead_Fill myFill;


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
