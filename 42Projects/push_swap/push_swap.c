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

#include	"push_swap.h"

static inline int	not_uniq_error(void);
static inline int	not_number_error(void);

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
		prepare_stacks(&stacks, argv);
		if (is_stack_shorted_down(stacks.a, stacks.a_size))
			return (0);
		ai(&stacks);
		while (++counter, counter < stacks.size)
			printf("%d\n", stacks.a[counter]);
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
