/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchazalm <pchazalm@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:10:40 by pchazalm          #+#    #+#             */
/*   Updated: 2025/12/30 16:22:10 by pchazalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf.h"

int	ft_putstr_printf(char *s)
{
	int	nb;

	if (!s)
		nb = write(1, "(null)", 6);
	else
		nb = write(1, s, ft_strlen(s));
	return (nb);
}
