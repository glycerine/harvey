/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

/*
 * asin(arg) and acos(arg) return the arcsin, arccos,
 * respectively of their arguments.
 *
 * Arctan is called after appropriate range reduction.
 */

#include <u.h>
#include <libc.h>

double
asin(double arg)
{
	double temp;
	int sign;

	sign = 0;
	if(arg < 0) {
		arg = -arg;
		sign++;
	}
	if(arg > 1)
		return NaN();
	temp = sqrt(1 - arg*arg);
	if(arg > 0.7)
		temp = PIO2 - atan(temp/arg);
	else
		temp = atan(arg/temp);
	if(sign)
		temp = -temp;
	return temp;
}

double
acos(double arg)
{
	if(arg > 1 || arg < -1)
		return NaN();
	return PIO2 - asin(arg);
}
