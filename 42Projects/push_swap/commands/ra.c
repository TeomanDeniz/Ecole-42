#include	"../push_swap.h"

void
	ra(struct s_stacks *stacks)
{
	int				a_temp;
	register int	counter;

	counter = 0;
	a_temp = stacks->a[0];
	while (counter++, counter < stacks->a_size)
		stacks->a[counter - 1] = stacks->a[counter];
	stacks->a[counter - 1] = a_temp;
	write(1, "ra\n", 3);
}
