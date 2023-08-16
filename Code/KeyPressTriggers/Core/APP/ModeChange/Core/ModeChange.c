#include "ModeChange.h"

eMode TgMode = MODE_MS;

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
