/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:11:56 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/12 18:07:51 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *ptr;
	t_list *nextnode;

	ptr = *alst;
	while (ptr)
	{
		nextnode = ptr->next;
		del(ptr->content, ptr->content_size);
		free(ptr);
		ptr = nextnode;
	}
	*alst = NULL;
}
