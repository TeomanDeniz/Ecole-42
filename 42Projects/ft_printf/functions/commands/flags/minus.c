/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:37:30 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/08 16:37:32 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_printf.h"

static inline char
	*r(void)
{
	return ("dif-");
}

void
	minus(int *flags, char c)
{
	if (!(c == r()[0] || c == r()[1] || c == r()[2]) || !flags[3])
		return ;
	write(flags[0], &r()[3], 1);
	flags[1] += 1;
}
