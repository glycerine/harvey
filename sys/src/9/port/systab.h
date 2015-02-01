/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

#include "/sys/src/libc/9syscall/sys.h"

typedef long Syscall(ulong*);

Syscall sysr1;
Syscall sys_errstr;
Syscall sysbind;
Syscall syschdir;
Syscall sysclose;
Syscall sysdup;
Syscall sysalarm;
Syscall sysexec;
Syscall sysexits;
Syscall sys_fsession;
Syscall sysfauth;
Syscall sys_fstat;
Syscall syssegbrk;
Syscall sys_mount;
Syscall sysopen;
Syscall sys_read;
Syscall sysoseek;
Syscall syssleep;
Syscall sys_stat;
Syscall sysrfork;
Syscall sys_write;
Syscall syspipe;
Syscall syscreate;
Syscall sysfd2path;
Syscall sysbrk_;
Syscall sysremove;
Syscall sys_wstat;
Syscall sys_fwstat;
Syscall sysnotify;
Syscall sysnoted;
Syscall syssegattach;
Syscall syssegdetach;
Syscall syssegfree;
Syscall syssegflush;
Syscall sysrendezvous;
Syscall sysunmount;
Syscall sys_wait;
Syscall syssemacquire;
Syscall syssemrelease;
Syscall sysseek;
Syscall sysfversion;
Syscall syserrstr;
Syscall sysstat;
Syscall sysfstat;
Syscall syswstat;
Syscall sysfwstat;
Syscall sysmount;
Syscall sysawait;
Syscall syspread;
Syscall syspwrite;
Syscall systsemacquire;
Syscall sysnsec;
Syscall	sysdeath;

Syscall *systab[]={
	[SYSR1]		sysr1,
	[_ERRSTR]	sys_errstr,
	[BIND]		sysbind,
	[CHDIR]		syschdir,
	[CLOSE]		sysclose,
	[DUP]		sysdup,
	[ALARM]		sysalarm,
	[EXEC]		sysexec,
	[EXITS]		sysexits,
	[_FSESSION]	sys_fsession,
	[FAUTH]		sysfauth,
	[_FSTAT]	sys_fstat,
	[SEGBRK]	syssegbrk,
	[_MOUNT]	sys_mount,
	[OPEN]		sysopen,
	[_READ]		sys_read,
	[OSEEK]		sysoseek,
	[SLEEP]		syssleep,
	[_STAT]		sys_stat,
	[RFORK]		sysrfork,
	[_WRITE]	sys_write,
	[PIPE]		syspipe,
	[CREATE]	syscreate,
	[FD2PATH]	sysfd2path,
	[BRK_]		sysbrk_,
	[REMOVE]	sysremove,
	[_WSTAT]	sys_wstat,
	[_FWSTAT]	sys_fwstat,
	[NOTIFY]	sysnotify,
	[NOTED]		sysnoted,
	[SEGATTACH]	syssegattach,
	[SEGDETACH]	syssegdetach,
	[SEGFREE]	syssegfree,
	[SEGFLUSH]	syssegflush,
	[RENDEZVOUS]	sysrendezvous,
	[UNMOUNT]	sysunmount,
	[_WAIT]		sys_wait,
	[SEMACQUIRE]	syssemacquire,
	[SEMRELEASE]	syssemrelease,
	[SEEK]		sysseek,
	[FVERSION]	sysfversion,
	[ERRSTR]	syserrstr,
	[STAT]		sysstat,
	[FSTAT]		sysfstat,
	[WSTAT]		syswstat,
	[FWSTAT]	sysfwstat,
	[MOUNT]		sysmount,
	[AWAIT]		sysawait,
	[PREAD]		syspread,
	[PWRITE]	syspwrite,
	[TSEMACQUIRE]	systsemacquire,
	[NSEC]		sysnsec,
};

char *sysctab[]={
	[SYSR1]		"Running",
	[_ERRSTR]	"_errstr",
	[BIND]		"Bind",
	[CHDIR]		"Chdir",
	[CLOSE]		"Close",
	[DUP]		"Dup",
	[ALARM]		"Alarm",
	[EXEC]		"Exec",
	[EXITS]		"Exits",
	[_FSESSION]	"_fsession",
	[FAUTH]		"Fauth",
	[_FSTAT]	"_fstat",
	[SEGBRK]	"Segbrk",
	[_MOUNT]	"_mount",
	[OPEN]		"Open",
	[_READ]		"_read",
	[OSEEK]		"Oseek",
	[SLEEP]		"Sleep",
	[_STAT]		"_stat",
	[RFORK]		"Rfork",
	[_WRITE]	"_write",
	[PIPE]		"Pipe",
	[CREATE]	"Create",
	[FD2PATH]	"Fd2path",
	[BRK_]		"Brk",
	[REMOVE]	"Remove",
	[_WSTAT]	"_wstat",
	[_FWSTAT]	"_fwstat",
	[NOTIFY]	"Notify",
	[NOTED]		"Noted",
	[SEGATTACH]	"Segattach",
	[SEGDETACH]	"Segdetach",
	[SEGFREE]	"Segfree",
	[SEGFLUSH]	"Segflush",
	[RENDEZVOUS]	"Rendez",
	[UNMOUNT]	"Unmount",
	[_WAIT]		"_wait",
	[SEMACQUIRE]	"Semacquire",
	[SEMRELEASE]	"Semrelease",
	[SEEK]		"Seek",
	[FVERSION]	"Fversion",
	[ERRSTR]	"Errstr",
	[STAT]		"Stat",
	[FSTAT]		"Fstat",
	[WSTAT]		"Wstat",
	[FWSTAT]	"Fwstat",
	[MOUNT]		"Mount",
	[AWAIT]		"Await",
	[PREAD]		"Pread",
	[PWRITE]	"Pwrite",
	[TSEMACQUIRE]	"Tsemacquire",
	[NSEC]		"Nsec",
};

int nsyscall = (sizeof systab/sizeof systab[0]);
