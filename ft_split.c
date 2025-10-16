/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonlogin <tonlogin@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:50:04 by tonlogin          #+#    #+#             */
/*   Updated: 2025/10/16 14:47:30 by pchazalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_lenword(char const *s, char sep)
{
	int	n;

	while (*s && *s == sep)
		s++;
	n = 0;
	while (s[n] && s[n] != sep)
		n++;
	return (n);
}

static char	**ft_checkarr(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (ft_countwordsep(s, c) + 1));
	if (!arr)
		return (NULL);
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		n;

	i = 0;
	arr = ft_checkarr(s, c);
	if (!arr)
		return (NULL);
	while (*s)
	{
		n = ft_lenword(s, c);
		if (n > 0)
		{
			arr[i] = ft_strndup(s, n);
			if (!arr[i])
			{
				ft_freenarr(arr, i);
				return (NULL);
			}
			i++;
		}
		s += n;
	}
	arr[i] = NULL;
	return (arr);
}
