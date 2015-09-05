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

#ifndef _McCadMcRead_Reader_HeaderFile
#define _McCadMcRead_Reader_HeaderFile

#ifndef _McCadMcRead_DataMapOfIntegerCell_HeaderFile
#include <McCadMcRead_DataMapOfIntegerCell.hxx>
#endif
#ifndef _McCadCSGGeom_DataMapOfIntegerSurface_HeaderFile
#include <McCadCSGGeom_DataMapOfIntegerSurface.hxx>
#endif
#ifndef _McCadCSGGeom_DataMapOfIntegerTransformation_HeaderFile
#include <McCadCSGGeom_DataMapOfIntegerTransformation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class OSD_File;
class TCollection_AsciiString;
class McCadMcRead_DataMapOfIntegerCell;
class McCadCSGGeom_DataMapOfIntegerSurface;
class McCadCSGGeom_DataMapOfIntegerTransformation;

#include <TColStd_HSequenceOfAsciiString.hxx>
#include <gp_Pnt.hxx>
#include <McCadMDReader_Reader.hxx>

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


//! \brief Parses MCNP input files

//! Creates an MCNP Cell with MCNP syntax. <br>
//! <br>
//! <br>

class McCadMcRead_Reader  {

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


Standard_EXPORT McCadMcRead_Reader();


Standard_EXPORT   Standard_Boolean Parse(OSD_File& theStream) ;


Standard_EXPORT   Standard_Boolean ParseMessage(OSD_File& theStream) ;


Standard_EXPORT   Standard_Boolean ParseTitle(OSD_File& theStream) ;


Standard_EXPORT   Standard_Boolean ParseCell(OSD_File& theStream) ;


Standard_EXPORT   Standard_Boolean ParseSurface(OSD_File& theStream) ;


//Standard_EXPORT   Standard_Boolean ParseTRC(OSD_File& theStream) ;


Standard_EXPORT   Standard_Boolean ParseDataCard(OSD_File& theStream) ;


Standard_EXPORT   void RemoveComment(TCollection_AsciiString& sline) ;


Standard_EXPORT   Standard_Boolean IsBlankDeliminter(const TCollection_AsciiString& sline) ;


Standard_EXPORT   Standard_Boolean IsContinuation(const TCollection_AsciiString& sline) ;


Standard_EXPORT   Standard_Boolean IsComment(const TCollection_AsciiString& sline) ;


Standard_EXPORT   Standard_Boolean CreatCellInst(const TCollection_AsciiString& sline) ;


Standard_EXPORT   Standard_Boolean CreatSurfInst(const TCollection_AsciiString& sline) ;


Standard_EXPORT   Standard_Boolean CreatTRInst(const TCollection_AsciiString& sline) ;


Standard_EXPORT   Standard_Boolean CreatMCardInst(const TCollection_AsciiString& sline) ;


Standard_EXPORT   void ResolveLattices() ;


Standard_EXPORT   void ResolveFiller() ;


Standard_EXPORT   void GetCells(McCadMcRead_DataMapOfIntegerCell& theMap) ;


Standard_EXPORT   void GetSurfaces(McCadCSGGeom_DataMapOfIntegerSurface& theMap) ;


Standard_EXPORT   void GetTrsfs(McCadCSGGeom_DataMapOfIntegerTransformation& theMap) ;


Standard_EXPORT  void GetMDReader(McCadMDReader_Reader& theMDReader) ;


Standard_EXPORT void MakeLatticeCellTransformation(const Standard_Integer& dim, const Handle_TColStd_HSequenceOfInteger& surfNum,
		                                           const gp_Pnt& thePlace, const Standard_Integer& latType);


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
McCadMcRead_DataMapOfIntegerCell myCellMap;
McCadCSGGeom_DataMapOfIntegerSurface mySurfMap;
McCadCSGGeom_DataMapOfIntegerTransformation myTrsfMap;
Standard_Boolean myTitleSkipped;
McCadMDReader_Reader myMDReader;
Standard_Boolean myUnsorted;
Standard_Integer myMacroBodySurfNumCnt;

};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
