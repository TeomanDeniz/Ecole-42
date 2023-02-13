
#include	"push_swap.h"

int
	mian(int argc, char *argv[])
{
	struct s_stacks	stacks;

	if (argc >= 2)
	{
		if (check_if_not_same(argv) || check_if_only_numbers(argv))
			return (1);
		prepare_stacks(&stacks, argv);
		ai(&stacks);
		return (0);
	}
	return (1);
}
