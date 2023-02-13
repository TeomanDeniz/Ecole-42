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
	ss_sa(struct s_stacks *stacks)
{
	register int	temp;

	temp = stacks->a[0];
	stacks->a[0] = stacks->a[1];
	stacks->a[1] = temp;
}

static inline void
	ss_sb(struct s_stacks *stacks)
{
	register int	temp;

	temp = stacks->b[0];
	stacks->b[0] = stacks->b[1];
	stacks->b[1] = temp;
}

void
	ss(struct s_stacks *stacks)
{
	ss_sa(stacks);
	ss_sb(stacks);
	write(1, "ss\n", 3);
}
