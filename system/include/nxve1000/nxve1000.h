/**************************************************************************//**
 * @file     <Device>.h
 * @brief    CMSIS Cortex-M# Core Peripheral Access Layer Header File for
 *           Device <Device>
 * @version  V3.10
 * @date     23. November 2012
 *
 * @note
 *
 ******************************************************************************/
/* Copyright (c) 2012 ARM LIMITED

   All rights reserved.
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:
   - Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   - Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in the
     documentation and/or other materials provided with the distribution.
   - Neither the name of ARM nor the names of its contributors may be used
     to endorse or promote products derived from this software without
     specific prior written permission.
   *
   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS AND CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.
   ---------------------------------------------------------------------------*/


#ifndef Device_H      /* ToDo: replace '<Device>' with your device name */
#define Device_H

#ifdef __cplusplus
 extern "C" {
#endif

/******************************************************************************/
/*                Processor and Core Peripherals                              */
/******************************************************************************/
/** @addtogroup <Device>_CMSIS Device CMSIS Definitions
  Configuration of the Cortex-M# Processor and Core Peripherals
  @{
*/
#define	CMU_PHY_BASE			(0x43150200)
#define	PLL_PHY_BASE			(0x43140000)
#define	ALIVE_FSM_PHY_BASE		(0x43161000)
#define SYSREG_PHY_BASE			(0x42020000)
#define	TIMER_PHY_BASE			(0x430A0000)
#define GPIO_PHY_BASE			(0x42000000)
#define	UART_PHY_BASE			(0x43050000)

/*
 * ==========================================================================
 * ---------- Interrupt Number Definition -----------------------------------
 * ==========================================================================
 */

typedef enum IRQn
{
/******  Cortex-M# Processor Exceptions Numbers ***************************************************/

/* ToDo: use this Cortex interrupt numbers if your device is a CORTEX-M0 device                   */
  NonMaskableInt_IRQn           = -14,      /*!<  2 Non Maskable Interrupt                        */
  HardFault_IRQn                = -13,      /*!<  3 Hard Fault Interrupt                          */
  SVCall_IRQn                   = -5,       /*!< 11 SV Call Interrupt                             */
  PendSV_IRQn                   = -2,       /*!< 14 Pend SV Interrupt                             */
  SysTick_IRQn                  = -1,       /*!< 15 System Tick Interrupt                         */

/******  Device Specific Interrupt Numbers ********************************************************/
	ALIVE_IRQn                  = 0,      /*!< Alive Interrupt */
	ALIVE_TIMER_IRQn       		= 1,      /*!< Alive Timer Interrupt */
	WDT_IRQn                    = 2,      /*!< Watchdog Interrupt */
	GPIO_IRQn                   = 3,      /*!< GPIO Interrupt */
	I2C0_IRQn                   = 4,      /*!< I2C CH0 Interrupts */
	I2C1_IRQn                   = 5,      /*!< I2C CH1 Interrupts */
	SPI0_IRQn                   = 6,      /*!< SPI CH0 Interrupts */
	SPI1_IRQn                   = 7,      /*!< SPI CH1 Interrupts */
	SPI2_IRQn                   = 8,      /*!< SPI CH2 Interrupt */
	UART0_IRQn                  = 9,      /*!< UART CH0 Interrupt */
	UART1_IRQn                  = 10,     /*!< UART CH1 Interrupts */
	DMA_IRQn                    = 13,     /*!< DMA Interrupts */
	TIMER0_IRQn                 = 14,     /*!< TIMER0 Interrupt */
	TIMER1_IRQn                 = 15,     /*!< TIMER1 Interrupt */
	TIMER2_IRQn                 = 16,     /*!< TIMER2 Interrupt */
	TIMER3_IRQn                 = 17,     /*!< TIMER3 Interrupt */
	TIMER4_IRQn                 = 18,     /*!< TIMER4 Interrupt */
	TIMER5_IRQn                 = 19,     /*!< TIMER5 Interrupt */
	TIMER6_IRQn                 = 20,     /*!< TIMER6 Interrupt */
	TIMER7_IRQn                 = 21,     /*!< TIMER7 Interrupt */
	USB__IRQn                   = 22,     /*!< USB Interrupt */
	PLL_IRQn                    = 23,     /*!< PLL Interrupt */
	ADC_IRQn                    = 24,     /*!< ADC Interrupt */
	LVD_IRQn                    = 28,     /*!< ADC Interrupt */
} IRQn_Type;


/*
 * ==========================================================================
 * ----------- Processor and Core Peripheral Section ------------------------
 * ==========================================================================
 */

/* Configuration of the Cortex-M# Processor and Core Peripherals */
/* ToDo: set the defines according your Device                                                    */
/* ToDo: define the correct core revision
         __CM0_REV if your device is a CORTEX-M0 device
         __CM3_REV if your device is a CORTEX-M3 device
         __CM4_REV if your device is a CORTEX-M4 device                                           */
//#define __CM#_REV                 0x0201    /*!< Core Revision r2p1                               */
#define __CM0_REV                 0x0201
#define __NVIC_PRIO_BITS          2         /*!< Number of Bits used for Priority Levels          */
#define __Vendor_SysTickConfig    0         /*!< Set to 1 if different SysTick Config is used     */
#define __MPU_PRESENT             0         /*!< MPU present or not                               */
/* ToDo: define __FPU_PRESENT if your devise is a CORTEX-M4                                       */
#define __FPU_PRESENT             0        /*!< FPU present or not                                */

/*@}*/ /* end of group <Device>_CMSIS */


/* ToDo: include the correct core_cm#.h file
         core_cm0.h if your device is a CORTEX-M0 device
         core_cm3.h if your device is a CORTEX-M3 device
         core_cm4.h if your device is a CORTEX-M4 device                                          */

//#include <core_cm#.h>                       /* Cortex-M# processor and core peripherals           */
#include <core_cm0.h>

/* ToDo: include your system_<Device>.h file
         replace '<Device>' with your device name                                                 */
#include <system_nxve1000.h>                /* <Device> System  include file                      */

#ifdef __cplusplus
}
#endif

#endif  /* <Device>_H */
