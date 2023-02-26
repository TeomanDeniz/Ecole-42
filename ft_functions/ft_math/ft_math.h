/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:17:45 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/26 18:17:46 by hdeniz           ###   ########.fr       */
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

#  define M_PI_4 0.78539816339744830961 // pi/4

#  define M_1_PI 0.31830988618379067153 // 1/pi

#  define M_2_PI 0.63661977236758134307 // 2/pi

#  define M_SQRT2 1.41421356237309504880 // sqrt(2)

#  define M_SQRT1_2 0.707106781186547524401 // 1/sqrt(2)

#  define M_2_SQRTPI 1.12837916709551257390 // 2/sqrt(pi)
# endif

//Trigonometric functions:
double		ft_sin(register double x);
double		ft_cos(register double x);
double		ft_tan(register double x);
double		ft_asin(register double x);
double		ft_acos(register double x);
double		ft_atan(register double x);
double		ft_atan2(register double y, register double x);

//Hyperbolic functions:
double		sinh(double x);
double		cosh(double x);
double		tanh(double x);
double		asinh(double x);
double		acosh(double x);
double		atanh(double x);

//Exponential and logarithmic functions:
double		exp(double x);
double		exp2(double x);
double		expm1(double x);
double		exp10(double x);
double		ft_log(register double x);
double		log2(double x);
double		ft_log10(register double x);
double		ft_log1p(register double x);
double		logb(double x);

//Power functions:
double		ft_pow(register double base, register double power);
double		pow10(double x);
double		ft_sqrt(register double x);
double		cbrt(double x);
double		hypot(double x, double y);

//Rounding and remainder functions:
double		ceil(double x);
double		floor(double x);
double		trunc(double x);
double		round(double x);
long		lround(double x);
long long	llround(double x);
double		ft_fmod(register double x, register double y);
double		remainder(double x, double y);
double		remquo(double x, double y, int *quo);
double		copysign(double x, double y);
double		nan(const char *tagp);
double		nextafter(double x, double y);
double		nexttoward(double x, long double y);

//Floating-point classification functions:
int			fpclassify(double x);
int			isfinite(double x);
int			isnormal(double x);
int			ft_isinf(register double x);
int			ft_isnan(register double x);
int			signbit(double x);

//Other functions:
double		ft_fabs(register double x);
double		ldexp(double x, int exp);
double		frexp(double x, int *exp);
double		ft_modf(register double x, double *integer);
double		fma(double x, double y, double z);
double		erf(double x);
double		erfc(double x);
double		lgamma(double x);
double		tgamma(double x);
double		j0(double x);
double		j1(double x);
double		jn(int n, double x);
double		y0(double x);
double		y1(double x);
double		yn(int n, double x);
double		scalbn(double x, int n);
double		scalbln(double x, long int n);
double		sinpi(double x);
double		cospi(double x);
double		fmin(double x, double y);
double		fmax(double x, double y);




#endif
