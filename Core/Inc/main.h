/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#define EN_MODE_00_Pin GPIO_PIN_1
#define EN_MODE_00_GPIO_Port GPIOA
#define EN_MODE_11_Pin GPIO_PIN_2
#define EN_MODE_11_GPIO_Port GPIOA
#define EN_VALUE_0_Pin GPIO_PIN_3
#define EN_VALUE_0_GPIO_Port GPIOA
#define EN_VALUE_1_Pin GPIO_PIN_4
#define EN_VALUE_1_GPIO_Port GPIOA
#define RED_1_Pin GPIO_PIN_5
#define RED_1_GPIO_Port GPIOA
#define YELLOW_1_Pin GPIO_PIN_6
#define YELLOW_1_GPIO_Port GPIOA
#define GREEN_1_Pin GPIO_PIN_7
#define GREEN_1_GPIO_Port GPIOA
#define LED7_0_Pin GPIO_PIN_0
#define LED7_0_GPIO_Port GPIOB
#define LED7_1_Pin GPIO_PIN_1
#define LED7_1_GPIO_Port GPIOB
#define LED7_2_Pin GPIO_PIN_2
#define LED7_2_GPIO_Port GPIOB
#define LED7_22_Pin GPIO_PIN_10
#define LED7_22_GPIO_Port GPIOB
#define LED7_33_Pin GPIO_PIN_11
#define LED7_33_GPIO_Port GPIOB
#define LED7_44_Pin GPIO_PIN_12
#define LED7_44_GPIO_Port GPIOB
#define LED7_55_Pin GPIO_PIN_13
#define LED7_55_GPIO_Port GPIOB
#define LED7_66_Pin GPIO_PIN_14
#define LED7_66_GPIO_Port GPIOB
#define RED_2_Pin GPIO_PIN_9
#define RED_2_GPIO_Port GPIOA
#define YELLOW_2_Pin GPIO_PIN_10
#define YELLOW_2_GPIO_Port GPIOA
#define GREEN_2_Pin GPIO_PIN_11
#define GREEN_2_GPIO_Port GPIOA
#define BUTTON_1_Pin GPIO_PIN_13
#define BUTTON_1_GPIO_Port GPIOA
#define BUTTON_2_Pin GPIO_PIN_14
#define BUTTON_2_GPIO_Port GPIOA
#define BUTTON_3_Pin GPIO_PIN_15
#define BUTTON_3_GPIO_Port GPIOA
#define LED7_3_Pin GPIO_PIN_3
#define LED7_3_GPIO_Port GPIOB
#define LED7_4_Pin GPIO_PIN_4
#define LED7_4_GPIO_Port GPIOB
#define LED7_5_Pin GPIO_PIN_5
#define LED7_5_GPIO_Port GPIOB
#define LED7_6_Pin GPIO_PIN_6
#define LED7_6_GPIO_Port GPIOB
#define TEST_Pin GPIO_PIN_7
#define TEST_GPIO_Port GPIOB
#define LED7_00_Pin GPIO_PIN_8
#define LED7_00_GPIO_Port GPIOB
#define LED7_11_Pin GPIO_PIN_9
#define LED7_11_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
