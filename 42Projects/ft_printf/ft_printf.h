/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:31:44 by hdeniz            #+#    #+#             */
/*   Updated: 2023/01/09 11:33:31 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifdef _WIN32
#  include	<io.h> /*
	_write(fd, str, size);
	_read(fd, str, size);
*/
//# define write _write
//# define read _read
# else
#  include	<unistd.h> /*
	write(fd, str, size);
	read(fd, str, size);
*/
# endif

# include	<stdarg.h> /*
	va_list v_arg;
	va_start(v_arg, first arg);
	va_arg(v_arg, KEYWORD);
	va_end(v_arg);
	va_copy(v_arg2, v_arg);
*/

# include	<stdlib.h> /*
	sizeof(KEYWORD);
	(KEYWORD)malloc(size_t);
	free(*var);
*/

// FT_PRINTF FUNCTIONS
void	pf_flag_collector(const char *(__), int *x, int *flags, va_list v_args);
void	pf_base_out(register long long number, const char *base, int *flags);
void	pf_base_out_int(register int number, const char *base, int *flags);
void	pf_flag_event(int *flags, char c, void *o, char p);

int		pf_is_flag_valid(const char *(__), int x, int reset_flags, int *flags);
int		pf_perc_check(const char *(__), int x);
int		pf_set_flags_fd(int *flags, int fd);
int		pf_set_flags(int *flags);
// FT_PRINTF FUNCTIONS

// FT_PRINTF COMMANDS
void	pf__p(unsigned long long address, int *flags);
void	pf__x(int number, char keyword, int *flags);
void	pf__u(unsigned long number, int *flags);
void	pf__c(int character, int *flags);
void	pf__f(double number, int *flags);
void	pf__n(int *variable, int *flags);
void	pf__s(char *string, int *flags);
void	pf__d(int number, int *flags);
void	pf__o(int number, int *flags);
void	pf__b(int number, int *flags);
void	pf__perc(int *flags);
// FT_PRINTF COMMANDS

// FT_PRINTF FLAGS
void	margin(int *flags, char c, char p, long long number);
void	square(int *flags, char c, long long number);
void	minus(int *flags, char c);
void	space(int *flags, char c);
void	plus(int *flags, char c);
void	dot(int *flags, char c);
// FT_PRINTF FLAGS

// LIBFT FUNCTIONS
long	ft_abs(long number);

long	ft_pow(register long base, register signed int power);

void	ft_putchar_fd(char character, int fd);
void	ft_putnbr_fd(long number_in, int fd);
void	ft_putstr_fd(char *string, int fd);
void	ft_putchar(char character);
void	ft_putnbr(long number_in);
void	ft_putstr(char *string);

char	*ft_itoa(long number);

int		ft_itoa_base(unsigned long long n, int b, char c, int fd);
int		ft_itoa_base_int(unsigned int n, int b, char c, int fd);
int		ft_ibl(unsigned long long n, int b, char c);
int		ft_ibil(unsigned int n, int b, char c);
int		ft_printf(const char *(__), ...);
int		ft_strlen(const char *string);
int		ft_atoi(const char *string);

//  FT_MATH.H

int		ft_isnan(register double x);
int		ft_isinf(register double x);

//  FT_MATH.H

// LIBFT FUNCTIONS



#endif
