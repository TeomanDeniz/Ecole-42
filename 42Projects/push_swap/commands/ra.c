/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:06 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:52:07 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

void
	ra(struct s_stacks *stack)
{
	register int	a_temp;
	register int	counter;

	counter = -1;
	a_temp = stack->a[0];
	while (++counter, counter < stack->a_size)
		stack->a[counter - 1] = stack->a[counter];
	stack->a[counter - 1] = a_temp;
	if (MOVES)
		write(1, "ra\n", 3);
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
 1 - 0
 2 - 0
 3 - 0

RA

[A]-[B]
 2 - 0
 3 - 0
 1 - 0

*/
