/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

#include "u.h"
#include "../port/lib.h"
#include "mem.h"
#include "dat.h"
#include "fns.h"
#include "../port/error.h"

void
dumphpm(Hpm *h)
{
	print("Type %#x ", h->type);
	print("Base %#x ", h->base);
	print("Size %#x ", h->size);
}

char *
phmapget(Proc *p, uintptr_t addr, Hpm **pp, uint64_t *type)
{
	char *err;
	uintptr_t ret;

	*type = 0;
	*pp = nil;
	uint64_t key = addr & ~0x1fffffULL;
	// TODO: look up using all page sizes.
	err = hmapget(&p->ptes, key, (uint64_t*)&ret);
	if (err) {
		print("phmapget(%d): %s\n", p->pid, err);
		return err;
	}
	*type = ret & 0xff;
	if (ret > 256) {
		*pp = (void *)(ret & ~0xff);
	}
		
	return err;
}

char *
phmapput(Proc *p, uint64_t addr, Hpm *h)
{
	char *err;

	uint64_t key = addr & ~0x1fffffULL;
	// TODO: look up using all page sizes.
	err = hmapput(&p->ptes, key, (uint64_t)h);
	if (err)
		print("phmapput(%d): %s\n", p->pid, err);
	return err;
}
