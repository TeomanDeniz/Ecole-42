/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:34 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:52:35 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../push_swap.h"

static inline void
	rrr_rra(struct s_stacks *stack)
{
	int				a_temp;
	register int	counter;

	counter = stack->a_size;
	a_temp = stack->a[counter - 1];
	while (counter--, counter > 0)
		stack->a[counter] = stack->a[counter - 1];
	stack->a[0] = a_temp;
}

static inline void
	rrr_rrb(struct s_stacks *stack)
{
	int				b_temp;
	register int	counter;

	counter = stack->b_size;
	b_temp = stack->b[counter - 1];
	while (counter--, counter > 0)
		stack->b[counter] = stack->b[counter - 1];
	stack->b[0] = b_temp;
}

void
	rrr(struct s_stacks *stack)
{
	register int	counter;

	counter = -1;
	rrr_rra(stack);
	rrr_rrb(stack);
	if (MOVES)
		write(1, "rrr\n", 4);
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

RRR

[A]-[B]
 3 - 6
 1 - 4
 2 - 5

*/
