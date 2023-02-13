/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_256.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/08 03:39:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

int
	*_4096__16_(register int stack)
{
	static int	_16_[16][4096];

	return (_16_[stack]);
}

int
	*_4096__32_(register int stack)
{
	static int	_32_[32][4096];

	return (_32_[stack]);
}

int
	*_4096__64_(register int stack)
{
	static int	_64_[64][4096];

	return (_64_[stack]);
}

int
	*_4096__128_(register int stack)
{
	static int	_128_[128][4096];

	return (_128_[stack]);
}

int
	*_4096__256_(register int stack)
{
	static int	_256_[256][4096];

	return (_256_[stack]);
}
