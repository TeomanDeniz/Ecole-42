# ft_math
`ft_math.h` is a remake library from original `<math.h>` library.

# Trigonometric functions:
| Function Name                                                                                     | Function Parameter(s)          | Description                                                         |
| ------------------------------------------------------------------------------------------------- | ------------------------------ | ------------------------------------------------------------------- |
| **[ft_atan](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_atan.c)**   | `double` x                     | Returns the arc tangent of `x`                                      |
| **[ft_atan2](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_atan2.c)** | `double` x, `double` y         | Calculate exponent of `base`                                        |
| **[ft_cos](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_cos.c)**     | `double` x                     | Returns the cosine of `x`                                           |
| **[ft_sin](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_sin.c)**     | `double` x                     | Returns the sine of `x`                                             |
| **[ft_tan](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_tan.c)**     | `double` x                     | Returns the tangent of `x`. [sin(`x`) / cos(`x`)]                   |

# Hyperbolic functions:
| Function Name                                                                                     | Function Parameter(s)          | Description                                                         |
| ------------------------------------------------------------------------------------------------- | ------------------------------ | ------------------------------------------------------------------- |

# Exponential and logarithmic functions:
| Function Name                                                                                     | Function Parameter(s)          | Description                                                         |
| ------------------------------------------------------------------------------------------------- | ------------------------------ | ------------------------------------------------------------------- |
| **[ft_log](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_log.c)**     | `double` x                     | Calculation of the logarithm of `x`                                 |
| **[ft_log10](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_log10.c)** | `double` x                     | Calculation of the logarithm of `x` to the base of 10               |
| **[ft_log1p](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_log1p.c)** | `double` x                     | Calculates the logarithm of one plus of `x`                         |
| **[ft_modf](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_modf.c)**   | `double` x, `double` \*integer | Splits fraction an integer in float number (Returns fraction)       |

# Power functions:
| Function Name                                                                                     | Function Parameter(s)          | Description                                                         |
| ------------------------------------------------------------------------------------------------- | ------------------------------ | ------------------------------------------------------------------- |
| **[ft_pow](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_pow.c)**     | `double` base, `double` power  | Calculates the angle in radians for the quadrant                    |
| **[ft_sqrt](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_sqrt.c)**   | `double` x                     | Square root calculation of `x`                                      |

# Other functions:
| Function Name                                                                                     | Function Parameter(s)          | Description                                                         |
| ------------------------------------------------------------------------------------------------- | ------------------------------ | ------------------------------------------------------------------- |
| **[ft_fabs](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_fabs.c)**   | `double` x                     | Get the absolute value of a `x`                                     |
| **[ft_fmod](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_fmod.c)**   | `double` x, `double` y         | Gets the modalities of 2 numbers in "float"                         |

# Floating-point classification functions:
| Function Name                                                                                     | Function Parameter(s)          | Description                                                         |
| ------------------------------------------------------------------------------------------------- | ------------------------------ | ------------------------------------------------------------------- |
| **[ft_isinf](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_isinf.c)** | `double` x                     | Check if float number is inf number (Will also return -1 if "-inf") |
| **[ft_isnan](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_isnan.c)** | `double` x                     | Check if float number is non number                                 |

# Constants:

| Define Name                                                                                         | Value                                                                                              |
| --------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------- |
| **[M_PI](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L16)**    | `3.141592653589793`                                                                                |
| **[M_PI_2](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L17)**  | `1.57079632679` (Aka: `M_PI / 2`)                                                                  |
| **[M_PI_4](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L18)**  | `0.78539816339` (Aka: `M_PI / 4`)                                                                  |


