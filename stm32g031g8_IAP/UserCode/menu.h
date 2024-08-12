/**
  ******************************************************************************
  * @file    IAP_Main/Inc/menu.h 
  * @author  MCD Application Team
  * @brief   This file provides all the headers of the menu functions.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2016 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MENU_H
#define __MENU_H

/* Includes ------------------------------------------------------------------*/
#include "flash.h"
#include "ymodem.h"
#include "common.h"
/* Imported variables --------------------------------------------------------*/
extern uint8_t aFileName[FILE_NAME_LENGTH];
/* Private variables ---------------------------------------------------------*/
typedef  void (*pFunction)(void);

extern pFunction JumpToApplication;
extern uint32_t JumpAddress;

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void Main_Menu(void);
void ReadyToUpdate(void);
void JumpToApplication_Funtion(void);
#endif  /* __MENU_H */
