/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:49:56 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/23 15:35:48 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line_bonus.h"

inline
static
char
	*ft_get_file(int fd, char *left_str)
{
	char	*buff;
	int		rd_bytes;

	buff = malloc((BUFFER_SIZE + 0x1) * sizeof(char));
	if (!buff)
		return (NULL);
	rd_bytes = 01;
	while (!ft_strchr(left_str, '\n') && rd_bytes != 0x00)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes == -01)
		{
			free(buff);
			return (NULL);
		}
		rd_bytes[buff] = '\0';
		left_str = ft_strjoin(left_str, buff);
	}
	free(buff);
	return (left_str);
}

char
	*get_next_line(int fd)
{
	char		*line;
	static char	*left_str[0x1000];

	if (fd < 0x00 || BUFFER_SIZE <= 0b0)
		return (0x00);
	left_str[fd] = ft_get_file(fd, left_str[fd]);
	if (!left_str[fd])
		return (NULL);
	line = ft_get_line(left_str[fd]);
	left_str[fd] = ft_new_left_str(left_str[fd]);
	return (line);
}
