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
 * SH7786 internal register offsets
 */
#ifndef _SH7786_H_INCLUDED
#define _SH7786_H_INCLUDED

/*
 * INTC
 */
#define	SH7786_INTC_BASE			0xFE410000

#define	SH7786_INTC_ICR0			0x000	// Interrupt control register 0
#define	SH7786_INTC_ICR1			0x01C	// Interrupt control register 1
#define	SH7786_INTC_INTPRI			0x010	// Interrupt priority register
#define	SH7786_INTC_INTREQ			0x024	// Interrupt source register
#define	SH7786_INTC_C0INTMSK0		0x030	// CPU0 Interrupt mask register 0
#define	SH7786_INTC_C1INTMSK0		0x034	// CPU1 Interrupt mask register 0
#define	SH7786_INTC_C0INTMSK1		0x040	// CPU0 Interrupt mask register 1
#define	SH7786_INTC_C1INTMSK1		0x044	// CPU1 Interrupt mask register 1
#define SH7786_INTC_C0INTMSKCLR0	0x050	// CPU0 Interrupt mask clear register 0
#define SH7786_INTC_C1INTMSKCLR0	0x054	// CPU1 Interrupt mask clear register 0
#define SH7786_INTC_C0INTMSKCLR1	0x060	// CPU0 Interrupt mask clear register 1
#define	SH7786_INTC_C1INTMSKCLR1	0x064	// CPU1 Interrupt mask clear register 1
#define	SH7786_INTC_INTMSK2			0x068	// Interrupt mask register 2
#define	SH7786_INTC_INTMSKCLR2		0x06C	// Interrupt mask clear register 2

#define SH7786_INTC_C0INTICI		0x070
#define SH7786_INTC_C1INTICI		0x074
#define SH7786_INTC_C0INTICICLR		0x080
#define SH7786_INTC_C1INTICICLR		0x084
#define SH7786_INTC_C0ICIPRI		0x090
#define SH7786_INTC_C1ICIPRI		0x094
#define SH7786_INTC_C0ICIPRICLR		0x0A0
#define SH7786_INTC_C1ICIPRICLR		0x0A4
#define SH7786_INTC_INTDISTCR0		0x0B0
#define SH7786_INTC_INTDISTCR1		0x0B4
#define SH7786_INTC_INTACK			0x0B8
#define SH7786_INTC_INTACKCLR		0x0BC
#define	SH7786_INTC_NMIFCR			0x0C0	// NMI flag control register
#define	SH7786_INTC_NMISET			0x0C4	// NMI set register
#define SH7786_INTC_IRQACKMSK		0x0D0
#define SH7786_INTC_IRLACKMSK		0x0D4
#define SH7786_INTC_PERIACKMSK0		0x0D8
#define SH7786_INTC_PERIACKMSK1		0x0DC
#define SH7786_INTC_PERIACKMSK2		0x0E0

#define SH7786_INTC_USERIMASK		0x1000

#define	SH7786_INTC_INT2PRI0		0x800
#define	SH7786_INTC_INT2PRI1		0x804
#define	SH7786_INTC_INT2PRI2		0x808
#define SH7786_INTC_INT2PRI3		0x80C
#define SH7786_INTC_INT2PRI4		0x810
#define SH7786_INTC_INT2PRI5		0x814
#define SH7786_INTC_INT2PRI6		0x818
#define SH7786_INTC_INT2PRI7		0x81C
#define	SH7786_INTC_INT2PRI8		0x820
#define	SH7786_INTC_INT2PRI9		0x824
#define SH7786_INTC_INT2PRI10		0x828
#define SH7786_INTC_INT2PRI11		0x82C
#define SH7786_INTC_INT2PRI12		0x830
#define SH7786_INTC_INT2PRI13		0x834
#define SH7786_INTC_INT2PRI14		0x838
#define SH7786_INTC_INT2PRI15		0x83C
#define SH7786_INTC_INT2PRI16		0x840
#define SH7786_INTC_INT2PRI17		0x844
#define SH7786_INTC_INT2PRI18		0x848
#define SH7786_INTC_INT2PRI19		0x84C
#define SH7786_INTC_INT2PRI20		0x850
#define SH7786_INTC_INT2PRI21		0x854
#define SH7786_INTC_INT2PRI22		0x858
#define SH7786_INTC_INT2PRI23		0x85C
#define SH7786_INTC_INT2PRI24		0x860
#define SH7786_INTC_INT2DISTCR0		0x900
#define SH7786_INTC_INT2DISTCR1		0x904
#define SH7786_INTC_INT2DISTCR2		0x908
#define SH7786_INTC_INT2DISTCR3		0x90C

#define SH7786_INTC_C0INT2A0_0		0xA00
#define SH7786_INTC_C0INT2A0_1		0xA04
#define SH7786_INTC_C0INT2A0_2		0xA08
#define SH7786_INTC_C0INT2A0_3		0xA0C
#define SH7786_INTC_C0INT2A1_0		0xA10
#define SH7786_INTC_C0INT2A1_1		0xA14
#define SH7786_INTC_C0INT2A1_2		0xA18
#define SH7786_INTC_C0INT2A1_3		0xA1C
#define SH7786_INTC_C0INT2MSK0		0xA20
#define SH7786_INTC_C0INT2MSK1		0xA24
#define SH7786_INTC_C0INT2MSK2		0xA28
#define SH7786_INTC_C0INT2MSK3		0xA2C
#define SH7786_INTC_C0INT2MSKCLR0	0xA30
#define SH7786_INTC_C0INT2MSKCLR1	0xA34
#define SH7786_INTC_C0INT2MSKCLR2	0xA38
#define SH7786_INTC_C0INT2MSKCLR3	0xA3C

#define SH7786_INTC_C1INT2A0_0		0xB00
#define SH7786_INTC_C1INT2A0_1		0xB04
#define SH7786_INTC_C1INT2A0_2		0xB08
#define SH7786_INTC_C1INT2A0_3		0xB0C
#define SH7786_INTC_C1INT2A1_0		0xB10
#define SH7786_INTC_C1INT2A1_1		0xB14
#define SH7786_INTC_C1INT2A1_2		0xB18
#define SH7786_INTC_C1INT2A1_3		0xB1C
#define SH7786_INTC_C1INT2MSK0		0xB20
#define SH7786_INTC_C1INT2MSK1		0xB24
#define SH7786_INTC_C1INT2MSK2		0xB28
#define SH7786_INTC_C1INT2MSK3		0xB2C
#define SH7786_INTC_C1INT2MSKCLR0	0xB30
#define SH7786_INTC_C1INT2MSKCLR1	0xB34
#define SH7786_INTC_C1INT2MSKCLR2	0xB38
#define SH7786_INTC_C1INT2MSKCLR3	0xB3C

#define SH7786_INTC_INT2B(n)		(0xC00 + (n) * 4)

#define SH7786_INTC_INT2GPIC		0xCC0
#define SH7786_INTC_INT2THSC		0xCC4


/*
 * LBSC
 */
