/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:43 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:52:44 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../push_swap.h"

void
	sb(struct s_stacks *stack)
{
	register int	temp;
	register int	counter;

	counter = -1;
	temp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = temp;
	if (MOVES)
		write(1, "sb\n", 3);
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

SB

[A]-[B]
 0 - 2
 0 - 1
 0 - 3

*/
