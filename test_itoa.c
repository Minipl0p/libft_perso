/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchazalm <pchazalm@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:29:31 by pchazalm          #+#    #+#             */
/*   Updated: 2025/10/16 17:35:28 by pchazalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *a = ft_itoa(127);
	char *b = ft_itoa(-127);
	char *c = ft_itoa(1);
	char *d = ft_itoa(0);
	char *e = ft_itoa(2147483647);
	char *f = ft_itoa(-2147483648);
	char *g = ft_itoa(-10);
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n", a, b, c, d, e, f, g);
	return (0);	
}