#define SH7786_LBSC_MMSELR		0xFC400020
#define SH7786_LBSC_BCR			0xFF801000
#define SH7786_LBSC_CS0BCR		0xFF802000
#define SH7786_LBSC_CS1BCR		0xFF802010
#define SH7786_LBSC_CS2BCR		0xFF802020
#define SH7786_LBSC_CS3BCR		0xFF802030
#define SH7786_LBSC_CS4BCR		0xFF802040
#define SH7786_LBSC_CS5BCR		0xFF802050
#define SH7786_LBSC_CS6BCR		0xFF802060
#define SH7786_LBSC_CS0WCR		0xFF802008
#define SH7786_LBSC_CS1WCR		0xFF802018
#define SH7786_LBSC_CS2WCR		0xFF802028
#define SH7786_LBSC_CS3WCR		0xFF802038
#define SH7786_LBSC_CS4WCR		0xFF802048
#define SH7786_LBSC_CS5WCR		0xFF802058
#define SH7786_LBSC_CS6WCR		0xFF802068
#define SH7786_LBSC_CS5PCR		0xFF802070
#define SH7786_LBSC_CS6PCR		0xFF802080

/*
 * DBSC3 
 */
#define SH7786_DBSC3_BASE		0xFFA00000
#define SH7786_DBSC3_DBSTATE	0x0C
#define SH7786_DBSC3_DBACEN		0x10
#define SH7786_DBSC3_DBRFEN		0x14
#define SH7786_DBSC3_DBCMD		0x18
#define SH7786_DBSC3_DBWAIT		0x1C
#define SH7786_DBSC3_DBKIND		0x20
#define SH7786_DBSC3_DBCONF		0x24
#define SH7786_DBSC3_DBTR0		0x40
#define SH7786_DBSC3_DBTR1		0x44
#define SH7786_DBSC3_DBTR2		0x48
#define SH7786_DBSC3_DBTR3		0x50
#define SH7786_DBSC3_DBTR4		0x54
#define SH7786_DBSC3_DBTR5		0x58
#define SH7786_DBSC3_DBTR6		0x5C
#define SH7786_DBSC3_DBTR7		0x60
#define SH7786_DBSC3_DBTR8		0x64
#define SH7786_DBSC3_DBTR9		0x68
#define SH7786_DBSC3_DBTR10		0x6C
#define SH7786_DBSC3_DBTR11		0x70
#define SH7786_DBSC3_DBTR12		0x74
#define SH7786_DBSC3_DBTR13		0x78
#define SH7786_DBSC3_DBTR14		0x7C
#define SH7786_DBSC3_DBTR15		0x80
#define SH7786_DBSC3_DBTR16		0x84
#define SH7786_DBSC3_DBTR17		0x88
#define SH7786_DBSC3_DBRFCNF0	0xE0
#define SH7786_DBSC3_DBRFCNF1	0xE4
#define SH7786_DBSC3_DBRFCNF2	0xE8
#define SH7786_DBSC3_DBPDCNT0	0x200
#define SH7786_DBSC3_DBPDCNT1	0x204
#define SH7786_DBSC3_DBPDCNT2	0x208
#define SH7786_DBSC3_DBPDCNT3	0x20C
#define SH7786_DBSC3_DBPDLCK	0x280
#define SH7786_DBSC3_DBPDRGA	0x290
#define SH7786_DBSC3_DBPDRG		0x2A0
#define SH7786_DBSC3_DBBS0CNT0	0x300
#define SH7786_DBSC3_DBBS0CNT1	0x304



/*
 * USB
 */
#define	SH7786_USBF_BASE		0xFFE60000
#define	SH7786_EHCI_BASE		0xFFE70000
#define	SH7786_OHCI_BASE		0xFFE70400

#define	SH7786_USBCTRL_BASE		0xFFE70800
#define	SH7786_USB_PCTL0		0x00
#define	SH7786_USB_PCTL1		0x04
#define	SH7786_USB_ST			0x08
#define	SH7786_USB_EH0			0x0C
#define	SH7786_USB_OH0			0x1C
#define	SH7786_USB_CTL0			0x58

/*
 * Direct Memory Access Controller 0 (DMAC0)
 */
#define	SH7786_DMAC0_BASE		0xFCC08000
#define	SH7786_DMAC0_SIZE		0x1000

#define	SH7786_DMA0OR			0x60

// Channel base, offset from DMAC0_BASE
#define	SH7786_DMAC0_CH0		0x20
#define	SH7786_DMAC0_CH1		0x30
#define	SH7786_DMAC0_CH2		0x40
#define	SH7786_DMAC0_CH3		0x50
#define	SH7786_DMAC0_CH4		0x70
#define	SH7786_DMAC0_CH5		0x80

// Channel registers, offset from channel base
#define	SH7786_DMAC0_SAR		0x00
#define	SH7786_DMAC0_DAR		0x04
#define	SH7786_DMAC0_TCR		0x08
#define	SH7786_DMAC0_CHCR		0x0C
#define	SH7786_DMAC0_SARB		0x100
#define	SH7786_DMAC0_DARB		0x104
#define	SH7786_DMAC0_TCRB		0x108
#define	SH7786_DMAC0_SAOFR		0x200
#define	SH7786_DMAC0_DAOFR		0x204

#define	SH7786_DMA0RS0			0xFE809000
#define	SH7786_DMA0RS1			0xFE809004
#define	SH7786_DMA0RS2			0xFE809008

/*
 * Direct Memory Access Controller 1 (DMAC1)
 */
#define	SH7786_DMAC1_BASE		0xFEA00000
#define	SH7786_DMAC0_SIZE		0x1000

#define	SH7786_DMA1OR			0x10

// Channel base, offset from DMAC1_BASE
#define	SH7786_DMAC1_CH0		0x20
#define	SH7786_DMAC1_CH1		0x120
#define	SH7786_DMAC1_CH2		0x220
#define	SH7786_DMAC1_CH3		0x320

// Channel registers, offset from channel base
#define	SH7786_DMAC1_SAR		0x00
#define	SH7786_DMAC1_DAR		0x08
#define	SH7786_DMAC1_BCNTR		0x10
#define	SH7786_DMAC1_SBCNTR		0x14
#define	SH7786_DMAC1_STRR		0x18	// Channel 0, 1 only
#define	SH7786_DMAC1_CCAR		0x20	// Channel 0, 1 only
#define	SH7786_DMAC1_CHCR		0x28
#define	SH7786_DMAC1_CHSR		0x2C
#define	SH7786_DMAC1_STRS		0x40	// Channel 2, 3 only
#define	SH7786_DMAC1_DTRS		0x50	// Channel 2, 3 only


/*
 * HPB-DMAC
 */
#define	SH7786_HPBDMAC_BASE		0xFFC08000
#define	SH7786_HPBDMAC_SIZE		0x1000

#define	SH7786_HPBDMAC_DTIMR	0x800
#define	SH7786_HPBDMAC_DINTSR	0x80C
#define	SH7786_HPBDMAC_DINTCR	0x810
#define	SH7786_HPBDMAC_DINTMR	0x814
#define	SH7786_HPBDMAC_DACTSR	0x818

