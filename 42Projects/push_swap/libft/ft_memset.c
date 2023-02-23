/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:28:42 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/06 16:28:44 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void
	*ft_memset(void *object, register int character, register int size)
{
	register int	counter;
	char			*byte_pointer;

	byte_pointer = object;
	counter = -1;
	while (++counter, counter < size)
		byte_pointer[counter] = character;
	return (object);
}
