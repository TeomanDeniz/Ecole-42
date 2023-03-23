/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:21:30 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/02 15:22:28 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

void
	ft_putchar_fd(char character, int fd)
{
	write(1, &character, fd);
}

void
	ft_putchar(char character)
{
	write(1, &character, 1);
}
