/*!
 **********************************************************
 *@file DigitalTube.c
 *@brief DigitalTube logic code file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2023.8.15
 *
 *
 **********************************************************
 **/

#include "DigitalTube.h"

/* Display DigitalTube value */
unsigned char DisplayDig1 = 0x0u;
unsigned char DisplayDig2 = 0x0u;
unsigned char DisplayDig3 = 0x0u;

/* Declare functions */
static void DT_Display_DIG1(void);
static void DT_Display_DIG2(void);
static void DT_Display_DIG3(void);
static void DT_Display(unsigned char DisplayDig);

/*!
 **********************************************************
 *@brief DigitalTube show function
 *
 *The function need be ported to timer for 2ms .
 *
 *@Input:none
 *@Output:none
 *
 **********************************************************
 **/
void DT_Polling(void)
{
	static unsigned char cnt = 0;

	if(cnt > 2)
	{
		cnt = 0;
	}

	switch(cnt)
	{
		case 0:DT_Display_DIG1();break;
		case 1:DT_Display_DIG2();break;
		case 2:DT_Display_DIG3();break;
	}

	cnt++;
}

/*!
 **********************************************************
 *@brief DigitalTube show DIG1 function
 *
 *The function need be ported to timer for 2ms .
 *
 *@Input:none
 *@Output:none
 *
 **********************************************************
 **/
static void DT_Display_DIG1(void)
{
	DT_Enable_DIG1();
	DT_Disable_DIG2();
	DT_Disable_DIG3();
	DT_Display(DisplayDig1);
}

/*!
 **********************************************************
 *@brief DigitalTube show DIG2 function
 *
 *The function need be ported to timer for 2ms .
 *
 *@Input:none
 *@Output:none
 *
 **********************************************************
 **/
static void DT_Display_DIG2(void)
{
	DT_Disable_DIG1();
	DT_Enable_DIG2();
	DT_Disable_DIG3();
	DT_Display(DisplayDig2);
}

/*!
 **********************************************************
 *@brief DigitalTube show DIG3 function
 *
 *The function need be ported to timer for 2ms .
 *
 *@Input:none
 *@Output:none
 *
 **********************************************************
 **/
static void DT_Display_DIG3(void)
{
	DT_Disable_DIG1();
	DT_Disable_DIG2();
	DT_Enable_DIG3();
	DT_Display(DisplayDig3);
}

/*!
 **********************************************************
 *@brief analysis DislayDig value
 *
 *The function need be ported to timer for 2ms .
 *
 *@Input: DisplayDig
 *@Output:none
 *
 **********************************************************
 **/
static void DT_Display(unsigned char DisplayDig)
{
	if((DisplayDig >> 0u) & 0x01u)
	{
		DT_Enable_DIG_A();
	}
	else
	{
		DT_Disable_DIG_A();
	}

	if((DisplayDig >> 1u) & 0x01u)
	{
		DT_Enable_DIG_B();
	}
	else
	{
		DT_Disable_DIG_B();
	}

	if((DisplayDig >> 2u) & 0x01u)
	{
		DT_Enable_DIG_C();
	}
	else
	{
		DT_Disable_DIG_C();
	}

	if((DisplayDig >> 3u) & 0x01u)
	{
		DT_Enable_DIG_D();
	}
	else
	{
		DT_Disable_DIG_D();
	}

	if((DisplayDig >> 4u) & 0x01u)
	{
		DT_Enable_DIG_E();
	}
	else
	{
		DT_Disable_DIG_E();
	}

	if((DisplayDig >> 5u) & 0x01u)
	{
		DT_Enable_DIG_F();
	}
	else
	{
		DT_Disable_DIG_F();
	}

	if((DisplayDig >> 6u) & 0x01u)
	{
		DT_Enable_DIG_G();
	}
	else
	{
		DT_Disable_DIG_G();
	}

	if((DisplayDig >> 7u) & 0x01u)
	{
		DT_Enable_DIG_DP();
	}
	else
	{
		DT_Disable_DIG_DP();
	}
}
