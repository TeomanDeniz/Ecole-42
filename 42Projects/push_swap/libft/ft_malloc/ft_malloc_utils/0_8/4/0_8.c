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
	*_4__0_(void)
{
	static int	_0_[4];

	return (_0_);
}

int
	*_4__1_(register int stack)
{
	static int	_1_[1][4];

	return (_1_[stack]);
}

int
	*_4__2_(register int stack)
{
	static int	_2_[2][4];

	return (_2_[stack]);
}

int
	*_4__4_(register int stack)
{
	static int	_4_[4][4];

	return (_4_[stack]);
}

int
	*_4__8_(register int stack)
{
	static int	_8_[8][4];

	return (_8_[stack]);
}