#define	SH7786_HPBDMAC_DMASPR0	0x890
#define	SH7786_HPBDMAC_DMASPR1	0x894

// Channel base, offset from HPBDMAC_BASE
#define	SH7786_HPBDMAC_CH(ch)	((ch) * 0x40)

// Channel reset registers, offset from HPBDMAC_BASE
#define	SH7786_HPBDMAC_HSRSTR(ch)	(0x81C + (ch) * 4)

// Channel registers, offset from channel base
#define	SH7786_HPBDMAC_DSAR0	0x00
#define	SH7786_HPBDMAC_DDAR0	0x04
#define	SH7786_HPBDMAC_DTCR0	0x08
#define	SH7786_HPBDMAC_DSAR1	0x0C
#define	SH7786_HPBDMAC_DDAR1	0x10
#define	SH7786_HPBDMAC_DTCR1	0x14
#define	SH7786_HPBDMAC_DSASR	0x18
#define	SH7786_HPBDMAC_DDASR	0x1C
#define	SH7786_HPBDMAC_DTCSR	0x20
#define	SH7786_HPBDMAC_DPTR		0x24
#define	SH7786_HPBDMAC_DCR		0x28
#define	SH7786_HPBDMAC_DCMDR	0x2C
#define	SH7786_HPBDMAC_DSTPR	0x30
#define	SH7786_HPBDMAC_DSTSR	0x34
#define	SH7786_HPBDMAC_DDBGR	0x38
#define	SH7786_HPBDMAC_DDBGR2	0x3C


/* CPG */
#define SH7786_CPG_BASE			0xFFC40000
#define SH7786_CPG_SIZE			0x100

#define SH7786_CPG_FRQCR0		0x00
#define SH7786_CPG_FRQCR1		0x04
#define SH7786_CPG_FRQMR1		0x14
#define SH7786_CPG_PLLCR		0x24
#define SH7786_CPG_MSTPCR0		0x30
#define SH7786_CPG_MSTPCR1		0x34
#define SH7786_CPG_MSTPMR		0x44


/* POWER DOWN MODE */
#define SH7786_CPG_SLPCR		0xFFC40020
#define SH7786_CPG_C0IFC		0xFE400000
#define SH7786_CPG_C1IFC		0xFE401000
#define SH7786_CPG_C0STBCR		0xFE400004
#define SH7786_CPG_C1STBCR		0xFE401004


/* WDT */
#define SH7786_WDT_BASE			0xFFC80000
#define SH7786_WDT_WDTST		0x00
#define SH7786_WDT_WDTCSR		0x04
#define SH7786_WDT_WDTBST		0x08
#define SH7786_WDT_WDTCNT		0x10
#define SH7786_WDT_WDTBCNT		0x18

/* TMU */ 
#define	SH7786_TMU0_2_BASE		0xFFD80000
#define	SH7786_TMU3_5_BASE		0xFFDA0000
#define	SH7786_TMU6_8_BASE		0xFFDC0000
#define	SH7786_TMU9_11_BASE		0xFFDE0000

// TMU registers, offset from TMUx_BASE
#define SH7786_TMU_TSTR			0x04

#define SH7786_TMU_TCOR0		0x08
#define SH7786_TMU_TCNT0		0x0C
#define SH7786_TMU_TCR0			0x10
#define SH7786_TMU_TCOR1		0x14
#define SH7786_TMU_TCNT1		0x18
#define SH7786_TMU_TCR1			0x1C
#define SH7786_TMU_TCOR2		0x20
#define SH7786_TMU_TCNT2		0x24
#define SH7786_TMU_TCR2			0x28
#define SH7786_TMU_TCPR2		0x2C

#define SH7786_TMU_TCOR3		0x08
#define SH7786_TMU_TCNT3		0x0C
#define SH7786_TMU_TCR3			0x10
#define SH7786_TMU_TCOR4		0x14
#define SH7786_TMU_TCNT4		0x18
#define SH7786_TMU_TCR4			0x1C
#define SH7786_TMU_TCOR5		0x20
#define SH7786_TMU_TCNT5		0x24
#define SH7786_TMU_TCR5			0x28

#define SH7786_TMU_TCOR6		0x08
#define SH7786_TMU_TCNT6		0x0C
#define SH7786_TMU_TCR6			0x10
#define SH7786_TMU_TCOR7		0x14
#define SH7786_TMU_TCNT7		0x18
#define SH7786_TMU_TCR7			0x1C
#define SH7786_TMU_TCOR8		0x20
#define SH7786_TMU_TCNT8		0x24
#define SH7786_TMU_TCR8			0x28

#define SH7786_TMU_TCOR9		0x08
#define SH7786_TMU_TCNT9		0x0C
#define SH7786_TMU_TCR9			0x10
#define SH7786_TMU_TCOR10		0x14
#define SH7786_TMU_TCNT10		0x18
#define SH7786_TMU_TCR10		0x1C
#define SH7786_TMU_TCOR11		0x20
#define SH7786_TMU_TCNT11		0x24
#define SH7786_TMU_TCR11		0x28

/* DU */
#define SH7786_DU_BASE		0xFFF80000
#define SH7786_DU_DSYSR		0x000
#define SH7786_DU_DSMR		0x004
#define SH7786_DU_DSSR		0x008
#define SH7786_DU_DSRCR		0x00C
#define SH7786_DU_DIER		0x010
#define SH7786_DU_CPCR		0x014
#define SH7786_DU_DPPR		0x018
#define SH7786_DU_DEFR		0x020

#define SH7786_DU_HDSR		0x040
#define SH7786_DU_HDER		0x044
#define SH7786_DU_VDSR		0x048
#define SH7786_DU_VDER		0x04C
#define SH7786_DU_HCR		0x050
#define SH7786_DU_HSWR		0x054
#define SH7786_DU_VCR		0x058
#define SH7786_DU_VSPR		0x05C
#define SH7786_DU_EQWR		0x060
#define SH7786_DU_SPWR		0x064
#define SH7786_DU_CLAMPSR	0x070
#define SH7786_DU_CLAMPWR	0x074
#define SH7786_DU_DESR		0x078
#define SH7786_DU_DEWR		0x07C

#define SH7786_DU_CP1TR		0x080
#define SH7786_DU_CP2TR		0x084
#define SH7786_DU_CP3TR		0x088
#define SH7786_DU_CP4TR		0x08C
#define SH7786_DU_DOOR		0x090
#define SH7786_DU_CDER		0x094
#define SH7786_DU_BPOR		0x098
#define SH7786_DU_RINTOFSR	0x09C

#define SH7786_DU_P1MR		0x100
#define SH7786_DU_P1MWR		0x104
#define SH7786_DU_P1ALPHAR	0x108
#define SH7786_DU_P1DSXR	0x110
#define SH7786_DU_P1DSYR	0x114
#define SH7786_DU_P1DPXR	0x118
#define SH7786_DU_P1DPYR	0x11C
#define SH7786_DU_P1DSA0R	0x120
#define SH7786_DU_P1DSA1R	0x124
#define SH7786_DU_P1SPXR	0x130
#define SH7786_DU_P1SPYR	0x134
#define SH7786_DU_P1WASPR	0x138
#define SH7786_DU_P1WAMWR	0x13C
#define SH7786_DU_P1BTR		0x140
#define SH7786_DU_P1TC1R	0x144
#define SH7786_DU_P1TC2R	0x148
#define SH7786_DU_P1MLR		0x150

