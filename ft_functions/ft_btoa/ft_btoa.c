/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:02:05 by hdeniz            #+#    #+#             */
/*   Updated: 2023/04/29 11:02:08 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>/*
# malloc();
# free(); <= For main()
*/

#define BASE_64 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijkl\
mnopqrstuvwxyz0123456789+/"

static inline int	_t_(register int _i_, int _t_, int _f_);
static inline int	ft_strlen(char *string);

char
	*ft_btoa(void *data)
{
	unsigned char	*input;
	char			*output;
	int				epsilon[2];
	register int	size;

	size = ft_strlen(data);
	epsilon[0] = 0;
	epsilon[1] = 0;
	output = (char *)malloc(sizeof(char) * ((size + 2) / 3) * 4 + 1);
	input = (unsigned char *)data;
	while (*epsilon < size)
	{
		output[epsilon[1]] = BASE_64[input[*epsilon] >> 2];
		output[epsilon[1] + 1] = BASE_64[((input[*epsilon] & 0X03) << 4) | \
		(_t_(*epsilon + 1 < size, input[*epsilon + 1], 0) >> 4)];
		output[epsilon[1] + 2] = _t_(*epsilon + 1 < size, \
			BASE_64[((input[*epsilon + 1] & 0X0F) << 2) | \
			(_t_(*epsilon + 2 < size, input[*epsilon + 2], 0) >> 6)], '=');
		output[epsilon[1] + 3] = _t_(*epsilon + 2 < size, \
			BASE_64[input[*epsilon + 2] & 0X3F], '=');
		epsilon[0] += 3;
		epsilon[1] += 4;
	}
	output[epsilon[1]] = '\0';
	return (output);
}

static inline int
	_t_(register int _i_, int _t_, int _f_)
{
	if (_i_)
		return (_t_);
	return (_f_);
}

static inline int
	ft_strlen(char *string)
{
	int	epsilon;

	epsilon = 0;
	while (string[epsilon])
		epsilon++;
	return (epsilon);
}

/*
#include	<stdio.h>

int
	main(void)
{
	const char	*input;
	char		*output;

	input = "<svg version='1.1' xmlns='http://www.w3.org/2000/svg' xmlns:xlink\
	='http://www.w3.org/1999/xlink' width='50' height='50'><circle cx='25' cy=\
	'25' r='20' fill='#000000' /></svg>";
	output = ft_btoa((void *)input);
	printf("data:image/svg+xml;base64,%s\n", output);
	free(output);
	return (0);
}

// Paste the output to your browser's search bar
*/