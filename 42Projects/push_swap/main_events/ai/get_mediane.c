/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_mediane.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 06:47:06 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 06:47:09 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../push_swap.h"

static inline void	sort_temp(int *temp_stack, register int size);

int
	get_mediane(int *pivot, int *stack, register int size)
{
	int				*tmp_stack;
	register int	counter;

	tmp_stack = (int *)ft_malloc(size * sizeof(int));
	if (!tmp_stack)
		return (0);
	counter = -1;
	while (++counter, counter < size)
		tmp_stack[counter] = stack[counter];
	sort_temp(tmp_stack, size);
	*pivot = tmp_stack[size / 2];
	return (1);
}

static inline void
	sort_temp(int *temp_stack, register int size)
{
	register int	x;
	register int	y;
	register int	temp;

	x = -1;
	while (++x, x < size)
	{
		y = x;
		while (++y, y < size)
		{
			if (temp_stack[x] > temp_stack[y])
			{
				temp = temp_stack[x];
				temp_stack[x] = temp_stack[y];
				temp_stack[y] = temp;
			}
		}
	}
}
