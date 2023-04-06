/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:11 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:52:12 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../push_swap.h"

void
	rb(struct s_stacks *stack)
{
	register int	b_temp;
	register int	counter;

	counter = -1;
	b_temp = stack->b[0];
	while (++counter, counter < stack->b_size)
		stack->b[counter - 1] = stack->b[counter];
	stack->b[counter - 1] = b_temp;
	if (MOVES)
		write(1, "rb\n", 3);
	counter = -1;
	if (LOG)
	{
		ft_printf("[A]-[B]\n|-   -|\n");
		while (++counter, counter < stack->size)
			ft_printf(" %d - %d\n", stack->a[counter], stack->b[counter]);
	}
}

/*

[A]-[B]
 0 - 1
 0 - 2
 0 - 3

RB

[A]-[B]
 0 - 2
 0 - 3
 0 - 1

*/
