/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:51:14 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/13 12:06:55 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include	<unistd.h>
# include	"libft/ft_malloc/ft_malloc.h"

int		ft_strlen(const char *restrict string);

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

void	prepare_stacks(struct s_stacks *stacks, char *argv[], register int ac);
void	ai(struct s_stacks *stacks);

#endif