#define SH7786_DU_P2MR		0x200
#define SH7786_DU_P2MWR		0x204
#define SH7786_DU_P2ALPHAR	0x208
#define SH7786_DU_P2DSXR	0x210
#define SH7786_DU_P2DSYR	0x214
#define SH7786_DU_P2DPXR	0x218
#define SH7786_DU_P2DPYR	0x21C
#define SH7786_DU_P2DSA0R	0x220
#define SH7786_DU_P2DSA1R	0x224
#define SH7786_DU_P2SPXR	0x230
#define SH7786_DU_P2SPYR	0x234
#define SH7786_DU_P2WASPR	0x238
#define SH7786_DU_P2WAMWR	0x23C
#define SH7786_DU_P2BTR		0x240
#define SH7786_DU_P2TC1R	0x244
#define SH7786_DU_P2TC2R	0x248
#define SH7786_DU_P2MLR		0x250

#define SH7786_DU_P3MR		0x300
#define SH7786_DU_P3MWR		0x304
#define SH7786_DU_P3ALPHAR	0x308
#define SH7786_DU_P3DSXR	0x310
#define SH7786_DU_P3DSYR	0x314
#define SH7786_DU_P3DPXR	0x318
#define SH7786_DU_P3DPYR	0x31C
#define SH7786_DU_P3DSA0R	0x320
#define SH7786_DU_P3DSA1R	0x324
#define SH7786_DU_P3SPXR	0x330
#define SH7786_DU_P3SPYR	0x334
#define SH7786_DU_P3WASPR	0x338
#define SH7786_DU_P3WAMWR	0x33C
#define SH7786_DU_P3BTR		0x340
#define SH7786_DU_P3TC1R	0x344
#define SH7786_DU_P3TC2R	0x348
#define SH7786_DU_P3MLR		0x350

#define SH7786_DU_P4MR		0x400
#define SH7786_DU_P4MWR		0x404
#define SH7786_DU_P4ALPHAR	0x408
#define SH7786_DU_P4DSXR	0x410
#define SH7786_DU_P4DSYR	0x414
#define SH7786_DU_P4DPXR	0x418
#define SH7786_DU_P4DPYR	0x41C
#define SH7786_DU_P4DSA0R	0x420
#define SH7786_DU_P4DSA1R	0x424
#define SH7786_DU_P4SPXR	0x430
#define SH7786_DU_P4SPYR	0x434
#define SH7786_DU_P4WASPR	0x438
#define SH7786_DU_P4WAMWR	0x43C
#define SH7786_DU_P4BTR		0x440
#define SH7786_DU_P4TC1R	0x444
#define SH7786_DU_P4TC2R	0x448
#define SH7786_DU_P4MLR		0x450

#define SH7786_DU_P5MR		0x500
#define SH7786_DU_P5MWR		0x504
#define SH7786_DU_P5ALPHAR	0x508
#define SH7786_DU_P5DSXR	0x510
#define SH7786_DU_P5DSYR	0x514
#define SH7786_DU_P5DPXR	0x518
#define SH7786_DU_P5DPYR	0x51C
#define SH7786_DU_P5DSA0R	0x520
#define SH7786_DU_P5DSA1R	0x524
#define SH7786_DU_P5SPXR	0x530
#define SH7786_DU_P5SPYR	0x534
#define SH7786_DU_P5WASPR	0x538
#define SH7786_DU_P5WAMWR	0x53C
#define SH7786_DU_P5BTR		0x540
#define SH7786_DU_P5TC1R	0x544
#define SH7786_DU_P5TC2R	0x548
#define SH7786_DU_P5MLR		0x550

#define SH7786_DU_P6MR		0x600
#define SH7786_DU_P6MWR		0x604
#define SH7786_DU_P6ALPHAR	0x608
#define SH7786_DU_P6DSXR	0x610
#define SH7786_DU_P6DSYR	0x614
#define SH7786_DU_P6DPXR	0x618
#define SH7786_DU_P6DPYR	0x61C
#define SH7786_DU_P6DSA0R	0x620
#define SH7786_DU_P6DSA1R	0x624
#define SH7786_DU_P6SPXR	0x630
#define SH7786_DU_P6SPYR	0x634
#define SH7786_DU_P6WASPR	0x638
#define SH7786_DU_P6WAMWR	0x63C
#define SH7786_DU_P6BTR		0x640
#define SH7786_DU_P6TC1R	0x644
#define SH7786_DU_P6TC2R	0x648
#define SH7786_DU_P6MLR		0x650

#define SH7786_DU_CP1_000R	0xFFF81000
#define SH7786_DU_CP1_255R	0xFFF813FC
#define SH7786_DU_CP2_000R	0xFFF82000
#define SH7786_DU_CP2_255R	0xFFF823FC
#define SH7786_DU_CP3_000R	0xFFF83000
#define SH7786_DU_CP3_255R	0xFFF833FC
#define SH7786_DU_CP4_000R	0xFFF84000
#define SH7786_DU_CP4_255R	0xFFF843FC
#define SH7786_DU_ESCR		0xFFF90000
#define SH7786_DU_OTAR		0xFFF90004

/* SCIF */
#define SH7786_SCIF0_BASE	0xFFEA0000
#define SH7786_SCIF1_BASE	0xFFEB0000
#define SH7786_SCIF2_BASE	0xFFEC0000
#define SH7786_SCIF3_BASE	0xFFED0000
#define SH7786_SCIF4_BASE	0xFFEE0000
#define SH7786_SCIF5_BASE	0xFFEF0000


/* GPIO */
#define SH7786_GPIO_BASE	0xFFCC0000
#define SH7786_GPIO_SIZE	0x100

#define SH7786_GPIO_PACR	0x00
#define SH7786_GPIO_PBCR	0x02
#define SH7786_GPIO_PCCR	0x04
#define SH7786_GPIO_PDCR	0x06
#define SH7786_GPIO_PECR	0x08
#define SH7786_GPIO_PFCR	0x0A
#define SH7786_GPIO_PGCR	0x0C
#define SH7786_GPIO_PHCR	0x0E
#define SH7786_GPIO_PJCR	0x10
#define SH7786_GPIO_PKCR	0x12
#define SH7786_GPIO_PADR	0x20
#define SH7786_GPIO_PBDR	0x22
#define SH7786_GPIO_PCDR	0x24
#define SH7786_GPIO_PDDR	0x26
#define SH7786_GPIO_PEDR	0x28
#define SH7786_GPIO_PFDR	0x2A
#define SH7786_GPIO_PGDR	0x2C
#define SH7786_GPIO_PHDR	0x2E
#define SH7786_GPIO_PJDR	0x30
#define SH7786_GPIO_PKDR	0x32
#define SH7786_GPIO_PAPUPR	0x40
#define SH7786_GPIO_PBPUPR	0x42
#define SH7786_GPIO_PCPUPR	0x44
#define SH7786_GPIO_PDPUPR	0x46
#define SH7786_GPIO_PEPUPR	0x48
#define SH7786_GPIO_PFPUPR	0x4A
#define SH7786_GPIO_PGPUPR	0x4C
#define SH7786_GPIO_PHPUPR	0x4E
#define SH7786_GPIO_PJPUPR	0x50
#define SH7786_GPIO_PKPUPR	0x52
#define SH7786_GPIO_PPUPR1	0x60
#define SH7786_GPIO_PPUPR2	0x62
#define SH7786_GPIO_P1MSELR	0x80
#define SH7786_GPIO_P2MSELR	0x82

