/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:57:40 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/23 14:57:41 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# define M_PI 3.141592653589793
# define M_PI_2 1.57079632679
# define M_PI_4 0.78539816339

double	ft_pow(register double base, register double power);
double	ft_atan2(register double y, register double x);
double	ft_fmod(register double x, register double y);
double	ft_modf(register double x, double* integer);
double	ft_log10(register double x);
double	ft_atan(register double x);
double	ft_fabs(register double x);
double	ft_sqrt(register double x);
double	ft_cos(register double x);
double	ft_log(register double x);
double	ft_sin(register double x);
double	ft_tan(register double x);

int		ft_isinf(register double x);
int		ft_isnan(register double x);

#endif
