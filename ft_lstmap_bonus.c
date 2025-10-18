/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchazalm <pchazalm@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:42:31 by pchazalm          #+#    #+#             */
/*   Updated: 2025/10/19 00:12:22 by pchazalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*n_elem;
	void	*n_content;

	n_list = NULL;
	while (lst)
	{
		n_content = (*f)(lst->content);
		n_elem = ft_lstnew(n_content);
		if (!n_elem)
		{
			del(n_content);
			free(n_elem);
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		ft_lstadd_back(&n_list, n_elem);
		lst = lst->next;
	}
	return (n_list);
}
