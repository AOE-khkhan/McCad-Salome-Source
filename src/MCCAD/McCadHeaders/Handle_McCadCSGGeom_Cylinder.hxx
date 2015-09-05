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

#ifndef _Handle_McCadCSGGeom_Cylinder_HeaderFile
#define _Handle_McCadCSGGeom_Cylinder_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif

#ifndef _Handle_McCadCSGGeom_Surface_HeaderFile
#include <Handle_McCadCSGGeom_Surface.hxx>
#endif

class Standard_Transient;
class Handle_Standard_Type;
class Handle(McCadCSGGeom_Surface);
class McCadCSGGeom_Cylinder;
Standard_EXPORT Handle_Standard_Type& STANDARD_TYPE(McCadCSGGeom_Cylinder);

class Handle(McCadCSGGeom_Cylinder) : public Handle(McCadCSGGeom_Surface) {
  public:
    Handle(McCadCSGGeom_Cylinder)():Handle(McCadCSGGeom_Surface)() {} 
    Handle(McCadCSGGeom_Cylinder)(const Handle(McCadCSGGeom_Cylinder)& aHandle) : Handle(McCadCSGGeom_Surface)(aHandle) 
     {
     }

    Handle(McCadCSGGeom_Cylinder)(const McCadCSGGeom_Cylinder* anItem) : Handle(McCadCSGGeom_Surface)((McCadCSGGeom_Surface *)anItem) 
     {
     }

    Handle(McCadCSGGeom_Cylinder)& operator=(const Handle(McCadCSGGeom_Cylinder)& aHandle)
     {
      Assign(aHandle.Access());
      return *this;
     }

    Handle(McCadCSGGeom_Cylinder)& operator=(const McCadCSGGeom_Cylinder* anItem)
     {
      Assign((Standard_Transient *)anItem);
      return *this;
     }

    McCadCSGGeom_Cylinder* operator->() const
     {
      return (McCadCSGGeom_Cylinder *)ControlAccess();
     }

//   Standard_EXPORT ~Handle(McCadCSGGeom_Cylinder)();
 
   Standard_EXPORT static const Handle(McCadCSGGeom_Cylinder) DownCast(const Handle(Standard_Transient)& AnObject);
};
#endif
