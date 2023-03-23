/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:03:55 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/14 19:04:12 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../push_swap.h"

//https://github.com/Surfi89/push_swap/blob/main/src/push_swap/

static inline void
	the_short_3(struct s_stacks *s)
{ // Should be removed (Used in sort_3)
	if (1[s->a] < 2[s->a] && 0[s->a] < 2[s->a] && 0[s->a] > 1[s->a])
		sa(s);
	if (0[s->a] > 1[s->a] && 1[s->a] > 2[s->a] && 0[s->a] > 2[s->a])
	{
		sa(s);
		rra(s);
	}
	if (0[s->a] > 2[s->a] && 1[s->a] < 2[s->a] && 0[s->a] > 1[s->a])
		ra(s);
	if (1[s->a] > 2[s->a] && 0[s->a] < 1[s->a] && 0[s->a] < 2[s->a])
	{
		sa(s);
		ra(s);
	}
	if (0[s->a] > 2[s->a] && 1[s->a] > 2[s->a] && 0[s->a] < 1[s->a])
		rra(s);
}

void
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

int
	push(struct s_stacks *stack, int position, int operation)
{
	if (operation == 0)
		pb(stack);
	else
		pa(stack);
	position--;
	return (position);
}

void
	sort_3(struct s_stacks *stack, register int position)
{
	if (position == 3 && stack->a_size == 3)
		the_short_3(stack);
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
				position = push(stack, position, 0);
			else if (stack->a[0] > stack->a[1])
				sa(stack);
			else if (position++)
				pa(stack);
		}
	}
}

int
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
				position = push(s, position, 1);
			else
				sb(s);
		}
	}
	return (0);
}

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
		sort_3(stack, position);
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
