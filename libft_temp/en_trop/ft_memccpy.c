/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonlogin <tonlogin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 23:31:08 by tonlogin          #+#    #+#             */
/*   Updated: 2025/09/09 17:20:34 by tonlogin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*des;
	unsigned char	*sr;
	unsigned char	cc;

	cc = (unsigned char)c;
	des = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		des[i] = sr[i];
		if (sr[i] == cc)
			return ((void *)(des + 1 + i));
		i++;
	}
	return (NULL);
}
