/*
 * Copyright (C) 2006-2008 Google. All Rights Reserved.
 */

#ifndef _FUSE_VNOPS_H_
#define _FUSE_VNOPS_H_

#include "fuse.h"
#include <fuse_param.h>

typedef int (*fuse_vnode_op_t)(void *);

/*
 * VNOPs
 */

FUSE_VNOP_EXPORT int fuse_vnop_access(struct vnop_access_args *ap);

// FUSE_VNOP_EXPORT int fuse_vnop_advlock(struct vnop_advlock_args *ap);

// FUSE_VNOP_EXPORT int fuse_vnop_allocate(struct vnop_allocate_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_blktooff(struct vnop_blktooff_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_blockmap(struct vnop_blockmap_args *ap);

// FUSE_VNOP_EXPORT int fuse_vnop_bwrite(struct vnop_bwrite_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_close(struct vnop_close_args *ap);

// FUSE_VNOP_EXPORT int fuse_vnop_copyfile(struct vnop_copyfile_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_create(struct vnop_create_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_exchange(struct vnop_exchange_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_fsync(struct vnop_fsync_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_getattr(struct vnop_getattr_args *ap);

// FUSE_VNOP_EXPORT int fuse_vnop_getattrlist(struct vnop_getattrlist_args *ap);

// FUSE_VNOP_EXPORT int fuse_vnop_getnamedstream(struct vnop_getnamedstream_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_getxattr(struct vnop_getxattr_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_inactive(struct vnop_inactive_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_ioctl(struct vnop_ioctl_args *ap);

#ifdef FUSE4X_ENABLE_KQUEUE
FUSE_VNOP_EXPORT int fuse_vnop_kqfilt_add(struct vnop_kqfilt_add_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_kqfilt_remove(struct vnop_kqfilt_remove_args *ap);
#endif

FUSE_VNOP_EXPORT int fuse_vnop_link(struct vnop_link_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_listxattr(struct vnop_listxattr_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_lookup(struct vnop_lookup_args *ap);

// FUSE_VNOP_EXPORT int fuse_vnop_makenamedstream(struct fuse_makenamedstream_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_mkdir(struct vnop_mkdir_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_mknod(struct vnop_mknod_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_mmap(struct vnop_mmap_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_mnomap(struct vnop_mnomap_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_offtoblk(struct vnop_offtoblk_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_open(struct vnop_open_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_pagein(struct vnop_pagein_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_pageout(struct vnop_pageout_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_pathconf(struct vnop_pathconf_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_read(struct vnop_read_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_readdir(struct vnop_readdir_args *ap);

// FUSE_VNOP_EXPORT int fuse_vnop_readdirattr(struct vnop_readdirattr_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_readlink(struct vnop_readlink_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_reclaim(struct vnop_reclaim_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_remove(struct vnop_remove_args *ap);

// FUSE_VNOP_EXPORT int fuse_vnop_readnamedstream(struct vnop_readnamedstream_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_removexattr(struct vnop_removexattr_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_rename(struct vnop_rename_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_revoke(struct vnop_revoke_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_rmdir(struct vnop_rmdir_args *ap);

// FUSE_VNOP_EXPORT int fuse_vnop_searchfs(struct vnop_searchfs_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_select(struct vnop_select_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_setattr(struct vnop_setattr_args *ap);

// FUSE_VNOP_EXPORT int fuse_vnop_setlabel(struct vnop_setlabel_args *ap);

// FUSE_VNOP_EXPORT int fuse_vnop_setattrlist (struct vnop_setattrlist_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_setxattr(struct vnop_setxattr_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_strategy(struct vnop_strategy_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_symlink(struct vnop_symlink_args *ap);

// FUSE_VNOP_EXPORT int fuse_vnop_whiteout(struct vnop_whiteout_args *ap);

FUSE_VNOP_EXPORT int fuse_vnop_write(struct vnop_write_args *ap);

#endif /* _FUSE_VNOPS_H_ */
