/*******************************************************************************
*
* Copyright 2006-2015 Freescale Semiconductor, Inc.
* Copyright 2016-2017 NXP
*
****************************************************************************//*!
*
* @file     peripherals_config.h
*
* @date     March-28-2017
*
* @brief    MCU Peripherals Configuration
*
*******************************************************************************/
#ifndef PERIPHERALS_PERIPHERALS_INIT_H_
#define PERIPHERALS_PERIPHERALS_INIT_H_

/*******************************************************************************
* Includes
*******************************************************************************/
#include "clock_config.h"
#include "peripherals_adConv0.h"
#include "peripherals_adConv1.h"
#include "peripherals_flexTimer_ic_1.h"
#include "peripherals_flexTimer_mc0.h"
#include "peripherals_flexTimer_pwm3.h"
#include "peripherals_lpit0.h"
#include "peripherals_lpspi_1.h"
#include "peripherals_lpuart1.h"
#include "peripherals_pdb0.h"
#include "peripherals_pdb1.h"
#include "peripherals_trgmux1.h"
#include "pin_mux.h"
#include "sdk_project_config.h"
#include "motor_structure.h"
/*******************************************************************************
* Constants and macros
*******************************************************************************/
/*------------------------------------
 *  FlexTimer
 * ----------------------------------*/

// FTM3 PWM period in ticks 20kHz/50us @80MHz system clock
#define PWM_MODULO      	 		4000	// Full PWM period
#define HALF_PWM_MODULO      		2000	// Half PWM period

// 1ms timeout @750kHz FTM0 clock
#define FTM0_PERIOD_1MS     		625

/*------------------------------------
 *  Programmable Delay Block
 * ----------------------------------*/
#define PDB_DELAY_MAX               1800	// 90% of the Half PWM period
#define PDB_DELAY_MIN				180		// 10% of the PDB_DELAY_MAX
/*------------------------------------
 *  Analog to Digital Converter
 * ----------------------------------*/
/* Analog channel assignments */
#define ADC1_DCBV    				7	// DC bus voltage
#define ADC1_DCBI    				6	// DC bus current
#define ADC0_BEMFA   				4	// Phase A voltage
#define ADC0_BEMFB   				5	// Phase B voltage
#define ADC0_BEMFC   				2	// Phase C voltage

/*******************************************************************************
* Global function prototypes
*******************************************************************************/
void McuClockConfig(void);
void McuPowerConfig(void);
void McuIntConfig(void);
void McuTrigmuxConfig(void);
void McuPinsConfig(void);
void McuLpuartConfig(void);
void McuAdcConfig(void);
void McuPdbConfig(void);
void McuLpitConfig(void);
void McuFtmConfig(void);
void McuCacheConfig(void);

#endif /* PERIPHERALS_PERIPHERALS_INIT_H_ */
