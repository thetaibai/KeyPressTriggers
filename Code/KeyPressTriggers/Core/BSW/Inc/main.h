/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DIG2_Pin GPIO_PIN_14
#define DIG2_GPIO_Port GPIOC
#define DIG1_Pin GPIO_PIN_15
#define DIG1_GPIO_Port GPIOC
#define Mode_Pin GPIO_PIN_0
#define Mode_GPIO_Port GPIOA
#define TimeUp_Pin GPIO_PIN_1
#define TimeUp_GPIO_Port GPIOA
#define TimeDown_Pin GPIO_PIN_4
#define TimeDown_GPIO_Port GPIOA
#define Trigger_Pin GPIO_PIN_0
#define Trigger_GPIO_Port GPIOB
#define Enable_Pin GPIO_PIN_1
#define Enable_GPIO_Port GPIOB
#define DP_Pin GPIO_PIN_2
#define DP_GPIO_Port GPIOB
#define DIG_D_Pin GPIO_PIN_12
#define DIG_D_GPIO_Port GPIOB
#define DIG_C_Pin GPIO_PIN_14
#define DIG_C_GPIO_Port GPIOB
#define DIG_B_Pin GPIO_PIN_15
#define DIG_B_GPIO_Port GPIOB
#define DIG_A_Pin GPIO_PIN_8
#define DIG_A_GPIO_Port GPIOA
#define DIG3_Pin GPIO_PIN_15
#define DIG3_GPIO_Port GPIOA
#define DIG_G_Pin GPIO_PIN_3
#define DIG_G_GPIO_Port GPIOB
#define DIG_F_Pin GPIO_PIN_4
#define DIG_F_GPIO_Port GPIOB
#define DIG_E_Pin GPIO_PIN_5
#define DIG_E_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
