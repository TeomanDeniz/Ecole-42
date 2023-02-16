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
	listing_a(struct s_stacks *stack, register int counter)
{
	int	*a_temp;

	a_temp = (int *) ft_malloc(stack->a_size + 1);
	while (counter++, counter < stack->a_size)
			a_temp[counter + 1] = stack->a[counter];
	a_temp[0] = stack->b[0];
	stack->a = a_temp;
	stack->a_size += 1;
}

static inline void
	listing_b(struct s_stacks *stack, register int counter)
{
	int	*b_temp;

	b_temp = (int *) ft_malloc(stack->b_size - 1);
	while (counter++, counter < stack->b_size)
		b_temp[counter - 1] = stack->b[counter];
	stack->b = b_temp;
	stack->b_size -= 1;
}

void
	pa(struct s_stacks *stack)
{
	listing_a(stack, -1);
	listing_b(stack, 0);
	write(1, "pa\n", 3);
}
