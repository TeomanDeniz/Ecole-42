/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:25 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:52:26 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

void
	rrb(struct s_stacks *stack)
{
	int				b_temp;
	register int	counter;

	counter = stack->b_size;
	b_temp = stack->b[counter - 1];
	while (counter--, counter > 0)
		stack->b[counter] = stack->b[counter - 1];
	stack->b[0] = b_temp;
	if (MOVES)
		write(1, "rrb\n", 4);
	counter = -1;
	if (LOG)
	{
		ft_printf("[A]-[B]\n");
		while (++counter, counter < stack->size)
			ft_printf(" %d - %d\n", stack->a[counter], stack->b[counter]);
	}
}

/*

[A]-[B]
 0 - 1
 0 - 2
 0 - 3

RRB

[A]-[B]
 0 - 3
 0 - 1
 0 - 2

*/
