/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonlogin <tonlogin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:25:32 by tonlogin          #+#    #+#             */
/*   Updated: 2025/09/09 13:37:06 by tonlogin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int main (int ac, char **av)
{
	ac++;
	int		i = 0;
	size_t	n = (size_t)atoi(av[2]);
	char	*dest;
	int		x = atoi(av[3]);
	char	*test;

	dest = malloc(sizeof(char) * x);
	if (!dest)
		return (1);
	test = (char *)ft_memmove(dest, av[1], n);
	while (i < x) 
	{
		printf("%c", *(test + i));
		i++;
	}
	free(dest);
}
