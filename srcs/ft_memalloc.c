/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:26:18 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/11 15:12:42 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *buf;

	if (!(buf = (void *)malloc(size)))
		return (NULL);
	if (buf)
	{
		ft_bzero(buf, size);
		return (buf);
	}
	return (NULL);
}
