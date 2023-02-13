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
	*_2__0_(void)
{
	static int	_0_[2];

	return (_0_);
}

int
	*_2__1_(register int stack)
{
	static int	_1_[1][2];

	return (_1_[stack]);
}

int
	*_2__2_(register int stack)
{
	static int	_2_[2][2];

	return (_2_[stack]);
}

int
	*_2__4_(register int stack)
{
	static int	_4_[4][2];

	return (_4_[stack]);
}

int
	*_2__8_(register int stack)
{
	static int	_8_[8][2];

	return (_8_[stack]);
}
