/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:30:17 by hdeniz            #+#    #+#             */
/*   Updated: 2022/12/06 16:30:45 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *) malloc(sizeof(t_list));
	if (!ptr)
		return (0);
	ptr->next = NULL;
	ptr->content = content;
	return (ptr);
}
