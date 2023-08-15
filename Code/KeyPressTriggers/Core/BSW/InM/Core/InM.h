#ifndef INM_H
#define INM_H

#include "InM_CfgIf.h"

typedef struct
{
	unsigned char RealState:1u;
	unsigned char PressState:1u;
	unsigned char TimeCnt:5u;
}TKeyPress;

typedef enum
{
	NOPRESS = 0,
	PRESS
}ButtonStae;

typedef enum
{
	MODE = 0,
	TIMEUP,
	TIMEDOWN,
	TRIGGER,

	BUTTON_NUMBER
}Button;

#define InitNumber 0u
#define FILT_CYCLE 2u /* 3 * 8ms = 24ms */

extern TKeyPress KeyPress[BUTTON_NUMBER];
extern void InM_Gather(void);
extern void InM_ButtonDetect(void);

#endif /* INM_H */
