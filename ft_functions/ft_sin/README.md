# ft_sin
`ft_sin()` is a remake original function of `sin()` from `<math.h>` library.

Example:
```c
#include  <stdio.h> /*
 * printf(char *__, ...);
 */

#include  <math.h> /*
 * sin(double x);
 */

#include  "ft_sin.c" /*
 * ft_sin(long double input);
 */

int main(void)
{
  int x;

  x = 42;
  printf("[   sin = %f]\n", sin(x));
  printf("[ft_sin = %f]\n", ft_sin(x));
  return(0);
}
```
