/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:21:58 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 14:35:02 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int
	ft_strlen(const char *restrict string)
{
	register int	counter;

	if (!string)
		return (0);
	counter = 0;
	while (string[counter])
		counter++;
	return (counter);
}
