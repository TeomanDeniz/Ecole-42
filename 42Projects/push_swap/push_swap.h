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

# include	"libft/ft_malloc/ft_malloc.h"
# include	<stdlib.h>/*
# malloc();
# free();
# exit();
*/
# include	<stdio.h>
# include	<unistd.h>

void	*ft_memset(void *object, register int character, register int size);
int		ft_strlen(const char *restrict string);
int		ft_atoi(const char *restrict string);

struct s_stacks
{
	long	*a;
	long	*b;
	int		size;
	int		a_size;
	int		b_size;
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

void	prepare_stacks(struct s_stacks *stack, char *argv[]);

void	ai(struct s_stacks *stack);

int		biggest_number_in_stack_a(struct s_stacks *stack);
int		biggest_number_in_stack_b(struct s_stacks *stack);
short	is_stack_shorted(struct s_stacks *stack);
int		smalles_number_in_stack_a(struct s_stacks *stack);
int		smalles_number_in_stack_b(struct s_stacks *stack);

#endif
