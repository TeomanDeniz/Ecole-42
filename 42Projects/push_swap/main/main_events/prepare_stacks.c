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

#include	"../../push_swap.h"

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
	stack->a = (int *) ft_malloc(result * (sizeof(int *)));
	stack->b = (int *) ft_malloc(result * (sizeof(int *)));
}

static inline void
	number_placer_3(char *s, struct s_stacks *stack, int *sc, int counter)
{
	s[counter] = '\0';
	stack->a[*sc] = ft_atoi(s);
	*sc += 1;
}

static inline void
	number_placer_2(struct s_stacks *stack, char *argv, int *stack_counter)
{
	register int	c;
	register int	counter;
	char			string[0XF];

	c = -1;
	counter = 0;
	while (++c, c < ft_strlen(argv))
	{
		if ((argv[c] >= '0' && argv[c] <= '9') || argv[c] == '-')
			string[counter++] = (argv[c]);
		else
		{
			number_placer_3(string, stack, stack_counter, counter);
			ft_memset(string, 0, 0XF);
			counter = 0;
			while (argv[c] == ' ' || (argv[c] >= 9 && argv[c] <= 13))
				c++;
			c--;
		}
		if (counter == 0)
			ft_memset(string, 0, 0XF);
	}
	if (counter > 0)
		number_placer_3(string, stack, stack_counter, counter);
}

static inline int
	number_placer(struct s_stacks *stack, char **argv)
{
	register int	s;
	int				stack_counter;

	s = 0;
	stack_counter = 0;
	while (++s, s[argv])
	{
		while (*argv[s] == ' ' || (*argv[s] >= 9 && *argv[s] <= 13))
			argv[s] += 1;
		number_placer_2(stack, s[argv], &stack_counter);
	}
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
