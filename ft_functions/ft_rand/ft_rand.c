/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/07 13:14:42 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<time.h>/* For TCC (Tiny C Compiler)
# time();
*/

#ifndef __TINYC__

typedef union s_cast
{
	const char		*ptr;
	unsigned long	integer;
}				t_cast;

int
	ft_rand(int min, int max)
{
	static unsigned long	address;
	static int				seed;
	char					pointer[8192];
	t_cast					cast;

	seed = seed + 0;
	if (!seed)
	{
		cast.ptr = &pointer[seed];
		address = cast.integer + \
			((unsigned long)__TIME__[0] \
			* (unsigned long)__TIME__[1] \
			+ (unsigned long)__TIME__[3] \
			* (unsigned long)__TIME__[4] \
			+ (unsigned long)__TIME__[6]) \
			* (unsigned long)__TIME__[7];
	}
	address = (address * 1103515245 + 12345) & 0x7fffffff;
	seed++;
	return (min + (int)((double)address / (0x7fffffff / (max - min + 1))));
}

#else

int
	ft_rand(int min, int max)
{
	static unsigned long	seed;

	seed = seed + 0;
	if (seed == 0)
		seed = time(NULL);
	seed = (seed * 1103515245 + 12345) & 0x7fffffff;
	return (min + (int)((double)seed / (0x7fffffff / (max - min + 1))));
}

#endif
