/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malasalm <malasalm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:38:47 by malasalm          #+#    #+#             */
/*   Updated: 2020/07/10 12:47:50 by malasalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n'
	|| s[i] == '\t'))
		i++;
	j = ft_strlen(&s[i]) - 1;
	while (s[i] && (s[j + i] == ' ' || s[j + i] == '\n'
	|| s[j + i] == '\t'))
		j--;
	if (!(str = ft_strnew(j + 1)))
		return (NULL);
	ft_strncpy(str, (s + i), (j + 1));
	return (str);
}
