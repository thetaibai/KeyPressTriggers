#include "InM.h"

TKeyPress KeyPress[BUTTON_NUMBER] =
{
	{NOPRESS, NOPRESS, InitNumber},
	{NOPRESS, NOPRESS, InitNumber},
	{NOPRESS, NOPRESS, InitNumber},
	{NOPRESS, NOPRESS, InitNumber}
};

void InM_Gather(void)
{
	KeyPress[MODE].RealState = InM_ReadMode();
	KeyPress[TIMEUP].RealState = InM_ReadTimeUp();
	KeyPress[TIMEDOWN].RealState = InM_ReadTimeDown();
	KeyPress[TRIGGER].RealState = InM_ReadTrigger();
}

void InM_ButtonDetect(void)
{
	Button i = MODE;

	for(i = MODE; i < BUTTON_NUMBER; i++)
	{
		if(NOPRESS == KeyPress[i].RealState)
		{
			KeyPress[i].TimeCnt = InitNumber;
			KeyPress[i].RealState = NOPRESS;
		}
		else if((PRESS == KeyPress[i].RealState)
				&& (FILT_CYCLE < KeyPress[i].TimeCnt))
		{
			KeyPress[i].TimeCnt++;
		}
		else
		{
			KeyPress[i].RealState = PRESS;
		}
	}
}
