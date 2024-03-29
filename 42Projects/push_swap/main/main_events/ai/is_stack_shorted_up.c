/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stack_shorted_up.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:30:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 05:43:59 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../push_swap.h"

short
	is_stack_shorted_up(int *stack, register int size)
{
	register int	counter;

	counter = 1 + size;
	while (--counter, counter > 0)
		if (stack[counter - 1] > stack[counter])
			return (0);
	return (1);
}
