/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atan2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:04:12 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/23 16:04:13 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_math.h"

double
	ft_atan2(register double y, register double x)
{
	if (x > 0)
		return (ft_atan(y / x));
	else if (x < 0 && y >= 0)
		return (ft_atan(y / x) + M_PI);
	else if (x < 0 && y < 0)
		return (ft_atan(y / x) - M_PI);
	else if (x == 0 && y > 0)
		return (M_PI / 2);
	else if (x == 0 && y < 0)
		return ((M_PI * -1) / 2);
	return (0);
}
