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

# include	"libft/ft_malloc/ft_malloc.h"/*
# ft_malloc();
*/

# include	"libft/ft_printf/ft_printf.h"/*
# ft_printf();
*/

# include	<stdlib.h>/*
# malloc();
# free();
# exit();
*/

# include	<unistd.h>/*
# write();
*/

# ifndef LOG
#  define LOG 1 // Output of extra analyses (Default: Disabled)
# endif

# ifndef MOVES
#  define MOVES 1 // Command outputs (Default: Enabled)
# endif

void	*ft_memset(void *object, register int character, register int size);
int		ft_strlen(const char *restrict string);
int		ft_atoi(const char *restrict string);

struct s_stacks
{
	int	*a;
	int	*b;
	int	size;
	int	a_size;
	int	b_size;
};

void	sa(struct s_stacks *stack);
void	sb(struct s_stacks *stack);
void	ss(struct s_stacks *stack);
void	pa(struct s_stacks *stack);
void	pb(struct s_stacks *stack);
void	ra(struct s_stacks *stack);
void	rb(struct s_stacks *stack);
void	rr(struct s_stacks *stack);
void	rra(struct s_stacks *stack);
void	rrb(struct s_stacks *stack);
void	rrr(struct s_stacks *stack);

int		check_if_not_same(char *argv[]);
int		check_if_only_numbers(char *argv[]);

short	is_stack_shorted_up(int *stack, register int size);
short	is_stack_shorted_down(int *stack, register int size);

void	prepare_stacks(struct s_stacks *stack, char *argv[]);

void	ai(struct s_stacks *stack);
int		short_a(struct s_stacks *stack, int len, register int recursive);

int		biggest_number_in_stack_a(struct s_stacks *stack);
int		biggest_number_in_stack_b(struct s_stacks *stack);
int		smalles_number_in_stack_a(struct s_stacks *stack);
int		smalles_number_in_stack_b(struct s_stacks *stack);

void	short_a_three(struct s_stacks *s);
int		get_mediane(int *pivot, int *stack, register int size);
int		sort_b(struct s_stacks *stack, int position, int control);
int		sort_a(struct s_stacks *stack, int position, int control);

#endif
