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

# ifndef _MATH_H
#  define M_E 2.71828182845904523536 // Euler's number
#  define M_LOG2E 1.44269504088896340736 // log2(e)
#  define M_LOG10E 0.434294481903251827651 // log10(e)
#  define M_LN2 0.693147180559945309417 // ln(2)
#  define M_LN10 2.30258509299404568402 // ln(10)
#  define M_PI 3.14159265358979323846 // pi
#  define M_PI_2 1.57079632679489661923 // pi/2
#  define M_PI_4 0.785398163397448309616 // pi/4
#  define M_1_PI 0.318309886183790671538 // 1/pi
#  define M_2_PI 0.636619772367581343076 // 2/pi
#  define M_2_SQRTPI 1.12837916709551257390 // 2/sqrt(pi)
#  define M_SQRT2 1.41421356237309504880 // sqrt(2)
#  define M_SQRT1_2 0.707106781186547524401 // 1/sqrt(2)
# endif

double	ft_pow(register double base, register double power);
double	ft_atan2(register double y, register double x);
double	ft_fmod(register double x, register double y);
double	ft_modf(register double x, double* integer);
double	ft_log10(register double x);
double	ft_log1p(register double x);
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
