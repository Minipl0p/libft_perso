/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonlogin <tonlogin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:25:32 by tonlogin          #+#    #+#             */
/*   Updated: 2025/09/07 19:43:44 by tonlogin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n);

int main (int ac, char **av)
{
	ac++;
	size_t	n;
	int		c;
	char	*ptr;

	c = atoi(av[2]);
	n = (size_t)atoi(av[3]);
	ptr = (char *)ft_memset(av[1], c, n);
	printf("%s", ptr);
}
