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
	stack->a = (long *) ft_malloc(result);
	stack->b = (long *) ft_malloc(result);
}

static inline void
	number_placer_2(struct s_stacks *stack, char *argv, int *stack_counter)
{
	register int	argv_c;
	register int	counter;
	char			string[0X1000];

	argv_c = -1;
	counter = 0;
	while (++argv_c, argv_c <= ft_strlen(argv))
	{
		if ((argv[argv_c] >= '0' && argv[argv_c] <= '9') \
			|| (argv[argv_c] == '-' \
			&& (argv[argv_c + 1] >= '0' && argv[argv_c + 1] <= '9')))
		{
			string[counter] = argv[argv_c];
			counter++;
		}
		else
		{
			string[counter] = '\0';
			counter = 0;
			stack->a[*stack_counter] = ft_atoi(string);
			ft_memset(string, 0, ft_strlen(string));
			*stack_counter += 1;
		}
	}
}

static inline int
	number_placer(struct s_stacks *stack, char **argv)
{
	register int	argv_s;
	int				stack_counter;

	argv_s = 0;
	stack_counter = 0;
	while (++argv_s, argv_s[argv])
		number_placer_2(stack, argv_s[argv], &stack_counter);
	return (stack_counter);
}

void
	prepare_stacks(struct s_stacks *stack, char *argv[])
{
	register int	stack_size;

	stack_size = 0;
	open_sizes_for_stacks(stack, argv);
	stack_size = number_placer(stack, argv);
	stack->size = stack_size;
	stack->a_size = stack_size;
	stack->b_size = 0;
}
