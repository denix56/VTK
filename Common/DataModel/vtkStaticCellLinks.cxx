/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkStaticCellLinks.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "vtkStaticCellLinks.h"

#include "vtkObjectFactory.h"
#include "vtkCellArray.h"
#include "vtkDataSet.h"
#include "vtkPolyData.h"
#include "vtkUnstructuredGrid.h"

vtkStandardNewMacro(vtkStaticCellLinks);

//----------------------------------------------------------------------------
vtkStaticCellLinks::vtkStaticCellLinks()
{
  this->Impl = new vtkStaticCellLinksTemplate<vtkIdType>;
}


//----------------------------------------------------------------------------
vtkStaticCellLinks::~vtkStaticCellLinks()
{
  delete this->Impl;
}


//----------------------------------------------------------------------------
// Build the link list array.
void vtkStaticCellLinks::BuildLinks(vtkDataSet *data)
{
  this->Impl->BuildLinks(data);
}

//----------------------------------------------------------------------------
void vtkStaticCellLinks::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os,indent);

}
