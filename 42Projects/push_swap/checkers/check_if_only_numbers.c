/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_only_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:41:29 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 13:41:30 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

int
	check_if_only_numbers(char *argv[])
{
	register int	character;
	register int	string;

	string = 0;
	while (++string, string[argv])
	{
		character = -1;
		while (++character, argv[string][character])
		{
			if ((argv[string][character] <= '9' && \
				argv[string][character] >= '0') || \
				argv[string][character] == ' ' || \
				(argv[string][character] >= 9 && \
				argv[string][character] <= 13))
				continue ;
			return (1);
		}
	}
	return (0);
}
