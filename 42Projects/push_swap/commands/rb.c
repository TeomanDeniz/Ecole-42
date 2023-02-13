/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:11 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 11:52:12 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

void
	rb(struct s_stacks *stacks)
{
	int				b_temp;
	register int	counter;

	counter = 0;
	b_temp = stacks->b[0];
	while (counter++, counter < stacks->b_size)
		stacks->b[counter - 1] = stacks->b[counter];
	stacks->b[counter - 1] = b_temp;
	write(1, "rb\n", 3);
}
