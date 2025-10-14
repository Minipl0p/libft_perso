/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonlogin <tonlogin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:25:32 by tonlogin          #+#    #+#             */
/*   Updated: 2025/09/08 13:00:12 by tonlogin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

int main (int ac, char **av)
{
	ac++;
	size_t	n = (size_t)atoi(av[3]);
	char	dest[] = "Salut les grimpeurs";
	char	*test;

	test = (char *)ft_memccpy(dest, av[1], atoi(av[2]), n);
	printf("%s\n\n", test);
	printf("%s", dest);
}
