#ifndef MODECHANGE_H
#define MODECHANGE_H

#include "ModeChange_CfgIf.h"

typedef enum
{
	MODE_MS = 0,
	MODE_S,
	MODE_10S,

	MODE_NUMBER
}eMode;

extern eMode TgMode;
extern void MC_Polling(void);

#endif /* MODECHANGE_H */
