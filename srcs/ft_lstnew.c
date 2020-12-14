/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:11:56 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/10 12:30:51 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newnode;

	if (!(newnode = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		if (!(newnode->content = (void *)malloc(sizeof(content_size))))
			return (NULL);
		newnode->content_size = content_size;
		newnode->content = (void*)content;
		newnode->next = NULL;
	}
	else
	{
		newnode->content_size = 0;
		newnode->content = NULL;
		newnode->next = NULL;
	}
	return (newnode);
}
