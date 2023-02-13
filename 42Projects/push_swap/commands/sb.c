#include	"../push_swap.h"

void
	sb(struct s_stacks *stacks)
{
	register int	temp;

	temp = stacks->b[0];
	stacks->b[0] = stacks->b[1];
	stacks->b[1] = temp;
	write(1, "sb\n", 3);
}
