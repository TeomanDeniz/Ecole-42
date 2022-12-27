/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:27:21 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/06 16:27:24 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*
#include	<fcntl.h>

int main(void)
{
	int (x) = open("test.txt", 1);
	printf("%d",x);
	ft_putendl_fd("asdasdassd", x);
	return (0);
}
*/