/* UBC */
#define SH7786_UBC_BASE		0xFF200000
#define SH7786_UBC_SIZE		0x1000

#define SH7786_UBC_CBR0		0x000
#define SH7786_UBC_CRR0		0x004
#define SH7786_UBC_CAR0		0x008
#define SH7786_UBC_CAMR0	0x00C
#define SH7786_UBC_CBR1		0x020
#define SH7786_UBC_CRR1		0x024
#define SH7786_UBC_CAR1		0x028
#define SH7786_UBC_CAMR1	0x02C
#define SH7786_UBC_CDR1		0x030
#define SH7786_UBC_CDMR1	0x034
#define SH7786_UBC_CETR1	0x038
#define SH7786_UBC_CCMFR	0x600
#define SH7786_UBC_CBCR		0x620


/*
 * PCIe
 */
#define	SH7786_PCIE0_BASE		0xFE000000
#define	SH7786_PCIE1_BASE		0xFE200000
#define	SH7786_PCIE2_BASE		0xFCC00000
#define	SH7786_PCIE_SIZE		0x50000


/* PCIE(PCI0) */
#define SH7786_PCIE_PCIEVCR0		0x00000
#define SH7786_PCIE_PCIEVCR1		0x00004
#define SH7786_PCIE_PCIEENBLR		0x00008
#define SH7786_PCIE_PCIEECR			0x0000C
#define SH7786_PCIE_PCIEPAR			0x00010
#define SH7786_PCIE_PCIEPCTLR		0x00018
#define SH7786_PCIE_PCIEPDR			0x00020
#define SH7786_PCIE_PCIEMSGALR		0x00030
#define SH7786_PCIE_PCIEMSGAHR		0x00034
#define SH7786_PCIE_PCIEMSGCTLR		0x00038
#define SH7786_PCIE_PCIEMSGD		0x00040
#define SH7786_PCIE_PCIEDBGCTLR		0x00100
#define SH7786_PCIE_PCIEINTX		0x04000
#define SH7786_PCIE_PCIERMSGR		0x04010
#define SH7786_PCIE_PCIERMSGDR		0x04020
#define SH7786_PCIE_PCIERMSGPR		0x04030
#define SH7786_PCIE_PCIERMSGIER		0x04040
#define SH7786_PCIE_PCIEMSGAINTA	0x05100
#define SH7786_PCIE_PCIEMSGAINTB	0x05108
#define SH7786_PCIE_PCIEMSGAINTC	0x05110
#define SH7786_PCIE_PCIEMSGAINTD	0x05118
#define SH7786_PCIE_PCIEMSGDINTA	0x05120
#define SH7786_PCIE_PCIEMSGDINTB	0x05128
#define SH7786_PCIE_PCIEMSGDINTC	0x05130
#define SH7786_PCIE_PCIEMSGDINTD	0x05138
#define SH7786_PCIE_PCIEMSGPAASN	0x050A0
#define SH7786_PCIE_PCIEMSGPMPME	0x050C0
#define SH7786_PCIE_PCIEMSGPMETO	0x050C8
#define SH7786_PCIE_PCIEMSGPMTOA	0x050D8
#define SH7786_PCIE_PCIEMSGERRCOR	0x05180
#define SH7786_PCIE_PCIEMSGERRNF	0x05188
#define SH7786_PCIE_PCIEMSGERRF		0x05198
#define SH7786_PCIE_PCIEMSGUNLOCK	0x05000
#define SH7786_PCIE_PCIEMSGSSPL		0x05280
#define SH7786_PCIE_PCIEMSGVDT0		0x053F0
#define SH7786_PCIE_PCIEMSGVDT1		0x053F8
#define SH7786_PCIE_PCIEMSGAION		0x05208
#define SH7786_PCIE_PCIEMSGAIB		0x05218
#define SH7786_PCIE_PCIEMSGAIOFF	0x05200
#define SH7786_PCIE_PCIEMSGPION		0x05228
#define SH7786_PCIE_PCIEMSGPIB		0x05238
#define SH7786_PCIE_PCIEMSGPIOFF	0x05220
#define SH7786_PCIE_PCIEMSGABP		0x05240
#define SH7786_PCIE_PCIEERRPCT0		0x06000
#define SH7786_PCIE_PCIEERRPCT1		0x06FFC
#define SH7786_PCIE_PCIERSTR0		0x08000
#define SH7786_PCIE_PCIERSTR1		0x08004
#define SH7786_PCIE_PCIERSTR2		0x08008
#define SH7786_PCIE_PCIERSTR3		0x0800C
#define SH7786_PCIE_PCIEPHYCTLR		0x10000
#define SH7786_PCIE_PCIEPHYADRR		0x10004
#define SH7786_PCIE_PCIEPHYDINR		0x10008
#define SH7786_PCIE_PCIEPHYDOUTR	0x1000C
#define SH7786_PCIE_PCIEPHYSR		0x10010
#define SH7786_PCIE_PCIETCTLR		0x20000
#define SH7786_PCIE_PCIETSTR		0x20004
#define SH7786_PCIE_PCIEINTR		0x20008
#define SH7786_PCIE_PCIEINTER		0x2000C
#define SH7786_PCIE_PCIEEH0R		0x20010
#define SH7786_PCIE_PCIEEH1R		0x20014
#define SH7786_PCIE_PCIEEH2R		0x20018
#define SH7786_PCIE_PCIEEH3R		0x2001C
#define SH7786_PCIE_PCIEMSIR		0x20040
#define SH7786_PCIE_PCIEMSIFR		0x20044
#define SH7786_PCIE_PCIEPWRCTLR		0x20100
#define SH7786_PCIE_PCIELAR0		0x20200
#define SH7786_PCIE_PCIELAMR0		0x20208
#define SH7786_PCIE_PCIECSCR0		0x20210
#define SH7786_PCIE_PCIECSAR0		0x20214
#define SH7786_PCIE_PCIESTCTLR0		0x20218
#define SH7786_PCIE_PCIELAR1		0x20220
#define SH7786_PCIE_PCIELAMR1		0x20228
#define SH7786_PCIE_PCIECSCR1		0x20230
#define SH7786_PCIE_PCIECSAR1		0x20234
#define SH7786_PCIE_PCIESTCTLR1		0x20238
#define SH7786_PCIE_PCIELAR2		0x20240
#define SH7786_PCIE_PCIELAMR2		0x20248
#define SH7786_PCIE_PCIECSCR2		0x20250
#define SH7786_PCIE_PCIECSAR2		0x20254
#define SH7786_PCIE_PCIESTCTLR2		0x20258
#define SH7786_PCIE_PCIELAR3		0x20260
#define SH7786_PCIE_PCIELAMR3		0x20268
#define SH7786_PCIE_PCIECSCR3		0x20270
#define SH7786_PCIE_PCIECSAR3		0x20274
#define SH7786_PCIE_PCIESTCTLR3		0x20278
#define SH7786_PCIE_PCIELAR4		0x20280
#define SH7786_PCIE_PCIELAMR4		0x20288
#define SH7786_PCIE_PCIECSCR4		0x20290
#define SH7786_PCIE_PCIECSAR4		0x20294
#define SH7786_PCIE_PCIESTCTLR4		0x20298
#define SH7786_PCIE_PCIELAR5		0x202A0
#define SH7786_PCIE_PCIELAMR5		0x202A8
#define SH7786_PCIE_PCIECSCR5		0x202B0
#define SH7786_PCIE_PCIECSAR5		0x202B4
#define SH7786_PCIE_PCIESTCTLR5		0x202B8
#define SH7786_PCIE_PCIEPALR0		0x20400
#define SH7786_PCIE_PCIEPAHR0		0x20404
#define SH7786_PCIE_PCIEPAMR0		0x20408
#define SH7786_PCIE_PCIEPTCTLR0		0x2040C
#define SH7786_PCIE_PCIEPALR1		0x20420
#define SH7786_PCIE_PCIEPAHR1		0x20424
#define SH7786_PCIE_PCIEPAMR1		0x20428
#define SH7786_PCIE_PCIEPTCTLR1		0x2042C
#define SH7786_PCIE_PCIEPALR2		0x20440
#define SH7786_PCIE_PCIEPAHR2		0x20444
#define SH7786_PCIE_PCIEPAMR2		0x20448
#define SH7786_PCIE_PCIEPTCTLR2		0x2044C
#define SH7786_PCIE_PCIEPALR3		0x20460
#define SH7786_PCIE_PCIEPAHR3		0x20464
#define SH7786_PCIE_PCIEPAMR3		0x20468
#define SH7786_PCIE_PCIEPTCTLR3		0x2046C
#define SH7786_PCIE_PCIEPALR4		0x20480
#define SH7786_PCIE_PCIEPAHR4		0x20484
#define SH7786_PCIE_PCIEPAMR4		0x20488
#define SH7786_PCIE_PCIEPTCTLR4		0x2048C
#define SH7786_PCIE_PCIEPALR5		0x204A0
#define SH7786_PCIE_PCIEPAHR5		0x204A4
#define SH7786_PCIE_PCIEPAMR5		0x204A8
#define SH7786_PCIE_PCIEPTCTLR5		0x204AC
#define SH7786_PCIE_PCIEDMAOR		0x21000
#define SH7786_PCIE_PCIEDMPALR0		0x21100
#define SH7786_PCIE_PCIEDMPAHR0		0x21104
#define SH7786_PCIE_PCIEDMSALR0		0x21108
#define SH7786_PCIE_PCIEDMBCNTR0	0x21110
#define SH7786_PCIE_PCIEDMSBCNTR0	0x21114
#define SH7786_PCIE_PCIEDMSTRR0		0x21118
#define SH7786_PCIE_PCIEDMCCAR0		0x21120
#define SH7786_PCIE_PCIEDMCHCR0		0x21128
#define SH7786_PCIE_PCIEDMCHSR0		0x2112C
#define SH7786_PCIE_PCIEDMSHCR0		0x21130
#define SH7786_PCIE_PCIEDMPALR1		0x21140
#define SH7786_PCIE_PCIEDMPAHR1		0x21144
#define SH7786_PCIE_PCIEDMSALR1		0x21148
#define SH7786_PCIE_PCIEDMBCNTR1	0x21150
#define SH7786_PCIE_PCIEDMSBCNTR1	0x21154
#define SH7786_PCIE_PCIEDMSTRR1		0x21158
#define SH7786_PCIE_PCIEDMCCAR1		0x21160
#define SH7786_PCIE_PCIEDMCHCR1		0x21168
#define SH7786_PCIE_PCIEDMCHSR1		0x2116C
#define SH7786_PCIE_PCIEDMSHCR1		0x21170
#define SH7786_PCIE_PCIEDMPALR2		0x21180
#define SH7786_PCIE_PCIEDMPAHR2		0x21184
#define SH7786_PCIE_PCIEDMSALR2		0x21188
#define SH7786_PCIE_PCIEDMBCNTR2	0x21190
#define SH7786_PCIE_PCIEDMSBCNTR2	0x21194
#define SH7786_PCIE_PCIEDMSTRR2		0x21198
#define SH7786_PCIE_PCIEDMCCAR2		0x211A0
#define SH7786_PCIE_PCIEDMCHCR2		0x211A8
#define SH7786_PCIE_PCIEDMCHSR2		0x211AC
#define SH7786_PCIE_PCIEDMSHCR2		0x211B0
#define SH7786_PCIE_PCIEDMPALR3		0x211C0
#define SH7786_PCIE_PCIEDMPAHR3		0x211C4
#define SH7786_PCIE_PCIEDMSALR3		0x211C8
#define SH7786_PCIE_PCIEDMBCNTR3	0x211D0
#define SH7786_PCIE_PCIEDMSBCNTR3	0x211D4
#define SH7786_PCIE_PCIEDMSTRR3		0x211D8
#define SH7786_PCIE_PCIEDMCCAR3		0x211E0
#define SH7786_PCIE_PCIEDMCHCR3		0x211E8
#define SH7786_PCIE_PCIEDMCHSR3		0x211EC
#define SH7786_PCIE_PCIEDMSHCR3		0x211F0
#define SH7786_PCIE_PCIESMT2CR		0x30000
#define SH7786_PCIE_PCIESMT5CR		0x30004
#define SH7786_PCIE_PCIELMS5CR		0x30100
#define SH7786_PCIE_PCIELMS5BCR		0x30104
#define SH7786_PCIE_PCIELMT2CR		0x30108
#define SH7786_PCIE_PCIELMT4CR		0x3010C
#define SH7786_PCIE_PCIELMT6CR		0x30110
#define SH7786_PCIE_PCIELMT7CR		0x30114
#define SH7786_PCIE_PCIELMT8CR		0x30118
#define SH7786_PCIE_PCIEPCICONF0	0x40000
#define SH7786_PCIE_PCIEPCICONF1	0x40004
#define SH7786_PCIE_PCIEPCICONF2	0x40008
#define SH7786_PCIE_PCIEPCICONF3	0x4000C
#define SH7786_PCIE_PCIEPCICONF4	0x40010
#define SH7786_PCIE_PCIEPCICONF5	0x40014
#define SH7786_PCIE_PCIEPCICONF6	0x40018
#define SH7786_PCIE_PCIEPCICONF7	0x4001C
#define SH7786_PCIE_PCIEPCICONF8	0x40020
#define SH7786_PCIE_PCIEPCICONF9	0x40024
#define SH7786_PCIE_PCIEPCICONF10	0x40028
#define SH7786_PCIE_PCIEPCICONF11	0x4002C
#define SH7786_PCIE_PCIEPCICONF12	0x40030
#define SH7786_PCIE_PCIEPCICONF13	0x40034
#define SH7786_PCIE_PCIEPCICONF14	0x40038
#define SH7786_PCIE_PCIEPCICONF15	0x4003C
#define SH7786_PCIE_PCIEPMCAP0		0x40040
#define SH7786_PCIE_PCIEPMCAP1		0x40044
#define SH7786_PCIE_PCIEMSICAP0		0x40050
#define SH7786_PCIE_PCIEMSICAP1		0x40054
#define SH7786_PCIE_PCIEMSICAP2		0x40058
#define SH7786_PCIE_PCIEMSICAP3		0x4005C
#define SH7786_PCIE_PCIEMSICAP4		0x40060
#define SH7786_PCIE_PCIEMSICAP5		0x40064
#define SH7786_PCIE_PCIEEXPCAP0		0x40070
#define SH7786_PCIE_PCIEEXPCAP1		0x40074
#define SH7786_PCIE_PCIEEXPCAP2		0x40078
#define SH7786_PCIE_PCIEEXPCAP3		0x4007C
#define SH7786_PCIE_PCIEEXPCAP4		0x40080
#define SH7786_PCIE_PCIEEXPCAP5		0x40084
#define SH7786_PCIE_PCIEEXPCAP6		0x40088
#define SH7786_PCIE_PCIEEXPCAP7		0x4008C
#define SH7786_PCIE_PCIEEXPCAP8		0x40090
#define SH7786_PCIE_PCIEVCCAP0		0x40100
#define SH7786_PCIE_PCIEVCCAP1		0x40104
#define SH7786_PCIE_PCIEVCCAP2		0x40108
#define SH7786_PCIE_PCIEVCCAP3		0x4010C
#define SH7786_PCIE_PCIEVCCAP4		0x40110
#define SH7786_PCIE_PCIEVCCAP5		0x40114
#define SH7786_PCIE_PCIEVCCAP6		0x40118
#define SH7786_PCIE_PCIEVCCAP7		0x4011C
#define SH7786_PCIE_PCIEVCCAP8		0x40120
#define SH7786_PCIE_PCIEVCCAP9		0x40124
#define SH7786_PCIE_PCIENUMCAP0		0x401B0
#define SH7786_PCIE_PCIENUMCAP1		0x401B4
#define SH7786_PCIE_PCIENUMCAP2		0x401B8
#define SH7786_PCIE_PCIEIDSETR0		0x41000
#define SH7786_PCIE_PCIEIDSETR1		0x41004
#define SH7786_PCIE_PCIEBAR0SETR	0x41008
#define SH7786_PCIE_PCIEBAR1SETR	0x4100C
#define SH7786_PCIE_PCIEBAR2SETR	0x41010
#define SH7786_PCIE_PCIEBAR3SETR	0x41014
#define SH7786_PCIE_PCIEBAR4SETR	0x41018
#define SH7786_PCIE_PCIEBAR5SETR	0x4101C
#define SH7786_PCIE_PCIECISSETR		0x41020
#define SH7786_PCIE_PCIEIDSETR2		0x41024
#define SH7786_PCIE_PCIEEROMSETR	0x41028
#define SH7786_PCIE_PCIEDSERSETR0	0x4102C
#define SH7786_PCIE_PCIEDSERSETR1	0x41030
#define SH7786_PCIE_PCIECTLR		0x41040
#define SH7786_PCIE_PCIETLSR		0x41044
#define SH7786_PCIE_PCIETLCTLR		0x41048
#define SH7786_PCIE_PCIEDLSR		0x4104C
#define SH7786_PCIE_PCIEDLCTLR		0x41050
#define SH7786_PCIE_PCIEMACSR		0x41054
#define SH7786_PCIE_PCIEMACCTLR		0x41058
#define SH7786_PCIE_PCIEPMSR		0x4105C
#define SH7786_PCIE_PCIEPMCTLR		0x41060
#define SH7786_PCIE_PCIETLINTENR	0x41064
#define SH7786_PCIE_PCIEDLINTENR	0x41068
#define SH7786_PCIE_PCIEMACINTENR	0x4106C
#define SH7786_PCIE_PCIEPMINTENR	0x41070
#define SH7786_PCIE_PCIETXDCTLR		0x44000
#define SH7786_PCIE_PCIETXCTLR		0x44020
#define SH7786_PCIE_PCIETXSR		0x44028
#define SH7786_PCIE_PCIETXVC0DCTLR	0x44100
#define SH7786_PCIE_PCIETXVC0SR		0x44108
#define SH7786_PCIE_PCIEVC0PDTXR	0x44110
#define SH7786_PCIE_PCIEVC0PHTXR	0x44118
#define SH7786_PCIE_PCIEVC0NPDTXR	0x44120
#define SH7786_PCIE_PCIEVC0NPHTXR	0x44128
#define SH7786_PCIE_PCIEVC0CDTXR	0x44130
#define SH7786_PCIE_PCIEVC0CHTXR	0x44138
#define SH7786_PCIE_PCIETXVCXDCTLR	0x44200
#define SH7786_PCIE_PCIETXVCXSR		0x44208
#define SH7786_PCIE_PCIEVCXPDTXR	0x44210
#define SH7786_PCIE_PCIEVCXPHTXR	0x44218
#define SH7786_PCIE_PCIEVCXNPDTXR	0x44220
#define SH7786_PCIE_PCIEVCXNPHTXR	0x44228
#define SH7786_PCIE_PCIEVCXCDTXR	0x44230
#define SH7786_PCIE_PCIEVCXCHTXR	0x44238
#define SH7786_PCIE_PCIERXDCTLR		0x46000
#define SH7786_PCIE_PCIEERPCTLR		0x46008
#define SH7786_PCIE_PCIEERPHR		0x46010
#define SH7786_PCIE_PCIEERPERR		0x46018
#define SH7786_PCIE_PCIERXVC0DCTLR	0x46100
#define SH7786_PCIE_PCIERXVC0SR		0x46108
#define SH7786_PCIE_PCIEVC0PDRXR	0x46140
#define SH7786_PCIE_PCIEVC0PHRXR	0x46148
#define SH7786_PCIE_PCIEVC0PERR		0x46150
#define SH7786_PCIE_PCIEVC0NPDRXR	0x46158
#define SH7786_PCIE_PCIEVC0NPHRXR	0x46160
#define SH7786_PCIE_PCIEVC0NPERR	0x46168
#define SH7786_PCIE_PCIEVC0CDRXR	0x46170
#define SH7786_PCIE_PCIEVC0CHRXR	0x46178
#define SH7786_PCIE_PCIEVC0CERR		0x46180
#define SH7786_PCIE_PCIERXVCXDCTLR	0x46200
#define SH7786_PCIE_PCIERXVCXSR		0x46208
#define SH7786_PCIE_PCIEVCXPDRXR	0x46240
#define SH7786_PCIE_PCIEVCXPHRXR	0x46248
#define SH7786_PCIE_PCIEVCXPERR		0x46250
#define SH7786_PCIE_PCIEVCXNPDRXR	0x46258
#define SH7786_PCIE_PCIEVCXNPHRXR	0x46260
#define SH7786_PCIE_PCIEVCXNPERR	0x46268
#define SH7786_PCIE_PCIEVCXCDRXR	0x46270
#define SH7786_PCIE_PCIEVCXCHRXR	0x46278
#define SH7786_PCIE_PCIEVCXCERR		0x46280



