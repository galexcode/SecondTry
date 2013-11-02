#ifndef _SECONDTRYFRAME_H_
#define _SECONDTRYFRAME_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FUi.h>
#include <FUiIme.h>
#include <FGraphics.h>
#include <gl.h>

class SecondTryFrame
	: public Tizen::Ui::Controls::Frame
{
public:
	SecondTryFrame(void);
	virtual ~SecondTryFrame(void);

public:
	virtual result OnInitializing(void);
	virtual result OnTerminating(void);
};

#endif	//_SECONDTRYFRAME_H_
