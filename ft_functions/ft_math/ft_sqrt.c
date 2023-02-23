/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:03:31 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/23 17:04:15 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double
	ft_sqrt(register double x)
{
	register double	guess;
	register double	last_guess;

	if (x <= 0.0)
		return 0.0;
	guess = x / 2.0;
	last_guess = guess + 1.0;
	while (guess != last_guess)
	{
		last_guess = guess;
		guess = (guess + x / guess) / 2.0;
	}
	return (guess);
}