/* Ether */
#define SH7786_ETHER_BASE		0xFEE00000
#define SH7786_ETHER_SIZE		0x400

#define SH7786_ETHER_CXR0		0x200
#define SH7786_ETHER_CXR1		0x208
#define SH7786_ETHER_CXR2		0x210
#define SH7786_ETHER_CXR3		0x218
#define SH7786_ETHER_CXR4		0x220
#define SH7786_ETHER_CXR5		0x228
#define SH7786_ETHER_CXR6		0x230
#define SH7786_ETHER_CXR7		0x238
#define SH7786_ETHER_CXR8		0x240
#define SH7786_ETHER_CXR9		0x248
#define SH7786_ETHER_CXR10		0x250
#define SH7786_ETHER_CXR11		0x258
#define SH7786_ETHER_CXR12		0x260
#define SH7786_ETHER_CXR13		0x264
#define SH7786_ETHER_CXR14		0x268
#define SH7786_ETHER_CXR15		0x26C
#define SH7786_ETHER_CXR16		0x270
#define SH7786_ETHER_CXR17		0x274
#define SH7786_ETHER_CXRS2		0x278
#define SH7786_ETHER_CXR18		0x27C
#define SH7786_ETHER_CXR19		0x280
#define SH7786_ETHER_CXRD0		0x2C8
#define SH7786_ETHER_CXRD1		0x2CC
#define SH7786_ETHER_CXRD2		0x2D0
#define SH7786_ETHER_CXRD3		0x2D4
#define SH7786_ETHER_CXRD4		0x2D8
#define SH7786_ETHER_CXRD5		0x2DC
#define SH7786_ETHER_CXRD6		0x2E0
#define SH7786_ETHER_CXR20		0x300
#define SH7786_ETHER_CXR2A		0x308
#define SH7786_ETHER_CXR21		0x310
#define SH7786_ETHER_CXR22		0x318
#define SH7786_ETHER_CXR23		0x320
#define SH7786_ETHER_CXR2B		0x328
#define SH7786_ETHER_CXR30		0x340
#define SH7786_ETHER_CXR70		0x350
#define SH7786_ETHER_CXR71		0x354
#define SH7786_ETHER_CXR72		0x358
#define SH7786_ETHER_CXR80		0x360
#define SH7786_ETHER_CXR81		0x364
#define SH7786_ETHER_CXR82		0x368
#define SH7786_ETHER_CXR83		0x36C
#define SH7786_ETHER_CXR24		0x3C0
#define SH7786_ETHER_CXR25		0x3C8
#define SH7786_ETHER_CXR40		0x3D0
#define SH7786_ETHER_CXR41		0x3D4
#define SH7786_ETHER_CXR42		0x3D8
#define SH7786_ETHER_CXR43		0x3DC
#define SH7786_ETHER_CXR50		0x3E4
#define SH7786_ETHER_CXR51		0x3E8
#define SH7786_ETHER_CXR52		0x3EC
#define SH7786_ETHER_CXR53		0x3F0
#define SH7786_ETHER_CXR54		0x3F4
#define SH7786_ETHER_CXR55		0x3F8

