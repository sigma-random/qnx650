/*
 * $QNXLicenseC:
 * Copyright 2007, QNX Software Systems. All Rights Reserved.
 * 
 * You must obtain a written license from and pay applicable license fees to QNX 
 * Software Systems before you may reproduce, modify or distribute this software, 
 * or any work that includes all or part of this software.   Free development 
 * licenses are available for evaluation and non-commercial purposes.  For more 
 * information visit http://licensing.qnx.com or email licensing@qnx.com.
 *  
 * This file may contain contributions from others.  Please review this entire 
 * file for other proprietary rights or license notices, as well as the QNX 
 * Development Suite License Guide at http://licensing.qnx.com/license-guide/ 
 * for other information.
 * $
 */



/*
 *	PtBezier.h
 *		Header file for the PtBezier widget class
 *

 */
#ifndef __PT_BEZIER_H_INCLUDED
#define __PT_BEZIER_H_INCLUDED

#ifndef __PT_GRAPHIC_H_INCLUDED
 #include <photon/PtGraphic.h>
#endif

#include <photon/PhPack.h>

#ifdef __cplusplus
extern "C" {
#endif


/*
 * PtBezier public
 */

extern PtWidgetClassRef_t *PtBezier;

#define Pt_BEZIER_ID		42

/* Resources */
#define Pt_ARG_BEZIER_FLAGS			Pt_RESOURCE( 42, 1 )


/*
 * PtBezier private
 */

/* Widget structure */
typedef struct Pt_bezier_widget {
	PtGraphicWidget_t			graphic;
	ushort_t					flags;
	short						reserved;
} PtBezierWidget_t;

/* Widget union */
typedef union Pt_bezier_union {
	PtWidget_t					core;
	PtBasicWidget_t				basic;
	PtGraphicWidget_t			graphic;
	PtBezierWidget_t			bezier;
} PtBezierUnion_t;

#ifdef __cplusplus
};
#endif

#include <photon/PhPackPop.h>

#endif

#ifdef __QNXNTO__
#include <sys/srcversion.h>
__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/trunk/lib/ph/public/photon/PtBezier.h $ $Rev: 219996 $" )
#endif
