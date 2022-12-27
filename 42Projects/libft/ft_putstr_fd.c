/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:23:40 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/06 16:24:41 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
#include	<fcntl.h>
int main(void)
{
    int (fd) = open("test.txt", 1);
    printf("%d", fd);
    ft_putstr_fd("marto", fd);
	return (0);
}
*/
