/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:19:06 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/05 06:04:18 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H

int		*_0_1_(register int size);
int		*_2_4_(register int size);
int		*_8_16_(register int size);
int		*_32_64_(register int size);
int		*_128_256_(register int size);
int		*_512_1024_(register int size);
int		*_2048_4096_(register int size);
int		*_8192_16384_(register int size);
int		*_32768_65536_(register int size);
int		*_131072_262144_(register int size);
int		*_524288_1048576_(register int size);
int		*_2097152_4194304_(register int size);
int		*_8388608_16777216_(register int size);
int		*_33554432_67108864_(register int size);
int		*_134217728_(void);
void	*ft_malloc(register int size);

#endif
