# ft_math
`ft_math.h` is a remake library from original `<math.h>` library.

# Trigonometric functions:
| Function Name                                                                                     | Function Parameter(s)          | Description                                                         |
| ------------------------------------------------------------------------------------------------- | ------------------------------ | ------------------------------------------------------------------- |
| **[ft_sin](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_sin.c)**     | `double` x                     | Returns the sine of `x`                                             |
| **[ft_cos](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_cos.c)**     | `double` x                     | Returns the cosine of `x`                                           |
| **[ft_tan](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_tan.c)**     | `double` x                     | Returns the tangent of `x`. [sin(`x`) / cos(`x`)]                   |
| **[ft_asin](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_asin.c)**   | `double` x                     | Returns the arc sine in radians. (1 ≥ x ≥ -1) [Aka: sin⁻¹(x)]       |
| **[ft_acos](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_acos.c)**   | `double` x                     | Returns the arc cosine in radians. (1 ≥ x ≥ -1) [Aka: cos⁻¹(x)]     |
| **[ft_atan](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_atan.c)**   | `double` x                     | Returns the arc tangent of `x`                                      |
| **[ft_atan2](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_atan2.c)** | `double` x, `double` y         | Calculates the angle in radians for the quadrant                    |

# Hyperbolic functions:
| Function Name                                                                                     | Function Parameter(s)          | Description                                                         |
| ------------------------------------------------------------------------------------------------- | ------------------------------ | ------------------------------------------------------------------- |
| **[ft_sinh](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_sinh.c)**   | `double` x                     | Computes the hyperbolic sine of `x`                                 |
| **[ft_cosh](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_sinh.c)**   | `double` x                     | Computes the hyperbolic cosine of `x`                               |

# Exponential and Logarithmic functions:
| Function Name                                                                                     | Function Parameter(s)          | Description                                                         |
| ------------------------------------------------------------------------------------------------- | ------------------------------ | ------------------------------------------------------------------- |
| **[ft_exp](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_exp.c)**     | `double` x                     | Computes e(2.71828) raised to the power of the given `x`            |
| **[ft_log](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_log.c)**     | `double` x                     | Calculation of the logarithm of `x`                                 |
| **[ft_log10](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_log10.c)** | `double` x                     | Calculation of the logarithm of `x` to the base of 10               |
| **[ft_log1p](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_log1p.c)** | `double` x                     | Calculates the logarithm of one plus of `x`                         |

# Power functions:
| Function Name                                                                                     | Function Parameter(s)          | Description                                                         |
| ------------------------------------------------------------------------------------------------- | ------------------------------ | ------------------------------------------------------------------- |
| **[ft_pow](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_pow.c)**     | `double` base, `double` power  | Calculates the angle in radians for the quadrant                    |
| **[ft_sqrt](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_sqrt.c)**   | `double` x                     | Square root calculation of `x`                                      |

# Rounding and Remainder functions:
| Function Name                                                                                     | Function Parameter(s)          | Description                                                         |
| ------------------------------------------------------------------------------------------------- | ------------------------------ | ------------------------------------------------------------------- |
| **[ft_floor](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_floor.c)** | `double` x                     | Returns the largest integer that is smaller than or equal to `x`    |

# Floating-point classification functions:
| Function Name                                                                                     | Function Parameter(s)          | Description                                                         |
| ------------------------------------------------------------------------------------------------- | ------------------------------ | ------------------------------------------------------------------- |
| **[ft_isinf](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_isinf.c)** | `double` x                     | Check if float number is inf number (Will also return -1 if "-inf") |
| **[ft_isnan](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_isnan.c)** | `double` x                     | Check if float number is non number                                 |

# Other functions:
| Function Name                                                                                     | Function Parameter(s)          | Description                                                         |
| ------------------------------------------------------------------------------------------------- | ------------------------------ | ------------------------------------------------------------------- |
| **[ft_fabs](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_fabs.c)**   | `double` x                     | Get the absolute value of a `x`                                     |
| **[ft_fmod](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_fmod.c)**   | `double` x, `double` y         | Gets the modalities of 2 numbers in "float"                         |
| **[ft_modf](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_modf.c)**   | `double` x, `double` \*integer | Splits fraction an integer in float number (Returns fraction)       |


