/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:03:55 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/14 19:04:12 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../push_swap.h"

static inline void	sort_small_a(struct s_stacks *stack, register int position);

int
	sort_a(struct s_stacks *stack, int position, int control)
{
	int				pivot;
	register int	items;

	if (is_stack_shorted_down(stack->a, position))
		return (1);
	items = position;
	if (position <= 3)
	{
		sort_small_a(stack, position);
		return (1);
	}
	if (!control && !get_mediane(&pivot, stack->a, position))
		return (0);
	while (position != items / 2 + items % 2)
	{
		if (stack->a[0] < pivot && (position--))
			pb(stack);
		else if (++control)
			ra(stack);
	}
	while (items / 2 + items % 2 != stack->a_size && control--)
		rra(stack);
	return (sort_a(stack, items / 2 + items % 2, 0)
		&& sort_b(stack, items / 2, 0));
	return (1);
}

static inline void
	sort_small_a(struct s_stacks *stack, register int position)
{
	if (position == 3 && stack->a_size == 3)
		short_a_three(stack);
	else if (position == 2)
	{
		if (stack->a[0] > stack->a[1])
			sa(stack);
	}
	else if (position == 3)
	{
		while (position != 3 || !(stack->a[0] < stack->a[1]
				&& stack->a[1] < stack->a[2]))
		{
			if (position == 3 && stack->a[0] > stack->a[1] && stack->a[2])
				sa(stack);
			else if (position == 3 && !(stack->a[2] > stack->a[0]
					&& stack->a[2] > stack->a[1]))
				position -= (pb(stack), 1);
			else if (stack->a[0] > stack->a[1])
				sa(stack);
			else if (position++)
				pa(stack);
		}
	}
}
