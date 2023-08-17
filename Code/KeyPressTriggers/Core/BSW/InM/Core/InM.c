/*!
 **********************************************************
 *@file InM.c
 *@brief InM Mode logic code file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2023.8.15
 *
 *
 **********************************************************
 **/

#include "InM.h"

/* Button State value */
TKeyPress KeyPress[BUTTON_NUMBER] =
{
	{NOPRESS, NOPRESS, InitNumber},
	{NOPRESS, NOPRESS, InitNumber},
	{NOPRESS, NOPRESS, InitNumber},
	{NOPRESS, NOPRESS, InitNumber}
};

/*!
 **********************************************************
 *@brief InM get button state function
 *
 *The function need be ported to timer for 4ms1 .
 *
 *@Input:none
 *@Output:none
 *
 **********************************************************
 **/
void InM_Gather(void)
{
	KeyPress[MODE].RealState = InM_ReadMode();
	KeyPress[TIMEUP].RealState = InM_ReadTimeUp();
	KeyPress[TIMEDOWN].RealState = InM_ReadTimeDown();
	KeyPress[TRIGGER].RealState = InM_ReadTrigger();
}

/*!
 **********************************************************
 *@brief InM filtering function
 *
 *The function need be ported to timer for 8ms3 .
 *
 *@Input:none
 *@Output:none
 *
 **********************************************************
 **/
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
