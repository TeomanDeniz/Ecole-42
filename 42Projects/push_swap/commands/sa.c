#include	"../push_swap.h"

void
	sa(struct s_stacks *stacks)
{
	register int	temp;

	temp = stacks->a[0];
	stacks->a[0] = stacks->a[1];
	stacks->a[1] = temp;
	write(1, "sa\n", 3);
}
