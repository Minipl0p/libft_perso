/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_remove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniplop <miniplop@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 16:04:39 by miniplop          #+#    #+#             */
/*   Updated: 2025/12/31 16:06:18 by miniplop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_dict.h"

int	dict_remove(t_dict *dict, const char *key, void (*del)(void *))
{
	t_dict_entry	*entry;
	t_dict_entry	*prev;
	size_t			index;

	if (!dict || !key)
		return (-1);
	index = dict_hash(key, dict->size);
	entry = dict->bucket[index];
	prev = NULL;
	while (entry)
	{
		if (!ft_strcmp(entry->key, key))
		{
			if (prev)
				prev->next = entry->next;
			else
				dict->bucket[index] = entry->next;
			if (del)
				del(entry->value);
			free(entry->key);
			free(entry);
			dict->count--;
			return (0);
		}
		prev = entry;
		entry = entry->next;
	}
	return (-1);
}
