/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
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

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
        * Free pins are configured automatically as Analog (this feature is enabled through
        * the Code Generation settings)
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOI_CLK_ENABLE();
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();

  /*Configure GPIO pins : PI6 PI5 PI3 PI7
                           PI4 PI2 PI0 PI1
                           PI9 PI10 */
  GPIO_InitStruct.Pin = GPIO_PIN_6|GPIO_PIN_5|GPIO_PIN_3|GPIO_PIN_7
                          |GPIO_PIN_4|GPIO_PIN_2|GPIO_PIN_0|GPIO_PIN_1
                          |GPIO_PIN_9|GPIO_PIN_10;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOI, &GPIO_InitStruct);

  /*Configure GPIO pins : PE1 PE2 PE0 PE3
                           PE4 PE5 PE6 PE13
                           PE8 PE14 PE9 PE15
                           PE10 PE11 PE7 PE12 */
  GPIO_InitStruct.Pin = GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_0|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_13
                          |GPIO_PIN_8|GPIO_PIN_14|GPIO_PIN_9|GPIO_PIN_15
                          |GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_7|GPIO_PIN_12;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : PB4 PB7 PB3 PB9
                           PB6 PB8 PB5 PB1
                           PB2 PB10 PB15 PB11
                           PB13 PB14 PB0 PB12 */
  GPIO_InitStruct.Pin = GPIO_PIN_4|GPIO_PIN_7|GPIO_PIN_3|GPIO_PIN_9
                          |GPIO_PIN_6|GPIO_PIN_8|GPIO_PIN_5|GPIO_PIN_1
                          |GPIO_PIN_2|GPIO_PIN_10|GPIO_PIN_15|GPIO_PIN_11
                          |GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_0|GPIO_PIN_12;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : PG12 PG11 PG15 PG10
                           PG8 PG6 PG7 PG5
                           PG4 PG2 PG1 PG0 */
  GPIO_InitStruct.Pin = GPIO_PIN_12|GPIO_PIN_11|GPIO_PIN_15|GPIO_PIN_10
                          |GPIO_PIN_8|GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_5
                          |GPIO_PIN_4|GPIO_PIN_2|GPIO_PIN_1|GPIO_PIN_0;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

  /*Configure GPIO pins : PD7 PD3 PD6 PD2
                           PD5 PD1 PD4 PD0
                           PD11 PD14 PD15 PD12
                           PD10 PD13 PD9 PD8 */
  GPIO_InitStruct.Pin = GPIO_PIN_7|GPIO_PIN_3|GPIO_PIN_6|GPIO_PIN_2
                          |GPIO_PIN_5|GPIO_PIN_1|GPIO_PIN_4|GPIO_PIN_0
                          |GPIO_PIN_11|GPIO_PIN_14|GPIO_PIN_15|GPIO_PIN_12
                          |GPIO_PIN_10|GPIO_PIN_13|GPIO_PIN_9|GPIO_PIN_8;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : PC12 PC11 PC10 PC14
                           PC13 PC15 PC6 PC7
                           PC8 PC9 PC0 PC1
                           PC2 PC3 PC4 PC5 */
  GPIO_InitStruct.Pin = GPIO_PIN_12|GPIO_PIN_11|GPIO_PIN_10|GPIO_PIN_14
                          |GPIO_PIN_13|GPIO_PIN_15|GPIO_PIN_6|GPIO_PIN_7
                          |GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_0|GPIO_PIN_1
                          |GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PA14 PA15 PA9 PA10
                           PA11 PA12 PA13 PA8
                           PA0 PA1 PA2 PA3
                           PA7 PA5 PA4 PA6 */
  GPIO_InitStruct.Pin = GPIO_PIN_14|GPIO_PIN_15|GPIO_PIN_9|GPIO_PIN_10
                          |GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_8
                          |GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_7|GPIO_PIN_5|GPIO_PIN_4|GPIO_PIN_6;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PH15 PH14 PH13 PH9
                           PH3 PH2 PH5 PH8
                           PH12 PH4 PH7 PH11
                           PH6 PH10 */
  GPIO_InitStruct.Pin = GPIO_PIN_15|GPIO_PIN_14|GPIO_PIN_13|GPIO_PIN_9
                          |GPIO_PIN_3|GPIO_PIN_2|GPIO_PIN_5|GPIO_PIN_8
                          |GPIO_PIN_12|GPIO_PIN_4|GPIO_PIN_7|GPIO_PIN_11
                          |GPIO_PIN_6|GPIO_PIN_10;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOH, &GPIO_InitStruct);

  /*Configure GPIO pins : PF0 PF1 PF4 PF3
                           PF2 PF10 PF5 PF14
                           PF15 PF11 PF13 PF12 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_4|GPIO_PIN_3
                          |GPIO_PIN_2|GPIO_PIN_10|GPIO_PIN_5|GPIO_PIN_14
                          |GPIO_PIN_15|GPIO_PIN_11|GPIO_PIN_13|GPIO_PIN_12;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
