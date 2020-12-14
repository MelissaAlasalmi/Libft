/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:33:14 by malasalm          #+#    #+#             */
/*   Updated: 2019/11/10 17:58:25 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fstr;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(fstr = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i] != '\0')
	{
		fstr[i] = (*f)(i, s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
