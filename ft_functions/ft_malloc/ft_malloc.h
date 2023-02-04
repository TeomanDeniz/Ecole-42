/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:19:06 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/04 23:36:11 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H

int		*ft_malloc_utils_0_1(register int size);
int		*ft_malloc_utils_2_4(register int size);
int		*ft_malloc_utils_8_16(register int size);
int		*ft_malloc_utils_32_64(register int size);
int		*ft_malloc_utils_128_256(register int size);
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
