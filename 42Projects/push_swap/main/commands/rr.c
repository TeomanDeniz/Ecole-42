/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:15 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:52:17 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../push_swap.h"

static inline void
	ss_ra(struct s_stacks *stack)
{
	int				a_temp;
	register int	counter;

	counter = 0;
	a_temp = stack->a[0];
	while (counter++, counter < stack->a_size)
		stack->a[counter - 1] = stack->a[counter];
	stack->a[counter - 1] = a_temp;
}

static inline void
	ss_rb(struct s_stacks *stack)
{
	int				b_temp;
	register int	counter;

	counter = 0;
	b_temp = stack->b[0];
	while (counter++, counter < stack->b_size)
		stack->b[counter - 1] = stack->b[counter];
	stack->b[counter - 1] = b_temp;
}

void
	rr(struct s_stacks *stack)
{
	register int	counter;

	counter = -1;
	ss_ra(stack);
	ss_rb(stack);
	if (MOVES)
		write(1, "rr\n", 3);
	if (LOG)
	{
		ft_printf("[A]-[B]\n|-   -|\n");
		while (++counter, counter < stack->size)
			ft_printf(" %d - %d\n", stack->a[counter], stack->b[counter]);
	}
}

/*

[A]-[B]
 1 - 4
 2 - 5
 3 - 6

RR

[A]-[B]
 2 - 5
 3 - 6
 1 - 4

*/
