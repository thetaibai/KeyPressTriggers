/*!
 **********************************************************
 *@file DigitalTube_CfgIf.h
 *@brief DigitalTube Required interface file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2023.8.15
 *
 *
 **********************************************************
 **/

#ifndef DIGITALTUBE_CFGIF_H
#define DIGITALTUBE_CFGIF_H

#include "gpio.h"

/* Required Interface */
#define DT_Enable_DIG1()     HAL_GPIO_WritePin(DIG1_GPIO_Port, DIG1_Pin, GPIO_PIN_SET)
#define DT_Disable_DIG1()    HAL_GPIO_WritePin(DIG1_GPIO_Port, DIG1_Pin, GPIO_PIN_RESET)
#define DT_Enable_DIG2()     HAL_GPIO_WritePin(DIG2_GPIO_Port, DIG2_Pin, GPIO_PIN_SET)
#define DT_Disable_DIG2()    HAL_GPIO_WritePin(DIG2_GPIO_Port, DIG2_Pin, GPIO_PIN_RESET)
#define DT_Enable_DIG3()     HAL_GPIO_WritePin(DIG3_GPIO_Port, DIG3_Pin, GPIO_PIN_SET)
#define DT_Disable_DIG3()    HAL_GPIO_WritePin(DIG3_GPIO_Port, DIG3_Pin, GPIO_PIN_RESET)

#define DT_Enable_DIG_A()     HAL_GPIO_WritePin(DIG_A_GPIO_Port, DIG_A_Pin, GPIO_PIN_RESET)
#define DT_Disable_DIG_A()    HAL_GPIO_WritePin(DIG_A_GPIO_Port, DIG_A_Pin, GPIO_PIN_SET)
#define DT_Enable_DIG_B()     HAL_GPIO_WritePin(DIG_B_GPIO_Port, DIG_B_Pin, GPIO_PIN_RESET)
#define DT_Disable_DIG_B()    HAL_GPIO_WritePin(DIG_B_GPIO_Port, DIG_B_Pin, GPIO_PIN_SET)
#define DT_Enable_DIG_C()     HAL_GPIO_WritePin(DIG_C_GPIO_Port, DIG_C_Pin, GPIO_PIN_RESET)
#define DT_Disable_DIG_C()    HAL_GPIO_WritePin(DIG_C_GPIO_Port, DIG_C_Pin, GPIO_PIN_SET)
#define DT_Enable_DIG_D()     HAL_GPIO_WritePin(DIG_D_GPIO_Port, DIG_D_Pin, GPIO_PIN_RESET)
#define DT_Disable_DIG_D()    HAL_GPIO_WritePin(DIG_D_GPIO_Port, DIG_D_Pin, GPIO_PIN_SET)
#define DT_Enable_DIG_E()     HAL_GPIO_WritePin(DIG_E_GPIO_Port, DIG_E_Pin, GPIO_PIN_RESET)
#define DT_Disable_DIG_E()    HAL_GPIO_WritePin(DIG_E_GPIO_Port, DIG_E_Pin, GPIO_PIN_SET)
#define DT_Enable_DIG_F()     HAL_GPIO_WritePin(DIG_F_GPIO_Port, DIG_F_Pin, GPIO_PIN_RESET)
#define DT_Disable_DIG_F()    HAL_GPIO_WritePin(DIG_F_GPIO_Port, DIG_F_Pin, GPIO_PIN_SET)
#define DT_Enable_DIG_G()     HAL_GPIO_WritePin(DIG_G_GPIO_Port, DIG_G_Pin, GPIO_PIN_RESET)
#define DT_Disable_DIG_G()    HAL_GPIO_WritePin(DIG_G_GPIO_Port, DIG_G_Pin, GPIO_PIN_SET)

#define DT_Enable_DIG_DP()     HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_RESET)
#define DT_Disable_DIG_DP()    HAL_GPIO_WritePin(DP_GPIO_Port, DP_Pin, GPIO_PIN_SET)

#endif /* DIGITALTUBE_CFGIF_H */
