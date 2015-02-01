/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

int	aliassum(Dosdir*);
void	bootdump32(int, Dosboot32*);
void	bootdump(int, Dosboot*);
void	bootsecdump32(int fd, Xfs *xf, Dosboot32 *b32);
int	cfalloc(Xfile*);
void	chat(char*, ...);
#pragma	varargck	argpos	chat	1
int	cistrcmp(char*, char*);
int	classifyname(char*);
Xfile	*clean(Xfile*);
long	clust2sect(Dosbpb*, long);
void	dirdump(void*);
int	dosfs(Xfs*);
void	dosptrreloc(Xfile *f, Dosptr *dp, ulong addr, ulong offset);
int	emptydir(Xfile*);
int	eqqid(Qid, Qid);
int	falloc(Xfs*);
void	ffree(Xfs *xf, long start);
long	fileaddr(Xfile*, long, int);
void	fixname(char*);
void	getdir(Xfs*, Dir*, Dosdir*, int, int);
long	getfat(Xfs*, int);
int	getfile(Xfile*);
void	getname(char*, Dosdir*);
char	*getnamesect(char*, char*, uchar*, int*, int*, int);
long	getstart(Xfs *xf, Dosdir *d);
Xfs	*getxfs(char*, char*);
long	gtime(Dosdir *d);
void	io(int srvfd);
int	iscontig(Xfs *xf, Dosdir *d);
int	isroot(ulong addr);
int	makecontig(Xfile*, int);
void	mkalias(char*, char*, int);
int	nameok(char*);
void	panic(char*, ...);
#pragma	varargck	argpos	panic	1
void	putdir(Dosdir*, Dir*);
void	putfat(Xfs*, int, ulong);
void	putfile(Xfile*);
int	putlongname(Xfs *f, Dosptr *ndp, char *name, char sname[13]);
void	putname(char*, Dosdir*);
void	putstart(Xfs *xf, Dosdir *d, long start);
void	puttime(Dosdir*, long);
void	rattach(void);
void	rauth(void);
void	rclone(void);
void	rclunk(void);
void	rcreate(void);
long	readdir(Xfile*, void*, long, long);
long	readfile(Xfile*, void*, long, long);
void	refxfs(Xfs*, int);
void	rflush(void);
void	rootfile(Xfile*);
void	ropen(void);
void	rread(void);
void	rremove(void);
void	rstat(void);
void	rwalk(void);
void	rwrite(void);
void	rwstat(void);
void	rversion(void);
int	searchdir(Xfile*, char*, Dosptr*, int, int);
long	sect2clust(Dosbpb*, long);
int	truncfile(Xfile*, long length);
int	utftorunes(Rune*, char*, int);
int	walkup(Xfile*, Dosptr*);
long	writefile(Xfile*, void*, long, long);
char	*xerrstr(int);
Xfile	*xfile(int, int);
int	xfspurge(void);
