/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_number_generator.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:33:16 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/14 20:34:05 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

static inline int	ft_rand(int min, int max);

typedef union s_cast
{
	const char		*ptr;
	unsigned long	integer;
}				t_cast;

int
	main(int argc, char *argv[])
{
	register int	counter;
	register int	result;
	int				checker[999];

	if (argc < 2)
		return (1);
	counter = -1;
	while (++counter, counter < 992)
		checker[counter] = 0;
	counter = -1;
	while (++counter, counter < ft_atoi(argv[1]))
	{
		result = ft_rand(0, 990);
		if (checker[result] == 1)
		{
			counter--;
			continue ;
		}
		checker[result] = 1;
		ft_printf("%d ", result);
	}
	return (0);
}

static inline int
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
