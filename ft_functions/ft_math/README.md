# ft_math
`ft_math.h` is a remake library from original `<math.h>` library.

| Function Names                                                                                    | Function Parameters           | Description                                           |
| ------------------------------------------------------------------------------------------------- | ----------------------------- | ----------------------------------------------------- |
| **[ft_atan](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_atan.c)**   | `double` x                    | Returns the arc tangent of `x`                        |
| **[ft_cos](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_cos.c)**     | `double` x                    | Returns the cosine of `x`                             |
| **[ft_atan2](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_atan2.c)** | `double` x, `double` y        | Calculate exponent of `base`                          |
| **[ft_fabs](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_fabs.c)**   | `double` x                    | Get the absolute value of a `x`                       |
| **[ft_fmod](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_fmod.c)**   | `double` x, `double` y        | Gets the modalities of 2 numbers in "float"           |
| **[ft_log](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_log.c)**     | `double` x                    | Calculation of the logarithm of `x`                   |
| **[ft_log10](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_log10.c)** | `double` x                    | Calculation of the logarithm of `x` to the base of 10 |
| **[ft_pow](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_pow.c)**     | `double` base, `double` power | Calculates the angle in radians for the quadrant      |
| **[ft_sin](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_sin.c)**     | `double` x                    | Returns the sine of `x`                               |
| **[ft_sqrt](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_sqrt.c)**   | `double` x                    | Square root calculation of `x`                        |
| **[ft_tan](https://github.com/TeomanDeniz/Ecole-42/blob/main/ft_functions/ft_math/ft_tan.c)**     | `double` x                    | Returns the tangent of `x`. [sin(`x`) / cos(`x`)]     |

Example:
```c
#include  <stdio.h> /*
 * int printf(char *str, ...);
 */

#include  <math.h> /*
 * double	pow(double base, double power);
 * double	atan2(double y, double x);
 * double	fmod(double x, double y);
 * double	log10(double x);
 * double	atan(double x);
 * double	fabs(double x);
 * double	sqrt(double x);
 * double	log(double x);
 * double	sin(double x);
 * double	cos(double x);
 * double	tan(double x);
 */

#include  "ft_math.h" /*
 * double	ft_pow(register double base, register double power);
 * double	ft_atan2(register double y, register double x);
 * double	ft_fmod(register double x, register double y);
 * double	ft_log10(register double x);
 * double	ft_atan(register double x);
 * double	ft_fabs(register double x);
 * double	ft_sqrt(register double x);
 * double	ft_log(register double x);
 * double	ft_sin(register double x);
 * double	ft_cos(register double x);
 * double	ft_tan(register double x);
 */

int main(void)
{
	int	x;
	int	y;

	x = 42;
	y = 1;
	printf("[   sin = %f]\n", sin(x));
	printf("[ft_sin = %f]\n", ft_sin(x));
	printf("\n");
	printf("[   cos = %f]\n", cos(x));
	printf("[ft_cos = %f]\n", ft_cos(x));
	printf("\n");
	printf("[   log10 = %f]\n", log10(x));
	printf("[ft_log10 = %f]\n", ft_log10(x));
	printf("\n");
	printf("[   log = %f]\n", log(x));
	printf("[ft_log = %f]\n", ft_log(x));
	printf("\n");
	printf("[   atan = %f]\n", atan(x));
	printf("[ft_atan = %f]\n", ft_atan(x));
	printf("\n");
	printf("[   atan2 = %f]\n", atan2(x, y));
	printf("[ft_atan2 = %f]\n", ft_atan2(x, y));
	printf("\n");
	printf("[   pow = %f]\n", pow(x, y));
	printf("[ft_pow = %f]\n", ft_pow(x, y));
	printf("\n");
	printf("[   sqrt = %f]\n", sqrt(x));
	printf("[ft_sqrt = %f]\n", ft_sqrt(x));
	printf("\n");
	printf("[   fabs = %f]\n", fabs(-x));
	printf("[ft_fabs = %f]\n", ft_fabs(-x));
	printf("\n");
	printf("[   fmod = %f]\n", fmod(x, y));
	printf("[ft_fmod = %f]\n", ft_fmod(x, y));
	return(0);
}
```
