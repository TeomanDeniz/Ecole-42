/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:49:59 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/28 16:58:26 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

int
	ft_strlen(const char *string)
{
	register volatile signed int	counter;

	counter = 0;
	while (string[counter])
		counter++;
	return ((int)counter);
}
