/*!
 **********************************************************
 *@file Display.c
 *@brief Display logic code file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2023.8.15
 *
 *
 **********************************************************
 **/

#include "Display.h"

/* Digital tube coding value */
const unsigned char DP_Show[DP_NUMBER]=
{
	DP_0, DP_1, DP_2,
	DP_3, DP_4, DP_5,
	DP_6, DP_7, DP_8,
	DP_9
};

/* Digital show control index */
DP_Index_T DP_Index_1 = DP_ZERO;
DP_Index_T DP_Index_2 = DP_ZERO;
DP_Index_T DP_Index_3 = DP_ZERO;

/* Declare functions */
static void DP_IndexLogic(void);
static void DP_ModeLogic(void);
static void DP_Output(void);

/*!
 **********************************************************
 *@brief Display control main function
 *
 *The function need be ported to timer for 8ms3 .
 *
 *@Input:none
 *@Output:none
 *
 **********************************************************
 **/
void DP_Polling(void)
{
	DP_IndexLogic();
	DP_ModeLogic();
	DP_Output();
}

/*!
 **********************************************************
 *@brief Index change logic
 *
 *The function need be ported to timer for 8ms3 .
 *
 *@Input:none
 *@Output:none
 *
 **********************************************************
 **/
static void DP_IndexLogic(void)
{
	static unsigned char PreSate = 0;
	static unsigned char PreSate1 = 0;

	if((0 == PreSate) && (PRESS == DP_Get_TimeUpBt()))
	{
		PreSate = 1;
		if(DP_NINE > DP_Index_1)
		{
			DP_Index_1++;
		}
		else
		{
			if(DP_NINE > DP_Index_2)
			{
				DP_Index_2++;
				DP_Index_1 = 0;
			}
			else
			{
				if(DP_NINE > DP_Index_3)
				{
					DP_Index_3++;
					DP_Index_1 = 0;
					DP_Index_2 = 0;
				}
				else
				{
					/* Keep */
				}
			}
		}
	}
	else
	{
		PreSate = 0;
	}

	if((0 == PreSate1) && (PRESS == DP_Get_TimeDownBt()))
	{
		PreSate1 = 1;
		if(DP_ZERO < DP_Index_1)
		{
			DP_Index_1--;
		}
		else
		{
			if(DP_ZERO < DP_Index_2)
			{
				DP_Index_2--;
				DP_Index_1 = DP_NINE;
			}
			else
			{
				if(DP_ZERO < DP_Index_3)
				{
					DP_Index_3--;
					DP_Index_1 = DP_NINE;
					DP_Index_2 = DP_NINE;
				}
				else
				{
					/* Keep */
				}
			}
		}
	}
	else
	{
		PreSate1 = 0;
	}
}

/*!
 **********************************************************
 *@brief Show Mode Logic
 *
 *The function need be ported to timer for 8ms3 .
 *
 *@Input:none
 *@Output:none
 *
 **********************************************************
 **/
static void DP_ModeLogic(void)
{
	if(MODE_MS == DP_Get_Mode())
	{
		DP_Set_MS();
		DP_Clear_S();
		DP_Clear_10S();
	}
	else if(MODE_S == DP_Get_Mode())
	{
		DP_Clear_MS();
		DP_Set_S();
		DP_Clear_10S();
	}
	else
	{
		DP_Clear_MS();
		DP_Clear_S();
		DP_Set_10S();
	}
}

/*!
 **********************************************************
 *@brief OutPut Show
 *
 *The function need be ported to timer for 8ms3 .
 *
 *@Input:none
 *@Output:none
 *
 **********************************************************
 **/
static void DP_Output(void)
{
	DP_Set_DiplayDig1(DP_Show[DP_Index_1]);
	DP_Set_DiplayDig2(DP_Show[DP_Index_2]);
	DP_Set_DiplayDig3(DP_Show[DP_Index_3]);
}
