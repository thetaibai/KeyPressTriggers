#ifndef TRIGGER_CFGIF_H
#define TRIGGER_CFGIF_H

#include "InM.h"        /* For Button interface */
#include "ModeChange.h" /* For mode interface */
#include "Display.h"    /* For time interface */
#include "gpio.h"		/* For Trigger interface */

/* External interface */
#define TG_Get_TriggerBt()        KeyPress[TRIGGER].PressState
#define TG_Get_Mode()             TgMode
#define TG_Get_SiglePlaces()      DP_Index_1
#define TG_Get_TenPlaces()        DP_Index_2
#define TG_Get_HundredPlaces()    DP_Index_3

#define TG_Set_Triger()           HAL_GPIO_WritePin(Trigger_GPIO_Port, Trigger_Pin, GPIO_PIN_SET)
#define TG_Clear_Triger()         HAL_GPIO_WritePin(Trigger_GPIO_Port, Trigger_Pin, GPIO_PIN_RESET)

#endif /* TRIGGER_CFGIF_H */
