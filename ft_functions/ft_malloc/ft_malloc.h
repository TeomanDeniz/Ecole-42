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
int		*ft_malloc_utils_512_1024(register int size);
int		*ft_malloc_utils_2048_4096(register int size);
int		*ft_malloc_utils_8192_16384(register int size);
int		*ft_malloc_utils_32768_65536(register int size);
int		*ft_malloc_utils_131072_262144(register int size);
int		*ft_malloc_utils_524288_1048576(register int size);
int		*ft_malloc_utils_2097152_4194304(register int size);
int		*ft_malloc_utils_8388608_16777216(register int size);
int		*ft_malloc_utils_33554432_67108864(register int size);
int		*ft_malloc_utils_134217728(void);
void	*ft_malloc(register int size);

#endif
