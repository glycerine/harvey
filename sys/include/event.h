/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

#pragma src "/sys/src/libdraw"
#pragma lib "libdraw.a"

typedef struct	Cursor Cursor;
typedef struct	Event Event;
typedef struct	Menu Menu;

enum
{
	Emouse		= 1,
	Ekeyboard	= 2,
};

enum
{
	MAXSLAVE = 32,
	EMAXMSG = 128+8192,	/* size of 9p header+data */
};

struct	Mouse
{
	int	buttons;	/* bit array: LMR=124 */
	Point	xy;
	ulong	msec;
};

struct	Event
{
	int	kbdc;
	Mouse	mouse;
	int	n;		/* number of characters in message */
	void	*v;		/* data unpacked by general event-handling function */
	uchar	data[EMAXMSG];	/* message from an arbitrary file descriptor */
};

struct Menu
{
	char	**item;
	char	*(*gen)(int);
	int	lasthit;
};

/*
 * Events
 */
extern void	 einit(ulong);
extern ulong	 estart(ulong, int, int);
extern ulong	 estartfn(ulong, int, int, int (*fn)(int, Event*, uchar*, int));
extern ulong	 etimer(ulong, int);
extern ulong	 event(Event*);
extern ulong	 eread(ulong, Event*);
extern Mouse	 emouse(void);
extern int	 ekbd(void);
extern int	 ecanread(ulong);
extern int	 ecanmouse(void);
extern int	 ecankbd(void);
extern void	 eresized(int);	/* supplied by user */
extern int	 emenuhit(int, Mouse*, Menu*);
extern int	eatomouse(Mouse*, char*, int);
extern Rectangle	getrect(int, Mouse*);
extern void	 esetcursor(Cursor*);
extern void	 emoveto(Point);
extern Rectangle	egetrect(int, Mouse*);
extern void		edrawgetrect(Rectangle, int);
extern int		ereadmouse(Mouse*);
extern int		eatomouse(Mouse*, char*, int);
