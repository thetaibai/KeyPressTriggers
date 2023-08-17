/*!
 **********************************************************
 *@file InM.h
 *@brief InM Mode head file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2023.8.15
 *
 *
 **********************************************************
 **/

#ifndef INM_H
#define INM_H

#include "InM_CfgIf.h"

/* button state structure */
typedef struct
{
	unsigned char RealState:1u;   /* Sample value */
	unsigned char PressState:1u;  /* Filter value */
	unsigned char TimeCnt:5u;     /* Filter counter */
}TKeyPress;

/* Button State enumeration */
typedef enum
{
	NOPRESS = 0,
	PRESS
}ButtonStae;

/* Button index enumeration */
typedef enum
{
	MODE = 0,
	TIMEUP,
	TIMEDOWN,
	TRIGGER,

	BUTTON_NUMBER
}Button;

#define InitNumber 0u
#define FILT_CYCLE 2u   /* 3 * 8ms = 24ms */

/* Provide interface */
extern TKeyPress KeyPress[BUTTON_NUMBER];
extern void InM_Gather(void);
extern void InM_ButtonDetect(void);

#endif /* INM_H */
