/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:51:53 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:51:55 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

static inline void
	listing_a(struct s_stacks *stack)
{
	register int	counter;

	counter = (stack->a_size);
	while (--counter, counter >= 0)
		stack->a[(counter + 1)] = stack->a[(counter)];
	stack->a[0] = stack->b[0];
	stack->a_size += 1;
}

static inline void
	listing_b(struct s_stacks *stack)
{
	register int	counter;

	counter = -1;
	while (++counter, counter <= stack->b_size)
		stack->b[(counter)] = stack->b[(counter + 1)];
	stack->b[stack->b_size - 1] = 0;
	stack->b_size -= 1;
}

void
	pa(struct s_stacks *stack)
{
	register int	counter;

	counter = -1;
	listing_a(stack);
	listing_b(stack);
	if (MOVES)
		write(1, "pa\n", 3);
	if (LOG)
	{
		ft_printf("[A]-[B]\n");
		while (++counter, counter < stack->size)
			ft_printf(" %d - %d\n", stack->a[counter], stack->b[counter]);
	}
}

/*

[A]-[B]
 4 - 1
 0 - 2
 0 - 3

PA

[A]-[B]
 1 - 2
 4 - 3
 0 - 0

*/
