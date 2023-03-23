/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:00 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:52:01 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

static inline void
	listing_b(struct s_stacks *stack)
{
	register int	counter;

	counter = (stack->b_size);
	while (--counter, counter >= 0)
		stack->b[(counter + 1)] = stack->b[(counter)];
	stack->b[0] = stack->a[0];
	stack->b_size += 1;
}

static inline void
	listing_a(struct s_stacks *stack)
{
	register int	counter;

	counter = -1;
	while (++counter, counter <= stack->a_size)
		stack->a[(counter)] = stack->a[(counter + 1)];
	stack->a[stack->a_size - 1] = 0;
	stack->a_size -= 1;
}

void
	pb(struct s_stacks *stack)
{
	register int	counter;

	counter = -1;
	listing_b(stack);
	listing_a(stack);
	if (MOVES)
		write(1, "pb\n", 3);
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
 2 - 0
 3 - 0

PB

[A]-[B]
 2 - 1
 3 - 4
 0 - 0

*/
