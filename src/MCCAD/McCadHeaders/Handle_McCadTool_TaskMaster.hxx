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

#ifndef _Handle_McCadTool_TaskMaster_HeaderFile
#define _Handle_McCadTool_TaskMaster_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif

#ifndef _Handle_MMgt_TShared_HeaderFile
#include <Handle_MMgt_TShared.hxx>
#endif

class Standard_Transient;
class Handle_Standard_Type;
class Handle(MMgt_TShared);
class McCadTool_TaskMaster;
Standard_EXPORT Handle_Standard_Type& STANDARD_TYPE(McCadTool_TaskMaster);

class Handle(McCadTool_TaskMaster) : public Handle(MMgt_TShared) {
  public:
    Handle(McCadTool_TaskMaster)():Handle(MMgt_TShared)() {} 
    Handle(McCadTool_TaskMaster)(const Handle(McCadTool_TaskMaster)& aHandle) : Handle(MMgt_TShared)(aHandle) 
     {
     }

    Handle(McCadTool_TaskMaster)(const McCadTool_TaskMaster* anItem) : Handle(MMgt_TShared)((MMgt_TShared *)anItem) 
     {
     }

    Handle(McCadTool_TaskMaster)& operator=(const Handle(McCadTool_TaskMaster)& aHandle)
     {
      Assign(aHandle.Access());
      return *this;
     }

    Handle(McCadTool_TaskMaster)& operator=(const McCadTool_TaskMaster* anItem)
     {
      Assign((Standard_Transient *)anItem);
      return *this;
     }

    McCadTool_TaskMaster* operator->() const
     {
      return (McCadTool_TaskMaster *)ControlAccess();
     }

//   Standard_EXPORT ~Handle(McCadTool_TaskMaster)();
 
   Standard_EXPORT static const Handle(McCadTool_TaskMaster) DownCast(const Handle(Standard_Transient)& AnObject);
};
#endif
