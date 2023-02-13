/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:21:58 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 14:35:02 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

int
	ft_strlen(const char *restrict string)
{
	register int	counter;

	while (string[counter])
		counter = counter + 1;
	return (counter);
}
