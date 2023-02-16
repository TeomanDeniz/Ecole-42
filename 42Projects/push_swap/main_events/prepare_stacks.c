/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:42:47 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 13:42:48 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

static inline void
	open_sizes_for_stacks(struct s_stacks *stack, char **argv)
{
	register int	counter_strings;
	register int	counter_characters;
	register int	result;

	counter_strings = 0;
	counter_characters = -1;
	result = 0;
	while (++counter_strings, argv[counter_strings])
	{
		while (++counter_characters, argv[counter_strings][counter_characters])
			if (argv[counter_strings][counter_characters] >= '0' \
				&& argv[counter_strings][counter_characters] <= '9')
				result++;
		counter_characters = -1;
	}
	stack->a = (int *) ft_malloc(result);
	stack->b = (int *) ft_malloc(result);
}

static inline int
	number_placer(struct s_stacks *stack, char **argv, register int number)
{
	register int	argv_c;
	register int	argv_s;
	register int	counter;

	argv_s = 0;
	counter = 0;
	while (++argv_s, argv_s[argv])
	{
		argv_c = -1;
		while (++argv_c, argv_c <= ft_strlen(argv[argv_s]))
		{
			if (argv[argv_s][argv_c] >= '0' && argv[argv_s][argv_c] <= '9')
				number = (number * 10) + (argv[argv_s][argv_c] & 0B1111);
			else
			{
				if (number != 0)
					stack->a[counter] = number;
				if (number != 0)
					counter++;
				number = 0;
			}
		}
	}
	return (counter);
}

void
	prepare_stacks(struct s_stacks *stack, char *argv[])
{
	register int	stack_size;

	stack_size = 0;
	open_sizes_for_stacks(stack, argv);
	stack_size = number_placer(stack, argv, 0);
	stack->size = stack_size;
	stack->a_size = stack_size;
	stack->b_size = 0;
}
