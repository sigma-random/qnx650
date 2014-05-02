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
 *	Ph.h	
 *		Catch-all header file for Ph and Pg level functions
 *

 */

#ifndef __PH_H_INCLUDED
#define __PH_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

#include <photon/PhT.h>
#include <photon/Pg.h>
#include <photon/PhInternal.h>
#include <photon/PdDirect.h>
#include <photon/PhMsg.h>
#include <photon/PhWm.h>
#include <photon/PpT.h>
#include <photon/PhProto.h>
#include <photon/PkKeyDef.h>
#include <photon/PhCursor.h>
#include <photon/PhService.h>

#ifdef __cplusplus
};
#endif

#endif

#ifdef __QNXNTO__
#include <sys/srcversion.h>
__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/trunk/lib/ph/public/Ph.h $ $Rev: 219996 $" )
#endif
