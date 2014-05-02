/*
 * $QNXLicenseC:
 * Copyright 2008, QNX Software Systems. 
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"). You 
 * may not reproduce, modify or distribute this software except in 
 * compliance with the License. You may obtain a copy of the License 
 * at: http://www.apache.org/licenses/LICENSE-2.0 
 * 
 * Unless required by applicable law or agreed to in writing, software 
 * distributed under the License is distributed on an "AS IS" basis, 
 * WITHOUT WARRANTIES OF ANY KIND, either express or implied.
 *
 * This file may contain contributions from others, either as 
 * contributors under the License or as licensors under other terms.  
 * Please review this entire file for other proprietary rights or license 
 * notices, as well as the QNX Development Suite License Guide at 
 * http://licensing.qnx.com/license-guide/ for other information.
 * $
 */




/*
 * SH interrupt number definitions
 *

 *
 */
#ifndef __SH_INTR_H_INCLUDED
#define __SH_INTR_H_INCLUDED

#include <sys/neutrino.h>

/* External */
#define	SH_INTR_CLASS_EXTERNAL			_NTO_INTR_CLASS_EXTERNAL
#define	SH_INTR_CLASS_EXTERNAL_0		SH_INTR_CLASS_EXTERNAL	+ 0			
#define	SH_INTR_CLASS_EXTERNAL_1		SH_INTR_CLASS_EXTERNAL	+ 1			
#define	SH_INTR_CLASS_EXTERNAL_2		SH_INTR_CLASS_EXTERNAL	+ 2		
#define	SH_INTR_CLASS_EXTERNAL_3		SH_INTR_CLASS_EXTERNAL	+ 3			
#define	SH_INTR_CLASS_EXTERNAL_4		SH_INTR_CLASS_EXTERNAL	+ 4			
#define	SH_INTR_CLASS_EXTERNAL_5		SH_INTR_CLASS_EXTERNAL	+ 5			
#define	SH_INTR_CLASS_EXTERNAL_6		SH_INTR_CLASS_EXTERNAL	+ 6			
#define	SH_INTR_CLASS_EXTERNAL_7		SH_INTR_CLASS_EXTERNAL	+ 7			
#define	SH_INTR_CLASS_EXTERNAL_8		SH_INTR_CLASS_EXTERNAL	+ 8			
#define	SH_INTR_CLASS_EXTERNAL_9		SH_INTR_CLASS_EXTERNAL	+ 9			
#define	SH_INTR_CLASS_EXTERNAL_A		SH_INTR_CLASS_EXTERNAL	+ 10			
#define	SH_INTR_CLASS_EXTERNAL_B		SH_INTR_CLASS_EXTERNAL	+ 11			
#define	SH_INTR_CLASS_EXTERNAL_C		SH_INTR_CLASS_EXTERNAL	+ 12			
#define	SH_INTR_CLASS_EXTERNAL_D		SH_INTR_CLASS_EXTERNAL	+ 13			
#define	SH_INTR_CLASS_EXTERNAL_E		SH_INTR_CLASS_EXTERNAL	+ 14			
#define	SH_INTR_CLASS_EXTERNAL_TOTAL	(SH_INTR_CLASS_EXTERNAL_E - SH_INTR_CLASS_EXTERNAL + 1)

/* NMI */
#define SH_INTR_CLASS_NMI				(SH_INTR_CLASS_EXTERNAL	+ 0x1000)
#define SH_INTR_CLASS_NMI_TOTAL			1

