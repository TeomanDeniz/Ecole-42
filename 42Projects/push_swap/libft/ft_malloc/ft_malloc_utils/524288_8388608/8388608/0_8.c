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
	*_8388608__0_(void)
{
	static int	_0_[8388608];

	return (_0_);
}

int
	*_8388608__1_(register int stack)
{
	static int	_1_[1][8388608];

	return (_1_[stack]);
}

int
	*_8388608__2_(register int stack)
{
	static int	_2_[2][8388608];

	return (_2_[stack]);
}

int
	*_8388608__4_(register int stack)
{
	static int	_4_[4][8388608];

	return (_4_[stack]);
}
