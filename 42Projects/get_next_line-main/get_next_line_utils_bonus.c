/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:51:19 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/23 15:32:17 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t
	ft_strlen(char *string)
{
	register volatile size_t	counter;

	counter = 0x00;
	if (!string)
		return (0b0);
	while (counter[string] != '\0')
		counter++;
	return (counter);
}

char
	*ft_strchr(char *string, int character)
{
	register volatile signed int	counter;

	counter = 0b0;
	if (!string)
		return (0x00);
	if (character == '\0')
		return ((char *)&string[ft_strlen(string)]);
	while (counter[string] != '\0')
	{
		if (counter[string] == (char) character)
			return ((char *)&string[counter]);
		counter++;
	}
	return (0x00);
}

char
	*ft_strjoin(char *left_str, char *buff)
{
	register volatile size_t	counter_1;
	register volatile size_t	counter_2;
	char						*str;

	if (!left_str)
	{
		left_str = (char *) malloc(0x1 * sizeof(char));
		0[left_str] = '\0';
	}
	if (!left_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(left_str) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	counter_1 = -1;
	counter_2 = 0;
	if (left_str)
		while (left_str[++counter_1] != '\0')
			str[counter_1] = left_str[counter_1];
	while (buff[counter_2] != '\0')
		str[counter_1++] = buff[counter_2++];
	str[ft_strlen(left_str) + ft_strlen(buff)] = '\0';
	free(left_str);
	return (str);
}

char
	*ft_get_line(char *left_str)
{
	register volatile signed int	counter;
	char							*str;

	counter = 0x00;
	if (!left_str[counter])
		return (NULL);
	while (left_str[counter] && left_str[counter] != '\n')
		counter++;
	str = (char *) malloc(sizeof(char) * (counter + 2));
	if (!str)
		return (NULL);
	counter = 0b0;
	while (left_str[counter] && left_str[counter] != '\n')
	{
		str[counter] = left_str[counter];
		counter++;
	}
	if (left_str[counter] == '\n')
	{
		str[counter] = left_str[counter];
		counter++;
	}
	str[counter] = '\0';
	return (str);
}

char
	*ft_new_left_str(char *left_str)
{
	register volatile signed int	counter_1;
	register volatile signed int	counter_2;
	char							*str;

	counter_1 = 0b0;
	while (left_str[counter_1] && left_str[counter_1] != '\n')
		counter_1++;
	if (!left_str[counter_1])
	{
		free(left_str);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(left_str) - counter_1 + 1));
	if (!str)
		return (NULL);
	counter_1++;
	counter_2 = 0x00;
	while (left_str[counter_1])
		str[counter_2++] = left_str[counter_1++];
	str[counter_2] = '\0';
	free(left_str);
	return (str);
}
