/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:03:55 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/27 19:04:12 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"
#include	<stdio.h>

#ifdef LOG
# undef LOG
# define LOG 1
#endif

extern inline short	processing(struct s_stacks *stack);
extern inline void	process(struct s_stacks *stack, char *__);
extern inline short	is_stack_okay(struct s_stacks stack, char **argv);
extern inline void	check_if_everything_okay(struct s_stacks s, char **argv);

int
	main(int argc, char *argv[])
{
	struct s_stacks	stacks;
	register int	counter;

	if (argc >= 2)
	{
		counter = -1;
		if (check_if_only_numbers(argv) \
			|| check_if_not_same(argv) \
			|| check_int_limit(argv))
			return (1);
		prepare_stacks(&stacks, argv);
		if (is_stack_shorted_down(stacks.a, stacks.a_size))
			return (0);
		if (LOG)
		{
			ft_printf("[A]-[B]\n");
			while (++counter, counter < stacks.size && LOG)
				ft_printf(" %d - %d\n", stacks.a[counter], stacks.b[counter]);
		}
		processing(&stacks);
		check_if_everything_okay(stacks, argv);
		return (0);
	}
	return (1);
}

inline void
	check_if_everything_okay(struct s_stacks s, char **argv)
{
	register int	counter;

	counter = -1;
	if (is_stack_shorted_down(s.a, s.a_size) \
		&& !is_stack_okay(s, argv))
		write(1, "\n [OKAY]\n", 9);
	else
		write(1, "\n [OOPSE, YOU FUCKED UP LOL]\n", 29);
	if (LOG)
	{
		ft_printf("[A]-[B]\n");
		while (++counter, counter < s.size && LOG)
			ft_printf(" %d - %d\n", s.a[counter], s.b[counter]);
	}
}

inline short
	is_stack_okay(struct s_stacks stack, char **argv)
{
	struct s_stacks	temp;
	register int	counter;
	register int	total_temp;
	register int	total_stack;

	counter = -1;
	total_stack = 0;
	total_temp = 0;
	prepare_stacks(&temp, argv);
	while (++counter, counter < stack.size)
		total_stack += counter[stack.a];
	while (--counter, counter >= 0)
		total_temp += counter[temp.a];
	return (total_temp - total_stack);
}

inline short
	processing(struct s_stacks *stack)
{
	register int	counter;
	register int	loop;
	char			__[0X8LL];
	char			character;

	loop = 1;
	counter = 8;
	while (--counter, counter != 0)
		__[counter] = 0;
	while (loop)
	{
		character = ' ';
		while ((character == ' ') && loop)
			loop = (read(0, &character, 1));
		__[counter] = character;
		if (++counter, character == '\n')
		{
			process(stack, __);
			while (--counter, counter != 0)
				__[counter] = 0;
		}
	}
	return (0);
}

inline void
	process(struct s_stacks *stack, char *__)
{
	if ((__[0] == 'p' && __[1] == 'a'))
		pa(stack);
	if ((__[0] == 'p' && __[1] == 'b'))
		pb(stack);
	if ((__[0] == 'r' && __[1] == 'a'))
		ra(stack);
	if ((__[0] == 'r' && __[1] == 'b'))
		rb(stack);
	if ((__[0] == 'r' && __[1] == 'r' && __[2] == 0))
		rr(stack);
	if ((__[0] == 'r' && __[1] == 'r' && __[2] == 'a'))
		rra(stack);
	if ((__[0] == 'r' && __[1] == 'r' && __[2] == 'b'))
		rrb(stack);
	if ((__[0] == 'r' && __[1] == 'r' && __[2] == 'r'))
		rrr(stack);
	if ((__[0] == 's' && __[1] == 'a'))
		sa(stack);
	if ((__[0] == 's' && __[1] == 'b'))
		sb(stack);
	if ((__[0] == 's' && __[1] == 's'))
		ss(stack);
}
