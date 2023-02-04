/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:19:06 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/04 18:19:11 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H

int	*ft_malloc_utils_0_4(register unsigned int size);
int	*ft_malloc_utils_8_64(register unsigned int size);
int	*ft_malloc_utils_128_1024(register unsigned int size);
int	*ft_malloc_utils_2048_16384(register unsigned int size);
int	*ft_malloc_utils_32768_262144(register unsigned int size);
int	*ft_malloc_utils_524288_4194304(register unsigned int size);
int	*ft_malloc_utils_8388608_67108864(register unsigned int size);
int	*ft_malloc_utils_134217728(void);
int	*ft_malloc_utils_268435456(void);

#endif
