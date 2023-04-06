/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 06:34:47 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 06:34:48 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../push_swap.h"

static inline int	sort_small_b(struct s_stacks *s, register int position);

int
	sort_b(struct s_stacks *stack, int position, int control)
{
	int				pivot;
	register int	items;

	if (!control && is_stack_shorted_up(stack->b, position))
		while (position--)
			pa(stack);
	if (position <= 3)
	{
		sort_small_b(stack, position);
		return (1);
	}
	items = position;
	if (!get_mediane(&pivot, stack->b, position))
		return (0);
	while (position != items / 2)
	{
		if (stack->b[0] >= pivot && position--)
			pa(stack);
		else if (++control)
			rb(stack);
	}
	while (items / 2 != stack->b_size && control--)
		rrb(stack);
	return (sort_a(stack, items / 2 + items % 2, 0)
		&& sort_b(stack, items / 2, 0));
}

static inline int
	sort_small_b(struct s_stacks *s, register int position)
{
	if (position == 1)
		pa(s);
	else if (position == 2)
	{
		if (s->b[0] < s->b[1])
			sb(s);
		while (position--)
			pa(s);
	}
	else if (position == 3)
	{
		while (position || !(s->a[0] < s->a[1] && s->a[1] < s->a[2]))
		{
			if (position == 1 && s->a[0] > s->a[1])
				sa(s);
			else if (position == 1 || (position >= 2 && s->b[0] > s->b[1])
				|| (position == 3 && s->b[0] > s->b[2]))
				position -= (pa(s), 1);
			else
				sb(s);
		}
	}
	return (0);
}
