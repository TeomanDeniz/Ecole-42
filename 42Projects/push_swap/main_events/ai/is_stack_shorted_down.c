/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stack_shorted_down.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:30:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 05:42:51 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../push_swap.h"

short
	is_stack_shorted_down(int *stack, register int size)
{
	register int	counter;

	counter = -1;
	while (++counter, counter < (size - 1))
		if (stack[counter] > stack[counter + 1])
			return (0);
	return (1);
}
