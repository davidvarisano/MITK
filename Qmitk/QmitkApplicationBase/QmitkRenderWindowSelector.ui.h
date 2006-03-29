/****************************************************************************
** ui.h extension file, included from the uic-generated form implementation.
**
** If you want to add, delete, or rename functions or slots, use
** Qt Designer to update this file, preserving your code.
**
** You should not define a constructor or destructor in this file.
** Instead, write your code in functions called init() and destroy().
** These will automatically be called by the form's constructor and
** destructor.
*****************************************************************************/

#include <mitkRenderWindow.h>
#include <mitkBaseRenderer.h>

#include <mitkGlobalInteraction.h>
#include <mitkFocusManager.h>

#include <qapplication.h>
#include <qclipboard.h>

void QmitkRenderWindowSelector::init()
{
  m_UpdateRendererListCommand = itk::SimpleMemberCommand<QmitkRenderWindowSelector>::New();
  m_UpdateRendererListCommand->SetCallbackFunction(
    this, &QmitkRenderWindowSelector::UpdateRendererList
  );

  mitk::FocusManager* fm =
    mitk::GlobalInteraction::GetInstance()->GetFocusManager();
  mitk::FocusEvent fe;
  fm->AddObserver(fe, m_UpdateRendererListCommand);

  this->UpdateRendererList();
}

void QmitkRenderWindowSelector::UpdateRendererList()
{
  mitk::RenderWindow* focusedRenderWindow = NULL;

  mitk::FocusManager* fm =
    mitk::GlobalInteraction::GetInstance()->GetFocusManager();

  mitk::BaseRenderer::ConstPointer br = fm->GetFocused();
  if (br.IsNotNull())
  {
    focusedRenderWindow = br->GetRenderWindow();
  }

  int selectedItem = -1;
  int itemNumber = 0;
  m_lbRenderWindows->clear();
  const mitk::RenderWindow::RenderWindowSet rws = mitk::RenderWindow::GetInstances();
  for (mitk::RenderWindow::RenderWindowSet::const_iterator iter = rws.begin();iter != rws.end();++iter,++itemNumber)
  {
    if ((*iter)->GetName())
    {
      m_lbRenderWindows->insertItem(QString((*iter)->GetName()));
      if(focusedRenderWindow==(*iter))
        selectedItem = itemNumber;
    }

  }
  if (selectedItem>=0)
  {
    m_lbRenderWindows->setCurrentItem(selectedItem);
  }
  else
  {
    m_lbRenderWindows->clearSelection();
  }
}


mitk::RenderWindow* QmitkRenderWindowSelector::GetSelectedRenderWindow()
{  
  int selectedItem = m_lbRenderWindows->currentItem();
  int itemNumber = -1;
  const mitk::RenderWindow::RenderWindowSet rws = mitk::RenderWindow::GetInstances();
  mitk::RenderWindow::RenderWindowSet::const_iterator iter;
  for (iter = rws.begin();iter != rws.end();++iter)
  {
    ++itemNumber;
    if(itemNumber==selectedItem)
      break;
  }
  if(itemNumber==selectedItem)
  {
    return (*iter);
  }
  return NULL;
}
