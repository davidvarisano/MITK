/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#include "DicomPerspective.h"
#include "berryIFolderLayout.h"
//#include "DicomView.h"

DicomPerspective::DicomPerspective()
{
}

void DicomPerspective::CreateInitialLayout(berry::IPageLayout::Pointer layout)
{
  //layout->SetFixed(true);
  std::string editorArea = layout->GetEditorArea();
  layout->SetEditorAreaVisible(false);
  layout->AddStandaloneView("org.mitk.views.dicomview", false, 1, 1.0f, layout->GetEditorArea());
  //layout->AddStandaloneView(DicomView::VIEW_ID, false, 1, 1.0f, layout->GetEditorArea());
  layout->GetViewLayout("org.mitk.views.dicomview")->SetCloseable(false);
  layout->GetViewLayout("org.mitk.views.dicomview")->SetMoveable(false);
}
