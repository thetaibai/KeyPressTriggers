/*!
 **********************************************************
 *@file InM_CfgIf.h
 *@brief InM Mode interface file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2023.8.15
 *
 *
 **********************************************************
 **/

#ifndef INM_CFGIF_H
#define INM_CFGIF_H

#include "gpio.h"    /* For GPIO interface */

/* Required Interface */
#define InM_ReadMode()     HAL_GPIO_ReadPin(Mode_GPIO_Port, Mode_Pin)
#define InM_ReadTimeUp()   HAL_GPIO_ReadPin(TimeUp_GPIO_Port, TimeUp_Pin)
#define InM_ReadTimeDown() HAL_GPIO_ReadPin(TimeDown_GPIO_Port, TimeDown_Pin)
#define InM_ReadTrigger()  HAL_GPIO_ReadPin(Trigger_GPIO_Port, Trigger_Pin)

#endif /* INM_CFGIF_H */
