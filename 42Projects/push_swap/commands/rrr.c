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
	rrr_rra(struct s_stacks *stacks)
{
	int				a_temp;
	register int	counter;

	counter = stacks->a_size;
	a_temp = stacks->a[counter - 1];
	while (counter--, counter > 0)
		stacks->a[counter] = stacks->a[counter - 1];
	stacks->a[0] = a_temp;
}

static inline void
	rrr_rrb(struct s_stacks *stacks)
{
	int				b_temp;
	register int	counter;

	counter = stacks->b_size;
	b_temp = stacks->b[counter - 1];
	while (counter--, counter > 0)
		stacks->b[counter] = stacks->b[counter - 1];
	stacks->b[0] = b_temp;
}

void
	rrr(struct s_stacks *stacks)
{
	rrr_rra(stacks);
	rrr_rrb(stacks);
	write(1, "rrr\n", 4);
}
