/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stack_shorted.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:30:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/17 18:30:13 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../push_swap.h"

short
	is_stack_shorted(struct s_stacks *stack)
{
	register int	counter;

	counter = -1;
	while (++counter, counter < (stack->size - 1))
		if (stack->a[counter] > stack->a[counter + 1])
			return (0);
	return (1);
}
