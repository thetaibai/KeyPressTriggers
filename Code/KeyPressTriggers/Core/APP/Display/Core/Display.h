#ifndef DISPLAY_H
#define DISPLAY_H

#include "Display_CfgIf.h"    /* For External interface */

/* define */
#define DP_0    0x3Fu
#define DP_1    0x06u
#define DP_2    0x5Bu
#define DP_3    0x4Fu
#define DP_4    0x66u
#define DP_5    0x6Du
#define DP_6    0x7Du
#define DP_7    0x07u
#define DP_8    0x7Fu
#define DP_9    0x6Fu

/* Index for Display */
typedef enum
{
	DP_ZERO = 0,
	DP_ONE,
	DP_TWO,
	DP_THREE,
	DP_FOUR,
	DP_FIVE,
	DP_SIX,
	DP_SEVEN,
	DP_EIGHT,
	DP_NINE,

	DP_NUMBER
}DP_Index_T;

extern DP_Index_T DP_Index_1;
extern DP_Index_T DP_Index_2;
extern DP_Index_T DP_Index_3;
extern void DP_Polling(void);

#endif /* DISPLAY */
