/*********************************************************
 * Copyright (C) 2015-2016 VMware, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation version 2.1 and no later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the Lesser GNU General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA.
 *
 *********************************************************/

/*
 * config.h --
 *
 */

#ifndef _VMHGFS_FUSE_CONFIG_H_
#define _VMHGFS_FUSE_CONFIG_H_

#define HOSTNAME_PREFIX ".host:"

struct vmhgfsConfig {
#ifdef VMX86_DEVEL
   int logLevel;
#endif
   int addBigWrites;
   int addAllowOther;
};

int vmhgfsOptProc(void *data, const char *arg,
                  int key, struct fuse_args *outargs);

int vmhgfsPreprocessArgs(struct fuse_args *outargs);

#endif //_VMHGFS_FUSE_CONFIG_H_
