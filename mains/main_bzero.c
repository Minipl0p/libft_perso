/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonlogin <tonlogin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:25:32 by tonlogin          #+#    #+#             */
/*   Updated: 2025/09/07 23:02:59 by tonlogin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t n);

static int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main (int ac, char **av)
{
	ac++;
	size_t	i = 0;
	size_t	n;
	size_t	u = ft_strlen(av[1]);

	n = (size_t)atoi(av[2]);
	ft_bzero(av[1], n);
	while (i < u)
	{
		printf("%c", av[1][i]);
		i++;
	}
}
