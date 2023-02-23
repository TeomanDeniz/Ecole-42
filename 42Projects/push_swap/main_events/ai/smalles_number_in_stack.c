/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalles_number_in_stack.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:28:52 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/17 18:28:53 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../push_swap.h"

int
	smalles_number_in_stack_a(struct s_stacks *stack)
{
	register int	counter;
	register int	result;

	counter = 0;
	result = stack->a[counter];
	while (++counter, counter < stack->size)
		if (stack->a[counter] < result)
			result = stack->a[counter];
	return (result);
}

int
	smalles_number_in_stack_b(struct s_stacks *stack)
{
	register int	counter;
	register int	result;

	counter = 0;
	result = stack->b[counter];
	while (++counter, counter < stack->size)
		if (stack->b[counter] < result)
			result = stack->b[counter];
	return (result);
}
