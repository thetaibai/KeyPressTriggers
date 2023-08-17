/*!
 **********************************************************
 *@file ModeChange.h
 *@brief ModeChange head file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2023.8.15
 *
 *
 **********************************************************
 **/

#ifndef MODECHANGE_H
#define MODECHANGE_H

#include "ModeChange_CfgIf.h"

/* Mode type */
typedef enum
{
	MODE_MS = 0,
	MODE_S,
	MODE_10S,

	MODE_NUMBER
}eMode;

/* Provide interface */
extern eMode TgMode;
extern void MC_Polling(void);

#endif /* MODECHANGE_H */
