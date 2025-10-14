/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonlogin <tonlogin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:01:40 by tonlogin          #+#    #+#             */
/*   Updated: 2025/09/09 17:12:31 by tonlogin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(int ac, char **av)
{
	char *ptr;
	ac++;

	ptr = ft_memchr(av[1], atoi(av[2]), (size_t)atoi(av[3]));
	printf("%s", ptr);
	return (0);
}
