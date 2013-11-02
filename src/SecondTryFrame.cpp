#include "SecondTryFrame.h"
#include "SecondTryForm.h"

using namespace Tizen::Base;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;

SecondTryFrame::SecondTryFrame(void)
{
}

SecondTryFrame::~SecondTryFrame(void)
{
}

result
SecondTryFrame::OnInitializing(void)
{
	result r = E_SUCCESS;

	// Create a form
	SecondTryForm* pSecondTryForm = new SecondTryForm();
	pSecondTryForm->Initialize();

	// Add the form to the frame
	AddControl(pSecondTryForm);

	// Set the current form
	SetCurrentForm(pSecondTryForm);

	// Draw the form
	pSecondTryForm->Invalidate(true);

	// TODO: Add your initialization code here

	return r;
}

result
SecondTryFrame::OnTerminating(void)
{
	result r = E_SUCCESS;

	// TODO: Add your termination code here

	return r;
}


