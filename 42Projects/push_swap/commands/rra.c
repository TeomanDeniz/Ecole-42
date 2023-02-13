#include	"../push_swap.h"

void
	rra(struct s_stacks *stacks)
{
	int				a_temp;
	register int	counter;

	counter = stacks->a_size;
	a_temp = stacks->a[counter - 1];
	while (counter--, counter > 0)
		stacks->a[counter] = stacks->a[counter - 1];
	stacks->a[0] = a_temp;
	write(1, "rra\n", 4);
}