# Constants:
| Define Name                                                                                             | Value                                                                                          |
| ------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------- |
| **[M_PI](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L27)**        | `3.14159265358979323846`                                                                       |
| **[M_PI_2](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L29)**      | `1.57079632679489661923` (Aka: `M_PI / 2`)                                                     |
| **[M_PI_4](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L31)**      | `0.78539816339744830961` (Aka: `M_PI / 4`)                                                     |
| **[M_1_PI](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L33)**      | `0.31830988618379067153` (Aka: `1 / M_PI`)                                                     |
| **[M_2_PI](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L35)**      | `0.63661977236758134307` (Aka: `2 / M_PI`)                                                     |
| **[M_SQRT2](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L37)**     | `1.41421356237309504880` (Aka: `sqrt(2)`)                                                      |
| **[M_SQRT1_2](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L39)**   | `0.707106781186547524401` (Aka: `1 / sqrt(2)`)                                                 |
| **[M_2_SQRTPI](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L41)**  | `1.12837916709551257390` (Aka: `2 / sqrt(pi)`)                                                 |
| **[M_E](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L17)**         | `2.71828182845904523536` (Aka: `Euler's number`)                                               |
| **[M_LOG2E](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L19)**     | `1.44269504088896340736` (Aka: `log2(e)`)                                                      |
| **[M_LOG10E](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L21)**    | `0.434294481903251827651` (Aka: `log10(e)`)                                                    |
| **[M_LN2](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L23)**       | `0.693147180559945309417` (Aka: `ln(2)`)                                                       |
| **[M_LN10](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_math.h#L25)**      | `2.30258509299404568402` (Aka: `ln(10)`)                                                       |

double my_asin(register double x)

Example(s):
```c
#include  <stdio.h> /*
 * int printf(char *str, ...);
 */

#include  <math.h>

#include  "ft_math.h"

int main(void)
{
	double x = 42;
	double y = 5;

	printf("Trigonometric functions:\n");
	printf("[   sin(%d) = %f]\n", x, sin(x));
	printf("[ft_sin(%d) = %f]\n", x, ft_sin(x));
	printf("\n");
	printf("[   cos(%d) = %f]\n", x, cos(x));
	printf("[ft_cos(%d) = %f]\n", x, ft_cos(x));
	printf("\n");
	printf("[   tan(%d) = %f]\n", x, tan(x));
	printf("[ft_tan(%d) = %f]\n", x, ft_tan(x));
	printf("\n");
	printf("[   asin(%d) = %f]\n", x, asin(x));
	printf("[ft_asin(%d) = %f]\n", x, ft_asin(x));
	printf("\n");
	printf("[   acos(%d) = %f]\n", x, acos(x));
	printf("[ft_acos(%d) = %f]\n", x, ft_acos(x));
	printf("\n");
	printf("[   atan(%d) = %f]\n", x, atan(x));
	printf("[ft_atan(%d) = %f]\n", x, ft_atan(x));
	printf("\n");
	printf("[   atan2(%d, %d) = %f]\n", x, y, atan2(x, y));
	printf("[ft_atan2(%d, %d) = %f]\n", x, y, ft_atan2(x, y));
	printf("\n\n");

	printf("Hyperbolic functions:\n");
	printf("\n\n");

	printf("Exponential and logarithmic functions:\n");
	printf("[   log(%d) = %f]\n", x, log(x));
	printf("[ft_log(%d) = %f]\n", x, ft_log(x));
	printf("\n");
	printf("[   log1p(%d) = %f]\n", x, log1p(x));
	printf("[ft_log1p(%d) = %f]\n", x, ft_log1p(x));
	printf("\n");
	printf("[   log10(%d) = %f]\n", x, log10(x));
	printf("[ft_log10(%d) = %f]\n", x, ft_log10(x));
	printf("\n\n");

	printf("Power functions:\n");
	printf("[   pow(%d, %d) = %f]\n", x, y, pow(x, y));
	printf("[ft_pow(%d, %d) = %f]\n", x, y, ft_pow(x, y));
	printf("\n");
	printf("[   sqrt(%d) = %f]\n", x, sqrt(x));
	printf("[ft_sqrt(%d) = %f]\n", x, ft_sqrt(x));
	printf("\n\n");

	printf("Floating-point classification functions:\n");
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
	printf("\n\n");

	printf("Other functions:\n");
	double pi = 3.1415;
	double temp = 0;
	printf("[   fabs(%d) = %f]\n", -x, fabs(-x));
	printf("[ft_fabs(%d) = %f]\n", -x, ft_fabs(-x));
	printf("\n");
	printf("[   fmod(%d, %d) = %f]\n", x, y, fmod(x, y));
	printf("[ft_fmod(%d, %d) = %f]\n", x, y, ft_fmod(x, y));
	printf("\n");
	printf("[        modf = %f] {modf(pi, &temp)}\n", modf(pi, &temp));
	printf("[   modf temp = %f] {temp}\n", temp);
	printf("[     ft_modf = %f] {ft_modf(pi, &temp)}\n", ft_modf(pi, &temp));
	printf("[ft_modf temp = %f] {temp}\n", temp);
	return(0);
}
```
