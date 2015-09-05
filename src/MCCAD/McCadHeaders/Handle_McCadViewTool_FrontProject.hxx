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

#ifndef _Handle_McCadViewTool_FrontProject_HeaderFile
#define _Handle_McCadViewTool_FrontProject_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif

#ifndef _Handle_McCadTool_Task_HeaderFile
#include <Handle_McCadTool_Task.hxx>
#endif

class Standard_Transient;
class Handle_Standard_Type;
class Handle(McCadTool_Task);
class McCadViewTool_FrontProject;
Standard_EXPORT Handle_Standard_Type& STANDARD_TYPE(McCadViewTool_FrontProject);

class Handle(McCadViewTool_FrontProject) : public Handle(McCadTool_Task) {
  public:
    Handle(McCadViewTool_FrontProject)():Handle(McCadTool_Task)() {} 
    Handle(McCadViewTool_FrontProject)(const Handle(McCadViewTool_FrontProject)& aHandle) : Handle(McCadTool_Task)(aHandle) 
     {
     }

    Handle(McCadViewTool_FrontProject)(const McCadViewTool_FrontProject* anItem) : Handle(McCadTool_Task)((McCadTool_Task *)anItem) 
     {
     }

    Handle(McCadViewTool_FrontProject)& operator=(const Handle(McCadViewTool_FrontProject)& aHandle)
     {
      Assign(aHandle.Access());
      return *this;
     }

    Handle(McCadViewTool_FrontProject)& operator=(const McCadViewTool_FrontProject* anItem)
     {
      Assign((Standard_Transient *)anItem);
      return *this;
     }

    McCadViewTool_FrontProject* operator->() const
     {
      return (McCadViewTool_FrontProject *)ControlAccess();
     }

//   Standard_EXPORT ~Handle(McCadViewTool_FrontProject)();
 
   Standard_EXPORT static const Handle(McCadViewTool_FrontProject) DownCast(const Handle(Standard_Transient)& AnObject);
};
#endif