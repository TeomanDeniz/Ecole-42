#include	"../push_swap.h"

static inline void
	ss_ra(struct s_stacks *stacks)
{
	int				a_temp;
	register int	counter;

	counter = 0;
	a_temp = stacks->a[0];
	while (counter++, counter < stacks->a_size)
		stacks->a[counter - 1] = stacks->a[counter];
	stacks->a[counter - 1] = a_temp;
}

static inline void
	ss_rb(struct s_stacks *stacks)
{
	int				b_temp;
	register int	counter;

	counter = 0;
	b_temp = stacks->b[0];
	while (counter++, counter < stacks->b_size)
		stacks->b[counter - 1] = stacks->b[counter];
	stacks->b[counter - 1] = b_temp;
}

void
	rr(struct s_stacks *stacks)
{
	ss_ra(stacks);
	ss_rb(stacks);
	write(1, "rr\n", 3);
}