Example(s):
```c
#include  <stdio.h> /*
 * int printf(char *str, ...);
 */

#include  <math.h> /*
 * double	modf(double x, double *integer);
 * double	pow(double base, double power);
 * double	atan2(double y, double x);
 * double	fmod(double x, double y);
 * double	log10(double x);
 * double	log1p(double x);
 * double	atan(double x);
 * double	fabs(double x);
 * double	sqrt(double x);
 * double	log(double x);
 * double	sin(double x);
 * double	cos(double x);
 * double	tan(double x);

 * int		isinf(double x);
 * int		isnan(double x);
 */

#include  "ft_math.h" /*
 * double	ft_pow(register double base, register double power);
 * double	ft_atan2(register double y, register double x);
 * double	ft_fmod(register double x, register double y);
 * double	ft_modf(register double x, double *integer);
 * double	ft_log10(register double x);
 * double	ft_log1p(register double x);
 * double	ft_atan(register double x);
 * double	ft_fabs(register double x);
 * double	ft_sqrt(register double x);
 * double	ft_log(register double x);
 * double	ft_sin(register double x);
 * double	ft_cos(register double x);
 * double	ft_tan(register double x);

 * int		ft_isinf(register double x);
 * int		ft_isnan(register double x);
 */

int main(void)
{
	double x = 42;
	double y = 5;

	printf("[   sin(%d) = %f]\n", x, sin(x));
	printf("[ft_sin(%d) = %f]\n", x, ft_sin(x));
	printf("\n");
	printf("[   cos(%d) = %f]\n", x, cos(x));
	printf("[ft_cos(%d) = %f]\n", x, ft_cos(x));
	printf("\n");
	printf("[   tan(%d) = %f]\n", x, tan(x));
	printf("[ft_tan(%d) = %f]\n", x, ft_tan(x));
	printf("\n");
	printf("[   log1p(%d) = %f]\n", x, log1p(x));
	printf("[ft_log1p(%d) = %f]\n", x, ft_log1p(x));
	printf("\n");
	printf("[   log10(%d) = %f]\n", x, log10(x));
	printf("[ft_log10(%d) = %f]\n", x, ft_log10(x));
	printf("\n");
	printf("[   log(%d) = %f]\n", x, log(x));
	printf("[ft_log(%d) = %f]\n", x, ft_log(x));
	printf("\n");
	printf("[   atan(%d) = %f]\n", x, atan(x));
	printf("[ft_atan(%d) = %f]\n", x, ft_atan(x));
	printf("\n");
	printf("[   atan2(%d, %d) = %f]\n", x, y, atan2(x, y));
	printf("[ft_atan2(%d, %d) = %f]\n", x, y, ft_atan2(x, y));
	printf("\n");
	printf("[   pow(%d, %d) = %f]\n", x, y, pow(x, y));
	printf("[ft_pow(%d, %d) = %f]\n", x, y, ft_pow(x, y));
	printf("\n");
	printf("[   sqrt(%d) = %f]\n", x, sqrt(x));
	printf("[ft_sqrt(%d) = %f]\n", x, ft_sqrt(x));
	printf("\n");
	printf("[   fabs(%d) = %f]\n", -x, fabs(-x));
	printf("[ft_fabs(%d) = %f]\n", -x, ft_fabs(-x));
	printf("\n");
	printf("[   fmod(%d, %d) = %f]\n", x, y, fmod(x, y));
	printf("[ft_fmod(%d, %d) = %f]\n", x, y, ft_fmod(x, y));
	printf("\n");

	double nan = (0.0 / 0.0);
	double inf = (1.0 / 0.0);
	double minus_inf = (-1.0 / 0.0);

	printf("[   isnan = %f]\n", isnan(nan));
	printf("[ft_isnan = %f]\n", ft_isnan(nan));
	printf("\n");
	printf("[   ininf = %f]\n", isinf(inf));
	printf("[ft_isinf = %f]\n", ft_isinf(inf));
	printf("\n");
	printf("[   ininf = %f]\n", isinf(minus_inf));
	printf("[ft_ininf = %f]\n", ft_isinf(minus_inf));

	double pi = 3.1415;
	double temp = 0;

	printf("\n");
	printf("[        modf = %f]\n", modf(pi, &temp));
	printf("[   modf temp = %f]\n", temp);
	printf("[     ft_modf = %f]\n", ft_modf(pi, &temp));
	printf("[ft_modf temp = %f]\n", temp);
	return(0);
}
```
