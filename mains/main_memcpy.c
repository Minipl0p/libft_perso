/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonlogin <tonlogin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:25:32 by tonlogin          #+#    #+#             */
/*   Updated: 2025/09/07 23:27:57 by tonlogin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int main (int ac, char **av)
{
	ac++;
	int		i = 0;
	size_t	n = (size_t)atoi(av[2]);
	char	*dest;
	int		x = atoi(av[3]);

	dest = malloc(sizeof(char) * x);
	if (!dest)
		return (1);
	ft_memcpy(dest, av[1], n);
	while (i < x) 
	{
		printf("%c", *(dest + i));
		i++;
	}
	free(dest);
}
