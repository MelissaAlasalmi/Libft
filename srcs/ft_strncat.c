/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:30:03 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:36:34 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	len1;
	unsigned int	len2;
	int				i;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len2 < n)
		ft_strcpy(&s1[len1], s2);
	else
	{
		ft_strncpy(&s1[len1], s2, n);
		s1[len1 + n] = '\0';
	}
	return (s1);
}
