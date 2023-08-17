/*!
 **********************************************************
 *@file ModeChange.c
 *@brief ModeChange logic code file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2023.8.15
 *
 *
 **********************************************************
 **/

#include "ModeChange.h"

/* Mode value */
eMode TgMode = MODE_MS;

/*!
 **********************************************************
 *@brief ModeChange control main function
 *
 *The function need be ported to timer for 8ms3 .
 *
 *@Input:none
 *@Output:none
 *
 **********************************************************
 **/
void MC_Polling(void)
{
	static unsigned char PreSate = 0;

	if(MODE_MS == TgMode)
	{
		if((0 == PreSate) && (PRESS == MC_Get_Bt_Mode()))
		{
			PreSate = 1;
			TgMode = MODE_S;
		}
		else
		{
			PreSate = 0;
		}
	}
	else if(MODE_S == TgMode)
	{
		if((0 == PreSate) && (PRESS == MC_Get_Bt_Mode()))
		{
			PreSate = 1;
			TgMode = MODE_10S;
		}
		else
		{
			PreSate = 0;
		}
	}
	else
	{
		if((0 == PreSate) && (PRESS == MC_Get_Bt_Mode()))
		{
			PreSate = 1;
			TgMode = MODE_MS;
		}
		else
		{
			PreSate = 0;
		}
	}
}
