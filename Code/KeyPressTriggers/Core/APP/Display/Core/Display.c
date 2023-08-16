#include "Display.h"

const unsigned char DP_Show[DP_NUMBER]=
{
	DP_0, DP_1, DP_2,
	DP_3, DP_4, DP_5,
	DP_6, DP_7, DP_8,
	DP_9
};

DP_Index_T DP_Index_1 = DP_ZERO;
DP_Index_T DP_Index_2 = DP_ZERO;
DP_Index_T DP_Index_3 = DP_ZERO;

static void DP_IndexLogic(void);
static void DP_ModeLogic(void);
static void DP_Output(void);

/* Display main function */
void DP_Polling(void)
{
	DP_IndexLogic();
	DP_ModeLogic();
	DP_Output();
}

/* Index change logic */
static void DP_IndexLogic(void)
{
	static unsigned char PreSate = 0;

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
}

/* Show Mode Logic */
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

/* OutPut Show */
static void DP_Output(void)
{
	DP_Set_DiplayDig1(DP_Show[DP_Index_1]);
	DP_Set_DiplayDig2(DP_Show[DP_Index_2]);
	DP_Set_DiplayDig3(DP_Show[DP_Index_3]);
}
