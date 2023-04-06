/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:40 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:52:41 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../push_swap.h"

void
	sa(struct s_stacks *stack)
{
	register int	temp;
	register int	counter;

	counter = -1;
	temp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = temp;
	if (MOVES)
		write(1, "sa\n", 3);
	if (LOG)
	{
		ft_printf("[A]-[B]\n|-   -|\n");
		while (++counter, counter < stack->size)
			ft_printf(" %d - %d\n", stack->a[counter], stack->b[counter]);
	}
}

/*

[A]-[B]
 1 - 0
 2 - 0
 3 - 0

SA

[A]-[B]
 2 - 0
 1 - 0
 3 - 0

*/
