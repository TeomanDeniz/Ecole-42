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

	counter = 0;
	a_temp = stack->a[0];
	while (counter++, counter < stack->a_size)
		stack->a[counter - 1] = stack->a[counter];
	stack->a[counter - 1] = a_temp;
	write(1, "ra\n", 3);
}
