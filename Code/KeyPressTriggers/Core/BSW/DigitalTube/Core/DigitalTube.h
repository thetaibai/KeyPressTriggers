/*!
 **********************************************************
 *@file DigitalTube.h
 *@brief DigitalTube head  file
 **********************************************************
 *@author LHL
 *@version 1.0.0
 *@data 2023.8.15
 *
 *
 **********************************************************
 **/

#ifndef DIGITALTUBE_H
#define DIGITALTUBE_H

#include "DigitalTube_CfgIf.h"

/* Provide interface */
extern unsigned char DisplayDig1;
extern unsigned char DisplayDig2;
extern unsigned char DisplayDig3;
extern void DT_Polling(void);

#endif /* DIGITALTUBE_H */
