/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   131072__0_8__.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:40:08 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_131072__0_(void)
{
	static char	_0_[131072];

	return (_0_);
}

char
	*_131072__1_(register int stack)
{
	static char	_1_[1][131072];

	return (_1_[stack]);
}

char
	*_131072__2_(register int stack)
{
	static char	_2_[2][131072];

	return (_2_[stack]);
}

char
	*_131072__4_(register int stack)
{
	static char	_4_[4][131072];

	return (_4_[stack]);
}

char
	*_131072__8_(register int stack)
{
	static char	_8_[8][131072];

	return (_8_[stack]);
}
