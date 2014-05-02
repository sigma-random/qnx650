/* Copyright 2009, QNX Software Systems. All Rights Reserved.
 * 
 * You must obtain a written license from and pay applicable license fees to 
 * QNX Software Systems before you may reproduce, modify or distribute this 
 * software, or any work that includes all or part of this software.  Free 
 * development licenses are available for evaluation and non-commercial purposes.  
 * For more information visit http://licensing.qnx.com or email licensing@qnx.com.
 * 
 * This file may contain contributions from others.  Please review this entire 
 * file for other proprietary rights or license notices, as well as the QNX 
 * Development Suite License Guide at http://licensing.qnx.com/license-guide/
 * for other information.
 */
#ifndef __Pt_TEMPLATE_INCLUDED
#define __Pt_TEMPLATE_INCLUDED

#include <photon/PtBasic.h>

#include <photon/PhPack.h>

#ifdef __cplusplus
extern "C" {
#endif

extern PtWidgetClassRef_t *PtTemplate;

#define	Pt_ARG_TEMPLATE_1 	Pt_RESOURCE( Pt_USER(1), 0 )
#define	Pt_ARG_TEMPLATE_2	Pt_RESOURCE( Pt_USER(1), 1 )

/* Widget structure */
struct pt_template{
	PtBasic_t	basic;
	PhRect_t 	rect1;
	short		foo;
} PtTemplate_t;

/* Widget union */
typedef union Pt_template_union {
	PtWidget_t			core;
	PtBasicWidget_t		basic;
	PtTemplate_t		template;
} PtTemplateUnion_t;

#ifdef __cplusplus
};
#endif

#include <photon/PhPackPop.h>

#endif

__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/trunk/lib/ph/public/photon/PtTemplate.h $ $Rev: 224590 $" )
