/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <ealgarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:25:39 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/28 17:30:50 by ealgarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	verif_set(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == str)
			return (1);
	i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;	
	int		j;
	int		cpt;
	int		a;

	cpt = 0;
	j = 0;
	split = malloc(999);
	while (str[j])
	{
		a = 0;
		if (verif_set(str[j], charset) == 0)
			split[cpt] = malloc(999);
		while (verif_set(str[j], charset) == 0)
		{
			split[cpt][a] = str[j];
			j++;
			a++;
		}
		if (a > 0)
			cpt++;
		j++;
	}
	return (split);
}
