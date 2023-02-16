/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:34 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:52:35 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

static inline void
	rrr_rra(struct s_stacks *stack)
{
	int				a_temp;
	register int	counter;

	counter = stack->a_size;
	a_temp = stack->a[counter - 1];
	while (counter--, counter > 0)
		stack->a[counter] = stack->a[counter - 1];
	stack->a[0] = a_temp;
}

static inline void
	rrr_rrb(struct s_stacks *stack)
{
	int				b_temp;
	register int	counter;

	counter = stack->b_size;
	b_temp = stack->b[counter - 1];
	while (counter--, counter > 0)
		stack->b[counter] = stack->b[counter - 1];
	stack->b[0] = b_temp;
}

void
	rrr(struct s_stacks *stack)
{
	rrr_rra(stack);
	rrr_rrb(stack);
	write(1, "rrr\n", 4);
}