/* HSPI */
#define SH7786_HSPI_BASE		0xFFF40000
#define SH7786_HSPI_SIZE		0x100

#define SH7786_HSPI_SPCR		0x00
#define SH7786_HSPI_SPSR		0x04
#define SH7786_HSPI_SPSCR		0x08
#define SH7786_HSPI_SPTBR		0x0C
#define SH7786_HSPI_SPRBR		0x10

/* HAC */
#define SH7786_HAC0_BASE		0xFFE40000
#define SH7786_HAC1_BASE		0xFFE50000
#define SH7786_HAC_SIZE			0x100

// HAC registers, offset from HAC base
#define SH7786_HAC_HACCR		0x08
#define SH7786_HAC_HACCSAR		0x20
#define SH7786_HAC_HACCSDR		0x24
#define SH7786_HAC_HACPCML		0x28
#define SH7786_HAC_HACPCMR		0x2C
#define SH7786_HAC_HACTIER		0x50
#define SH7786_HAC_HACTSR		0x54
#define SH7786_HAC_HACRIER		0x58
#define SH7786_HAC_HACRSR		0x5C
#define SH7786_HAC_HACACR		0x60


/* SSI */
#define SH7786_SSI0_BASE		0xFFE00000
#define SH7786_SSI1_BASE		0xFFE10000

