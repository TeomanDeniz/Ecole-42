/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:06 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:52:07 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

void
	ra(struct s_stacks *stacks)
{
	int				a_temp;
	register int	counter;

	counter = 0;
	a_temp = stacks->a[0];
	while (counter++, counter < stacks->a_size)
		stacks->a[counter - 1] = stacks->a[counter];
	stacks->a[counter - 1] = a_temp;
	write(1, "ra\n", 3);
}
