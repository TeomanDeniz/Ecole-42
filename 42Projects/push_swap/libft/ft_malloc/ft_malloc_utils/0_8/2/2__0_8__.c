/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2__0_8__.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:17:33 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_2__0_(void)
{
	static char	_0_[2];

	return (_0_);
}

char
	*_2__1_(register int stack)
{
	static char	_1_[1][2];

	return (_1_[stack]);
}

char
	*_2__2_(register int stack)
{
	static char	_2_[2][2];

	return (_2_[stack]);
}

char
	*_2__4_(register int stack)
{
	static char	_4_[4][2];

	return (_4_[stack]);
}

char
	*_2__8_(register int stack)
{
	static char	_8_[8][2];

	return (_8_[stack]);
}
