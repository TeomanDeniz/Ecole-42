# ft_rand
"ft_rand()" is a function that's generates random numbers without using any library nor function for work

Example:
```c
#include  <stdio.h> // printf()
#include  "ft_rand.c" // ft_rand()

int main(void)
{
  int (i) = 0;
  while (i++ < 10)
    printf("%d\n", ft_rand(0, 10));
  return(0);
}
```
