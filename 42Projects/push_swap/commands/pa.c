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
	listing_a(struct s_stacks *stacks, register int counter)
{
	int	*a_temp;

	a_temp = (int *) ft_malloc(stacks->a_size + 1);
	while (counter++, counter < stacks->a_size)
			a_temp[counter + 1] = stacks->a[counter];
	a_temp[0] = stacks->b[0];
	stacks->a = a_temp;
	stacks->a_size += 1;
}

static inline void
	listing_b(struct s_stacks *stacks, register int counter)
{
	int	*b_temp;

	b_temp = (int *) ft_malloc(stacks->b_size - 1);
	while (counter++, counter < stacks->b_size)
		b_temp[counter - 1] = stacks->b[counter];
	stacks->b = b_temp;
	stacks->b_size -= 1;
}

void
	pa(struct s_stacks *stacks)
{
	listing_a(stacks, -1);
	listing_b(stacks, 0);
	write(1, "pa\n", 3);
}
