#include	"../push_swap.h"

static inline void
	listing_b(struct s_stacks *stacks, register int counter)
{
	int	*b_temp;

	b_temp = (int *) ft_malloc(stacks->b_size + 1);
	while (counter++, counter < stacks->b_size)
			b_temp[counter + 1] = stacks->b[counter];
	b_temp[0] = stacks->a[0];
	stacks->b = b_temp;
	stacks->b_size += 1;
}

static inline void
	listing_a(struct s_stacks *stacks, register int counter)
{
	int	*a_temp;

	a_temp = (int *) ft_malloc(stacks->a_size - 1);
	while (counter++, counter < stacks->a_size)
		a_temp[counter - 1] = stacks->a[counter];
	stacks->a = a_temp;
	stacks->a_size -= 1;
}

void
	pb(struct s_stacks *stacks)
{
	listing_b(stacks, -1);
	listing_a(stacks, 0);
	write(1, "pa\n", 3);
}
