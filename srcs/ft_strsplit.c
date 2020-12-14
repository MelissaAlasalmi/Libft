/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:39:21 by malasalm          #+#    #+#             */
/*   Updated: 2020/10/15 20:57:53 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		sp;
	int		i;
	int		j;
	int		temp;
	char	**tab;

	i = 0;
	j = -1;
	sp = ft_wordcount(s, c);
	if (!(tab = malloc((sizeof(char *) * (sp + 1)))))
		return (NULL);
	if (!s || !c || !tab)
		return (NULL);
	while (++j < sp)
	{
		while (s[i] && s[i] == c)
			i++;
		temp = i;
		while (s[i] && s[i] != c)
			i++;
		tab[j] = ft_strsub(s, temp, i - temp);
		i++;
	}
	tab[j] = 0;
	return (tab);
}
