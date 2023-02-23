/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:51:00 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 12:06:32 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

static inline int
	ps_error(register char error_level)
{
	if (error_level == 1)
		write(1, "ERROR - ONLY UNIQUE NUMBERS ARE VALID IN USE\n", 45);
	if (error_level == 2)
		write(1, "ERROR - ONLY NUMBERS ARE VALID\n", 31);
	return (1);
}

int
	main(int argc, char *argv[])
{
	struct s_stacks	stacks;
	register int	counter;

	if (argc >= 2)
	{
		counter = -1;
		if (check_if_only_numbers(argv))
			return (ps_error(2));
		if (check_if_not_same(argv))
			return (ps_error(1));
		prepare_stacks(&stacks, argv);
		ai(&stacks);
		while (++counter, counter < stacks.size)
			printf("%ld\n", stacks.a[counter]);
		return (0);
	}
	return (ps_error(3));
}
