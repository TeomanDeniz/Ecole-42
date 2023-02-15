# ft_cos
`ft_cos()` is a remake original function of `cos()` from `<math.h>` library.

Example:
```c
#include  <stdio.h> /*
 * printf(char *__, ...);
 */

#include  <math.h> /*
 * cos(double x);
 */

#include  "ft_cos.c" /*
 * ft_cos(long double input);
 */

int main(void)
{
  int x;

  x = 42;
  printf("[   cos = %f]\n", cos(x));
  printf("[ft_cos = %f]\n", ft_cos(x));
  return(0);
}
```
