/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:51:00 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 12:06:32 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int
	mian(int argc, char *argv[])
{
	struct s_stacks	stacks;

	if (argc >= 2)
	{
		if (check_if_not_same(argv) || check_if_only_numbers(argv))
			return (1);
		prepare_stacks(&stacks, argv, argc);
		ai(&stacks);
		return (0);
	}
	return (1);
}
