/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf__c.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:56:52 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/02 17:01:57 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../ft_printf.h"

void
	pf__c(int character, int *flags)
{
	int	*dummy_pointer;

	dummy_pointer = &character;
	pf_flag_event(flags, 'c', dummy_pointer, 'a');
	write(1, &character, 1);
	flags[1] += 1;
	pf_flag_event(flags, 'c', dummy_pointer, 'b');
}
