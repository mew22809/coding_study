/* $Id: bsd-waitpid.h,v 1.5 2003/08/29 16:59:52 mouring Exp $ */

/*
 * Copyright (c) 2000 Ben Lindstrom.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef _BSD_WAITPID_H
#define _BSD_WAITPID_H

#ifndef HAVE_WAITPID
/* Clean out any potental issues */
#undef WIFEXITED
#undef WIFSTOPPED
#undef WIFSIGNALED

/* Define required functions to mimic a POSIX look and feel */
#define _W_INT(w)	(*(int*)&(w))	/* convert union wait to int */
#define _W_TEST(w)	(&(w))
#define WIFEXITED(w)	(!((_W_INT(w)) & 0xFF))
#define WIFSTOPPED(w)	((_W_INT(w)) & 0100)
#define WIFSIGNALED(w)	(!WIFEXITED(w) && !WIFSTOPPED(w))
#define WEXITSTATUS(w)	(int)(WIFEXITED(w) ? ((_W_INT(w) >> 8) & 0xFF) : -1)
#define WTERMSIG(w)	(int)(WIFSIGNALED(w) ? (_W_INT(w) & 0177) : -1)
#define WCOREFLAG	0x80
#define WCOREDUMP(w) 	((_W_INT(w)) & WCOREFLAG)

/* Prototype */
#ifndef HAVE_PID_T
typedef int pid_t;
# define HAVE_PID_T
pid_t waitpid(int, int *, int);

#endif /* !HAVE_PID_T */
#endif /* !HAVE_WAITPID */
#endif /* _BSD_WAITPID_H */
