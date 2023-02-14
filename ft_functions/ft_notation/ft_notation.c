/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_notation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/14 11:58:42 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>/*
 * (KEYWORD)malloc(size_t);
 * free(*var);
 */

long long
	ft_pow(register long long base, register signed int power)
{
	register volatile signed int	i;
	register volatile long long		x;

	i = 1;
	x = base;
	while (i++ < power)
		base = base * x;
	return (base);
}

static inline int
	ft_n_set(int *is_neg, int *num_dig, int *res_index, long long *input)
{
	long long	temp;

	temp = *input;
	*is_neg = 0;
	*num_dig = -1;
	*res_index = 0;
	if (*input < 0)
	{
		*is_neg = 1;
		*input = *input * -1;
		temp = temp * -1;
	}
	while (++*num_dig, temp > 0)
		temp /= 10;
	return (temp);
}

static inline void
	ft_notation_if(int *digits_before_decimal, int *exponent, int *num_digits)
{
	*digits_before_decimal = *num_digits - 1;
	*exponent = *digits_before_decimal;
	if (*digits_before_decimal > 3)
		*digits_before_decimal = 1;
	else if (*digits_before_decimal < -2)
	{
		*digits_before_decimal = *num_digits - 1;
		*exponent += *digits_before_decimal - 1;
	}
	else
		*digits_before_decimal -= 1;
}

static inline char
	*ft_notation_end(char *res, int *var)
{
	register int	size;
	register int	temp;

	size = 1;
	temp = var[1];
	if (var[1] < 10)
		res[var[2]++] = '0';
	while ((temp / 10) > 0)
		size *= 10;
	while (size)
	{
		res[var[2]++] = (char)((temp / size) + 48);
		temp %= size;
		size /= 10;
	}
	res[var[2]] = '\0';
	return (res);
}

/*
var[5]
 var[0] = digits before decimal
 var[1] = exponent
 var[2] = result index
 var[3] = i for while loops
 var[4] = is negative
 var[5] = number digits
*/

char
	*ft_notation_p(long long input, const char letter)
{
	long long	temp;
	char		*res;
	int			var[6];

	(void)temp;
	var[3] = 0;
	if (input == 0)
		return ("0.0E0");
	temp = ft_n_set(&var[4], &var[5], &var[2], &input);
	ft_notation_if(&var[0], &var[1], &var[5]);
	res = (char *) malloc((var[5] + 6) * sizeof(char));
	if (var[4] == 1)
		res[var[2]++] = '-';
	while (var[3] < var[0])
		res[var[2]++] = (input / ft_pow(10, var[5] - var[3]++ - 1)) % 10 + '0';
	res[var[2]++] = '.';
	while (var[3] < var[5])
		res[var[2]++] = (input / ft_pow(10, var[5] - var[3]++ - 1)) % 10 + '0';
	res[var[2]++] = letter;
	res[var[2]++] = '+';
	return (ft_notation_end(res, var));
}
