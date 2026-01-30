/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniplop <miniplop@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 23:33:07 by miniplop          #+#    #+#             */
/*   Updated: 2026/01/30 23:33:07 by miniplop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_dict.h"

void	dict_clear(t_dict *dict, void (*del)(void *))
{
	t_dict_entry	*entry;
	t_dict_entry	*next;
	size_t			i;

	if (!dict)
		return ;
	i = 0;
	while (i < dict->size)
	{
		entry = dict->bucket[i];
		while (entry)
		{
			next = entry->next;
			if (del)
				del(entry->value);
			free(entry->key);
			free(entry);
			entry = next;
		}
		dict->bucket[i] = NULL;
		i++;
	}
	dict->count = 0;
}