/* on chip peripheral modules */
#define SH_INTR_CLASS_ONCHIP			(SH_INTR_CLASS_NMI		+ 0x1000)
#define SH_INTR_CLASS_ONCHIP_TUNI0		SH_INTR_CLASS_ONCHIP	+ 0
#define SH_INTR_CLASS_ONCHIP_TUNI1		SH_INTR_CLASS_ONCHIP	+ 1
#define SH_INTR_CLASS_ONCHIP_TUNI2		SH_INTR_CLASS_ONCHIP	+ 2
#define SH_INTR_CLASS_ONCHIP_TICPI2		SH_INTR_CLASS_ONCHIP	+ 3
#define SH_INTR_CLASS_ONCHIP_ATI		SH_INTR_CLASS_ONCHIP	+ 4
#define SH_INTR_CLASS_ONCHIP_PRI		SH_INTR_CLASS_ONCHIP	+ 5
#define SH_INTR_CLASS_ONCHIP_CUI		SH_INTR_CLASS_ONCHIP	+ 6
#define SH_INTR_CLASS_ONCHIP_SCIERI		SH_INTR_CLASS_ONCHIP	+ 7
#define SH_INTR_CLASS_ONCHIP_SCIRXI		SH_INTR_CLASS_ONCHIP	+ 8
#define SH_INTR_CLASS_ONCHIP_SCITXI		SH_INTR_CLASS_ONCHIP	+ 9
#define SH_INTR_CLASS_ONCHIP_SCITEI		SH_INTR_CLASS_ONCHIP	+ 10
#define SH_INTR_CLASS_ONCHIP_ITI		SH_INTR_CLASS_ONCHIP	+ 11
#define SH_INTR_CLASS_ONCHIP_RCMI		SH_INTR_CLASS_ONCHIP	+ 12
#define SH_INTR_CLASS_ONCHIP_ROVI		SH_INTR_CLASS_ONCHIP	+ 13
#define SH_INTR_CLASS_ONCHIP_UDI		SH_INTR_CLASS_ONCHIP	+ 16
#define SH_INTR_CLASS_ONCHIP_GPIO		SH_INTR_CLASS_ONCHIP	+ 17
#define SH_INTR_CLASS_ONCHIP_DMTE0		SH_INTR_CLASS_ONCHIP	+ 18
#define SH_INTR_CLASS_ONCHIP_DMTE1		SH_INTR_CLASS_ONCHIP	+ 19
#define SH_INTR_CLASS_ONCHIP_DMTE2		SH_INTR_CLASS_ONCHIP	+ 20
#define SH_INTR_CLASS_ONCHIP_DMTE3		SH_INTR_CLASS_ONCHIP	+ 21
#define SH_INTR_CLASS_ONCHIP_DMAE		SH_INTR_CLASS_ONCHIP	+ 22
#define SH_INTR_CLASS_ONCHIP_SCIFERI	SH_INTR_CLASS_ONCHIP	+ 24
#define SH_INTR_CLASS_ONCHIP_SCIFRXI	SH_INTR_CLASS_ONCHIP	+ 25
#define SH_INTR_CLASS_ONCHIP_SCIFBRI	SH_INTR_CLASS_ONCHIP	+ 26
#define SH_INTR_CLASS_ONCHIP_SCIFTXI	SH_INTR_CLASS_ONCHIP	+ 27
/* SH7751 only */
#define SH_INTR_CLASS_ONCHIP_PCISERR	SH_INTR_CLASS_ONCHIP	+ 48
#define SH_INTR_CLASS_ONCHIP_PCIERR 	SH_INTR_CLASS_ONCHIP	+ 55
#define SH_INTR_CLASS_ONCHIP_PCIPWDWN	SH_INTR_CLASS_ONCHIP	+ 54
#define SH_INTR_CLASS_ONCHIP_PCIPWON	SH_INTR_CLASS_ONCHIP	+ 53
#define SH_INTR_CLASS_ONCHIP_PCIDMA0	SH_INTR_CLASS_ONCHIP	+ 52
#define SH_INTR_CLASS_ONCHIP_PCIDMA1	SH_INTR_CLASS_ONCHIP	+ 51
#define SH_INTR_CLASS_ONCHIP_PCIDMA2	SH_INTR_CLASS_ONCHIP	+ 50
#define SH_INTR_CLASS_ONCHIP_PCIDMA3	SH_INTR_CLASS_ONCHIP	+ 49
#define SH_INTR_CLASS_ONCHIP_TUNI3		SH_INTR_CLASS_ONCHIP	+ 56
#define SH_INTR_CLASS_ONCHIP_TUNI4		SH_INTR_CLASS_ONCHIP	+ 60
#define SH_INTR_CLASS_ONCHIP_TOTAL		(SH_INTR_CLASS_ONCHIP_TUNI4 - SH_INTR_CLASS_ONCHIP	+ 1)

/* GPIO */
#define SH_INTR_CLASS_GPIO				(_NTO_INTR_CLASS_EXTERNAL+ 0x10000)
#define SH_INTR_CLASS_GPIO_TOTAL		16

/* SH7760 base interrupt addresses */
#define SH7760_INTR_CLASS_ONCHIP_SCIFERI_PORT0 		0xC004
#define SH7760_INTR_CLASS_ONCHIP_SCIFERI_PORT1 		0xC018
#define SH7760_INTR_CLASS_ONCHIP_SCIFERI_PORT2 		0xC01C

#endif

/* __SRCVERSION("intr.h $Rev: 648519 $"); */

#ifdef __QNXNTO__
#include <sys/srcversion.h>
__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/SP1/hardware/startup/lib/public/sh/intr.h $ $Rev: 648519 $" )
#endif
