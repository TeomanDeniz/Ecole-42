/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:06:13 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/19 16:15:25 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

size_t	ft_strlen(char *string);
char	*ft_new_left_str(char *left_str);
char	*ft_strchr(char *string, int character);
char	*ft_strjoin(char *left_str, char *buff);
char	*ft_get_line(char *left_str);
char	*get_next_line(int fd);

#endif
