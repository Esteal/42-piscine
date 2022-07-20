/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:38:17 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/18 16:43:14 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_sep(char *stock, char *sep, int *c)
{
	int	s;

	s = 0;
	while (sep[s])
	{
		stock[*c + 1] = sep[s];
		s++;
		(*c)++;
	}
	return (stock);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*stock;
	int		i;
	int		j;
	int		c;

	c = 0;
	j = 0;
	i = 0;
	stock = malloc(sizeof(char) * size * 100);
	if (!stock)
		return (NULL);
	while (c < size - 1)
	{
		stock[c] = strs[i][j];
		j++;
		if (strs[i][j] == '\0')
		{
			stock = ft_sep(stock, sep, &c);
			j = 0;
			i++;
		}
		c++;
	}
	return (stock);
}
