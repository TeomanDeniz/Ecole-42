/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_8.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/07 18:11:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

int
	*_1__0_(void)
{
	static int	_0_[1];

	return (_0_);
}

int
	*_1__1_(register int stack)
{
	static int	_1_[1][1];

	return (_1_[stack]);
}

int
	*_1__2_(register int stack)
{
	static int	_2_[2][1];

	return (_2_[stack]);
}

int
	*_1__4_(register int stack)
{
	static int	_4_[4][1];

	return (_4_[stack]);
}

int
	*_1__8_(register int stack)
{
	static int	_8_[8][1];

	return (_8_[stack]);
}
