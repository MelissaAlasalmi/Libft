/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:57:21 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/08 12:28:46 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t newlen;

	if (*needle == '\0')
		return ((char *)haystack);
	newlen = ft_strlen(needle);
	while (*haystack != '\0' && len >= newlen)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, newlen) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
