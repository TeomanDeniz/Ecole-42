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
	*_512__0_(void)
{
	static int	_0_[512];

	return (_0_);
}

int
	*_512__1_(register int stack)
{
	static int	_1_[1][512];

	return (_1_[stack]);
}

int
	*_512__2_(register int stack)
{
	static int	_2_[2][512];

	return (_2_[stack]);
}

int
	*_512__4_(register int stack)
{
	static int	_4_[4][512];

	return (_4_[stack]);
}

int
	*_512__8_(register int stack)
{
	static int	_8_[8][512];

	return (_8_[stack]);
}
