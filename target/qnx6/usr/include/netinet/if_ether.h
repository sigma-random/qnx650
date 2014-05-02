/*	$NetBSD: if_ether.h,v 1.33 2006/09/25 12:24:47 sketch Exp $	*/

/*
 * Copyright (c) 1982, 1986, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)if_ether.h	8.3 (Berkeley) 5/2/95
 */

#ifndef _NETINET_IF_ETHER_H_INCLUDED
#define _NETINET_IF_ETHER_H_INCLUDED


#ifdef _KERNEL
#error You should NOT be doing this.
/*
 * XXX This file is for compatibility to externally maintained packages
 * ONLY, or to help porting them if the other way round is not possible.
 * Kernel drivers should be properly ported.
 */
#endif


#ifndef _netinet_if_ether_compat_h_
#define _netinet_if_ether_compat_h_

#ifndef _INTTYPES_H_INCLUDED
#include <inttypes.h>
#endif

/* pull in Ethernet-specific definitions and packet structures */

#ifndef _NET_IF_ETHER_H_INCLUDED
#include <net/if_ether.h>
#endif

/* pull in ARP-specific definitions and packet structures */

#ifndef _NET_IF_ARP_H_INCLUDED
#include <net/if_arp.h>
#endif

/* pull in ARP-over-Ethernet-specific definitions and packet structures */
#ifndef _NETINET_IF_INARP_H_INCLUDED
#include <netinet/if_inarp.h>
#endif

/* ... and define some more which we don't need anymore: */

/*
 * Ethernet Address Resolution Protocol.
 *
 * See RFC 826 for protocol description.  Structure below is not
 * used by our kernel!!! Only for userland programs which are externally
 * maintained and need it.
 */

struct	ether_arp {
	struct	 arphdr ea_hdr;			/* fixed-size header */
	uint8_t arp_sha[ETHER_ADDR_LEN];	/* sender hardware address */
	uint8_t arp_spa[4];			/* sender protocol address */
	uint8_t arp_tha[ETHER_ADDR_LEN];	/* target hardware address */
	uint8_t arp_tpa[4];			/* target protocol address */
} __attribute__((__packed__));
#define	arp_hrd	ea_hdr.ar_hrd
#define	arp_pro	ea_hdr.ar_pro
#define	arp_hln	ea_hdr.ar_hln
#define	arp_pln	ea_hdr.ar_pln
#define	arp_op	ea_hdr.ar_op

#endif /* _netinet_if_ether_compat_h_ */

#endif /* !_NETINET_IF_ETHER_H_INCLUDED */

__SRCVERSION( "$URL: http://svn/product/branches/6.5.0/SP1/lib/io-pkt/sys/netinet/if_ether.h $ $Rev: 233581 $" )
