/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonlogin <tonlogin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:32:06 by tonlogin          #+#    #+#             */
/*   Updated: 2025/09/25 10:37:15 by tonlogin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memalloc(size_t size)
{
	unsigned char	*ptr;

	ptr = malloc(sizeof(unsigned char) * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size);
	return ((void *)ptr);
}
