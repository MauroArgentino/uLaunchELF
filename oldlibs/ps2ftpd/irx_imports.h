/*
 * irx_imports.h - Defines all IRX imports.
 *
 * Copyright (c) 2003 Marcus R. Brown <mrbrown@0xd6.org>
 *
 * See the file LICENSE included with this distribution for licensing terms.
 */

#ifndef IOP_IRX_IMPORTS_H
#define IOP_IRX_IMPORTS_H

#include <irx.h>

/* Please keep these in alphabetical order!  */
#include <cdvdman.h>
#include <intrman.h>
#include <iomanX.h>
#include <ps2ip.h>
#include <sifcmd.h>
#include <sifman.h>
#include <stdio.h>
#include <sysclib.h>
#include <sysmem.h>
#include <thbase.h>
//#include <$PS2SDK\common\tcpip\lwip-1.4.1\src\include\lwip\dns.h>
//#include <dns.h>
#include <ioman_mod.h>
#include <iopmgr.h>

#define getsockopt lwip_getsockopt
#define setsockopt lwip_setsockopt
#define getsockname lwip_getsockname

#endif /* IOP_IRX_IMPORTS_H */
