/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_flag_event.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:39:39 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/08 16:43:00 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../../ft_printf.h"

static inline int
	size_calculator(char command, void *o, int *f)
{
	if (command == 'c' || command == '%')
		return (1);
	if (command == 'f')
		return (ft_ibl((long)*(double *)o, 10, command));
	if (command == 's')
	{
		if (ft_strlen((char *)o) > f['.'] && f['.'] != -1)
			return (f['.']);
		else
			return (ft_strlen((char *)o));
	}
	if (command == 'u')
		return (ft_ibl((unsigned int)*(unsigned int *)o, 10, command));
	if (command == 'd')
		return (ft_ibil((int)*(int *)o, 10, command));
	if (command == 'x' || command == 'X')
		return (ft_ibil((long long)*(int *)o, 16, command));
	if (command == 'o')
		return (ft_ibil((int)*(int *)o, 8, command));
	if (command == 'b')
		return (ft_ibil((int)*(int *)o, 2, command));
	if (command == 'p')
		return (ft_ibl((long long)*(long *)o, 16, command));
	return (-1);
}

void
	pf_flag_event(int *flags, char command, void *object, char p)
{
	flags[4] = size_calculator(command, object, flags);
	if (p == 'a')
	{
		if (!flags['-'])
			padding(flags, command, p, (long long)*(int *)object);
		minus(flags, command);
		plus(flags, command);
		square(flags, command, (long long)*(int *)object);
		space(flags, command);
		dot(flags, command);
	}
	if (p == 'b' && flags['-'] == 1)
		padding(flags, command, p, (long long)*(int *)object);
	flags[4] = 0;
}
