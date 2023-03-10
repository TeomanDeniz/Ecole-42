/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:37:39 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/08 16:37:40 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_printf.h"

void
	space(int *flags, char c)
{
	if (!(c == 'd' || c == 'i' || c == 'f') || !flags[' '] || flags['+'] \
		|| flags[3])
		return ;
	write(flags[0], " ", 1);
	flags[1] += 1;
}
