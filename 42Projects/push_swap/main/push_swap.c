/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:51:00 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/14 11:35:32 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

static inline int	not_uniq_error(void);
static inline int	not_number_error(void);
static inline int	not_valid_number(void);

int
	main(int argc, char *argv[])
{
	struct s_stacks	stacks;
	register int	counter;

	if (argc >= 2)
	{
		counter = -1;
		if (check_if_only_numbers(argv))
			return (not_number_error());
		if (check_if_not_same(argv))
			return (not_uniq_error());
		if (check_int_limit(argv))
			return (not_valid_number());
		prepare_stacks(&stacks, argv);
		if (is_stack_shorted_down(stacks.a, stacks.a_size))
			return (0);
		if (LOG)
		{
			ft_printf("[A]-[B]\n");
			while (++counter, counter < stacks.size && LOG)
				ft_printf(" %d - %d\n", stacks.a[counter], stacks.b[counter]);
		}
		ai(&stacks);
		return (0);
	}
	return (1);
}

static inline int
	not_uniq_error(void)
{
	write(1, " ERROR - ONLY UNIQUE NUMBERS ARE VALID IN USE\n", 46);
	return (1);
}

static inline int
	not_number_error(void)
{
	write(1, " ERROR - ONLY NUMBERS ARE VALID\n", 32);
	return (1);
}

static inline int
	not_valid_number(void)
{
	write(1, " ERROR - INTEGER MUST BE BETWEEN 2147483647 & -2147483648\n", 58);
	return (1);
}
