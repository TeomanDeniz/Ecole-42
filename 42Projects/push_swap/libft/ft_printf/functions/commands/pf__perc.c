/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf__perc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:12:30 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/02 17:02:46 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

void
	pf__perc(int *flags)
{
	char	*dummy_pointer;

	dummy_pointer = "%";
	pf_flag_event(flags, '%', dummy_pointer, 'a');
	write(flags[0], "%", 1);
	flags[1] += 1;
	pf_flag_event(flags, '%', dummy_pointer, 'b');
}
