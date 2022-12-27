/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:27:45 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/06 16:28:28 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include	<fcntl.h>

int main(void)
{
	int (i) = open("test.txt", 1);
	printf("%d", i);
	ft_putchar_fd('a',i);
	int (c) = open("test.txt", 1);
	printf("%d", c);
	return (0);
}
*/
