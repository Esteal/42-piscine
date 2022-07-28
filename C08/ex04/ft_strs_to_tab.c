/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <ealgarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:59:16 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/28 18:45:07 by ealgarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 1;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*storage;
	int			i;
	int			e;

	i = 0;
	storage = malloc(24 * (ac + 1));
	if (!storage)
		return ((void *)0);
	while (i < ac)
	{
		e = 0;
		storage[i].size = ft_strlen(av[i]) + 1;
		storage[i].str = av[i];
		storage[i].copy = malloc(sizeof(char) * storage[i].size);
		while (e <= storage[i].size)
		{
			storage[i].copy[e] = storage[i].str[e];
			e++;
		}
		i++;
	}
	return (storage);
}
