/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:21 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:52:22 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

void
	rra(struct s_stacks *stack)
{
	int				a_temp;
	register int	counter;

	counter = stack->a_size;
	a_temp = stack->a[counter - 1];
	while (counter--, counter > 0)
		stack->a[counter] = stack->a[counter - 1];
	stack->a[0] = a_temp;
	if (MOVES)
		write(1, "rra\n", 4);
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

RRA

[A]-[B]
 3 - 0
 1 - 0
 2 - 0

*/
