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
#define TestLed_Pin GPIO_PIN_13
#define TestLed_GPIO_Port GPIOC
#define DIG_A_Pin GPIO_PIN_0
#define DIG_A_GPIO_Port GPIOA
#define DIG_B_Pin GPIO_PIN_1
#define DIG_B_GPIO_Port GPIOA
#define DIG_C_Pin GPIO_PIN_2
#define DIG_C_GPIO_Port GPIOA
#define DIG_D_Pin GPIO_PIN_3
#define DIG_D_GPIO_Port GPIOA
#define DIG_E_Pin GPIO_PIN_4
#define DIG_E_GPIO_Port GPIOA
#define DIG_F_Pin GPIO_PIN_5
#define DIG_F_GPIO_Port GPIOA
#define DIG_G_Pin GPIO_PIN_6
#define DIG_G_GPIO_Port GPIOA
#define DIG_DP_Pin GPIO_PIN_7
#define DIG_DP_GPIO_Port GPIOA
#define DIG_1_Pin GPIO_PIN_0
#define DIG_1_GPIO_Port GPIOB
#define DIG_2_Pin GPIO_PIN_1
#define DIG_2_GPIO_Port GPIOB
#define DIG_3_Pin GPIO_PIN_2
#define DIG_3_GPIO_Port GPIOB
#define KEY_0_Pin GPIO_PIN_12
#define KEY_0_GPIO_Port GPIOB
#define KEY_1_Pin GPIO_PIN_13
#define KEY_1_GPIO_Port GPIOB
#define KEY_2_Pin GPIO_PIN_14
#define KEY_2_GPIO_Port GPIOB
#define KEY_3_Pin GPIO_PIN_15
#define KEY_3_GPIO_Port GPIOB
#define Button_0_Pin GPIO_PIN_8
#define Button_0_GPIO_Port GPIOA
#define Button_1_Pin GPIO_PIN_9
#define Button_1_GPIO_Port GPIOA
#define Button_2_Pin GPIO_PIN_10
#define Button_2_GPIO_Port GPIOA
#define Button_3_Pin GPIO_PIN_11
#define Button_3_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
