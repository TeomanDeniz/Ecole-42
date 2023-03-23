/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:47 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:52:48 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

static inline void
	ss_sa(struct s_stacks *stack)
{
	register int	temp;

	temp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = temp;
}

static inline void
	ss_sb(struct s_stacks *stack)
{
	register int	temp;

	temp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = temp;
}

void
	ss(struct s_stacks *stack)
{
	register int	counter;

	counter = -1;
	ss_sa(stack);
	ss_sb(stack);
	if (MOVES)
		write(1, "ss\n", 3);
	if (LOG)
	{
		ft_printf("[A]-[B]\n");
		while (++counter, counter < stack->size)
			ft_printf(" %d - %d\n", stack->a[counter], stack->b[counter]);
	}
}

/*

[A]-[B]
 1 - 4
 2 - 5
 3 - 6

SS

[A]-[B]
 2 - 5
 1 - 4
 3 - 6

*/
