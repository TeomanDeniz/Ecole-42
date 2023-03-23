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

static inline void	__short_3(struct s_stacks *s);

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
		__short_3(stack);
		return ;
	}
	short_a(stack, stack->size, 0);
}

static inline void
	__short_3(struct s_stacks *s)
{
	if (1[s->a] < 2[s->a] && 0[s->a] < 2[s->a] && 0[s->a] > 1[s->a])
		sa(s);
	if (0[s->a] > 1[s->a] && 1[s->a] > 2[s->a] && 0[s->a] > 2[s->a])
	{
		sa(s);
		rra(s);
	}
	if (0[s->a] > 2[s->a] && 1[s->a] < 2[s->a] && 0[s->a] > 1[s->a])
		ra(s);
	if (1[s->a] > 2[s->a] && 0[s->a] < 1[s->a] && 0[s->a] < 2[s->a])
	{
		sa(s);
		ra(s);
	}
	if (0[s->a] > 2[s->a] && 1[s->a] > 2[s->a] && 0[s->a] < 1[s->a])
		rra(s);
}
