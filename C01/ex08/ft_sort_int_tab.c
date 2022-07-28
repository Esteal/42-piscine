/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 00:17:01 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/09 15:38:02 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	i;
	int	b;

	i = size - 1;
	j = size - 1;
	while (i >= 0)
	{
		while (j >= 0)
		{
			if (tab[i] >= tab[j])
			{
				b = tab[j];
				tab[j] = tab[i];
				tab[i] = b;
			}
			j--;
		}
		i--;
		j = size - 1;
	}
}