// SSI registers, offset from SSI base
#define SH7786_SSI_SSICR		0x00
#define SH7786_SSI_SSISR		0x04
#define SH7786_SSI_SSITDR		0x08
#define SH7786_SSI_SSIRDR		0x0C

/* I2C */
#define SH7786_I2C0_BASE		0xFFE80000
#define SH7786_I2C1_BASE		0xFFE90000
#define SH7786_I2C_SIZE			0x100

#define SH7786_I2C_ICSCR		0x00
#define SH7786_I2C_ICMCR		0x04
#define SH7786_I2C_ICSSR		0x08
#define SH7786_I2C_ICMSR		0x0C
#define SH7786_I2C_ICSIER		0x10
#define SH7786_I2C_ICMIER		0x14
#define SH7786_I2C_ICCCR		0x18
#define SH7786_I2C_ICSAR		0x1C
#define SH7786_I2C_ICMAR		0x20
#define SH7786_I2C_ICRXD		0x24
#define SH7786_I2C_ICTXD		0x24

/* FLCTL */
#define SH7786_FLCTL_BASE		0xFFD00000
#define SH7786_FLCTL_SIZE		0x100

#define SH7786_FLCTL_FLCMNCR	0x00
#define SH7786_FLCTL_FLCMDCR	0x04
#define SH7786_FLCTL_FLCMCDR	0x08
#define SH7786_FLCTL_FLADR		0x0C
#define SH7786_FLCTL_FLDATAR	0x10
#define SH7786_FLCTL_FLDTCNTR	0x14
#define SH7786_FLCTL_FLINTDMACR	0x18
#define SH7786_FLCTL_FLBSYTMR	0x1C
#define SH7786_FLCTL_FLBSYCNT	0x20
#define SH7786_FLCTL_FLDTFIFO	0x24
#define SH7786_FLCTL_FLECFIFO	0x28
#define SH7786_FLCTL_FLTRCR		0x2C
#define SH7786_FLCTL_FLADR2		0x3C

#endif

__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/SP1/hardware/startup/lib/public/sh/7786.h $ $Rev: 647539 $" )
