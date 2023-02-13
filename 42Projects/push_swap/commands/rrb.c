#include	"../push_swap.h"

void
	rrb(struct s_stacks *stacks)
{
	int				b_temp;
	register int	counter;

	counter = stacks->b_size;
	b_temp = stacks->b[counter - 1];
	while (counter--, counter > 0)
		stacks->b[counter] = stacks->b[counter - 1];
	stacks->b[0] = b_temp;
	write(1, "rrb\n", 4);
}
