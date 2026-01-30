/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniplop <miniplop@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:14:24 by miniplop          #+#    #+#             */
/*   Updated: 2026/01/30 13:13:12 by miniplop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_dict.h"

static int	find_n_set(t_dict_entry *entry, char *key, void *value, void (*del)(void *))
{
	while (entry)
	{
		if (!ft_strcmp(entry->key, key))
		{
			del(entry->value);
			del(key);
			entry->value = value;
			return (0);
		}
		entry = entry->next;
	}
	return (1);
}

int	dict_set(t_dict *dict, char *key, void *value, void (*del)(void *))
{
	t_dict_entry	*entry;
	size_t			index;

	if (!dict || !key)
		return (-1);
	index = dict_hash(key, dict->size);
	entry = dict->bucket[index];
	if (!find_n_set(entry, key, value, del))
		return (0);
	entry = malloc(sizeof(t_dict_entry));
	if (!entry)
		return (-1);
	entry->key = ft_strdup(key);
	if (!entry->key)
	{
		free(entry);
		return (-1);
	}
	entry->value = value;
	entry->next = dict->bucket[index];
	dict->bucket[index] = entry;
	dict->count++;
	return (0);
}
