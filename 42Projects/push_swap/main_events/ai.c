/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ai.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:29:52 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/15 18:29:53 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

void
	ai(struct s_stacks *stack)
{
	if (stack->size == 2)
	{
		sa(stack);
		return ;
	}
	if (stack->size == 3)
	{
		short_a_three(stack);
		return ;
	}
	sort_a(stack, stack->size, 0);
}
