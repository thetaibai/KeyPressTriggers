#ifndef DISPLAY_CFGIF_H
#define DISPLAY_CFGIF_H

#include "InM.h"           /* For Button Interface */
#include "ModeChange.h"    /* For Mode Interface */
#include "DigitalTube.h"   /* For DisplayDig Interface */

/* External interface */
#define DP_Get_TimeUpBt()      KeyPress[TIMEUP].PressState
#define DP_Get_TimeDownBt()    KeyPress[TIMEDOWN].PressState
#define DP_Get_Mode()          TgMode

#define DP_Set_DiplayDig1(x)   DisplayDig1 = (unsigned char)x
#define DP_Set_DiplayDig2(x)   DisplayDig2 = (unsigned char)x
#define DP_Set_DiplayDig3(x)   DisplayDig3 = (unsigned char)x

#define DP_Set_10MS()          DisplayDig1 = DisplayDig1 | 0x80
#define DP_Clear_10MS()        DisplayDig1 = DisplayDig1 & 0x7F

#define DP_Set_10S()          DisplayDig1 = DisplayDig1 | 0x80
#define DP_Clear_10S()        DisplayDig1 = DisplayDig1 & 0x7F

#define DP_Set_S()          DisplayDig1 = DisplayDig2 | 0x80
#define DP_Clear_S()        DisplayDig1 = DisplayDig2 & 0x7F

#define DP_Set_MS()          DisplayDig1 = DisplayDig3 | 0x80
#define DP_Clear_MS()        DisplayDig1 = DisplayDig3 & 0x7F

#endif /* DISPLAY_CFGIF_H */
