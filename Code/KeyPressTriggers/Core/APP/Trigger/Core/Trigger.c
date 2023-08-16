#include"Trigger.h"

unsigned long TG_Time = 0;

static unsigned long TG_Calculate_Time(eMode Mode);

void TG_Polling(void)
{
	static unsigned char PreSate = 0;
	static unsigned char TrigerSate = 0;

	/* Press Trigger button and calculate trigger time and trigger */
	if((0 == PreSate) && (PRESS == TG_Get_TriggerBt()))
	{
		PreSate = 1;
		if(0 == TrigerSate)
		{
			TG_Time = TG_Calculate_Time(TG_Get_Mode());
			TrigerSate = 1;
			TG_Set_Triger();
		}
	}
	else
	{
		PreSate = 0;
	}

	/* Wait Release Trigger time and Clear Trigger */
	if((1 == TrigerSate) && (TG_Time != 0))
	{
		TG_Time--;
	}
	else if(0 == TG_Time)
	{
		TG_Clear_Triger();
		TrigerSate = 0;
	}
	else
	{
		/* Keep */
	}
}

/* Calculate Trigger time */
static unsigned long TG_Calculate_Time(eMode Mode)
{
	 unsigned char SiglePlaces = 0;
	 unsigned char TenPlaces = 0;
	 unsigned char HundredPlaces = 0;
	 unsigned long countTime = 0;

	 /* Get Trigger time */
	 SiglePlaces = TG_Get_SiglePlaces();
	 TenPlaces = TG_Get_TenPlaces();
	 HundredPlaces = TG_Get_HundredPlaces();

	 if(MODE_MS == Mode)
	 {
		 countTime = (unsigned long)(SiglePlaces + (TenPlaces * 10u) + (HundredPlaces * 100u));
	 }
	 else if(MODE_S == Mode)
	 {
		 countTime = (unsigned long)(SiglePlaces + (TenPlaces * 10u) + (HundredPlaces * 100u));
		 countTime = (unsigned long)(countTime * 1000u);
	 }
	 else
	 {
		 countTime = (unsigned long)(SiglePlaces + (TenPlaces * 10u) + (HundredPlaces * 100u));
		 countTime = (unsigned long)(countTime * 10000u);
	 }

	 return countTime;
}
