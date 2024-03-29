/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   256__512_1024__.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:00:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/23 02:39:50 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_malloc.h"

char
	*_256__512_(register int stack)
{
	static char	_512_[512][256];

	return (_512_[stack]);
}

char
	*_256__1024_(register int stack)
{
	static char	_1024_[1024][256];

	return (_1024_[stack]);
}
