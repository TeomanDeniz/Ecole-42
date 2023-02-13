#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include	<unistd.h>
# include	"libft/ft_malloc/ft_malloc.h"

struct s_stacks
{
	int	*a;
	int	*b;
	int	a_size;
	int	b_size;
};

void	sa(struct s_stacks *stacks);
void	sb(struct s_stacks *stacks);
void	ss(struct s_stacks *stacks);
void	pa(struct s_stacks *stacks);
void	pb(struct s_stacks *stacks);
void	ra(struct s_stacks *stacks);
void	rb(struct s_stacks *stacks);
void	rr(struct s_stacks *stacks);
void	rra(struct s_stacks *stacks);
void	rrb(struct s_stacks *stacks);
void	rrr(struct s_stacks *stacks);

int		check_if_not_same(char *argv[]);
int		check_if_only_numbers(char *argv[]);

void	prepare_stacks(struct s_stacks *stacks, char *argv[]);
void	ai(struct s_stacks *stacks);

#endif
