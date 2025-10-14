/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonlogin <tonlogin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:55:45 by tonlogin          #+#    #+#             */
/*   Updated: 2025/09/09 19:05:09 by tonlogin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(int ac, char **av)
{
	ac++;
	int	i = ft_memcmp(av[1], av[2], (size_t)atoi(av[3]));
	printf("%d", i);
}
