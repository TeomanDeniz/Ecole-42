#include	"../push_swap.h"

void
	rb(struct s_stacks *stacks)
{
	int				b_temp;
	register int	counter;

	counter = 0;
	b_temp = stacks->b[0];
	while (counter++, counter < stacks->b_size)
		stacks->b[counter - 1] = stacks->b[counter];
	stacks->b[counter - 1] = b_temp;
	write(1, "rb\n", 3);
}
