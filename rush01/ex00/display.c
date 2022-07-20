/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:18:55 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/16 15:27:58 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_putchar(char c);

void	display(char *grid)
{
	int	nb_tab[4][4] = {
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0}
	};
	int	i;
	int	j;
	int	a;
	int	b;

	i = 0;
	j = 0;
	a = 0;
	b = 0;
	while (grid[i])
	{
		while (grid[i] == '1' && a < 4)
		{
			if ('1' == grid[j])
			{
				nb_tab[a][b] = 4;
			}
			b++;
			j++;
			if (b == 4)
			{
				b = 0;
				a++;
			}
		}
		a = 0;
		b = 0;
		j = 0;
		while (grid[i] == '4' && a < 4)
		{
			if ('4' == grid[j])
			{
				nb_tab[a][b] = 1;
				if (j < 16)
				{
					nb_tab[a + 1][b] = 2;
					nb_tab[a + 2][b] = 3;
					nb_tab[a + 3][b] = 4;
				}
				if (j > 16 )
				{
					nb_tab[a][b + 1] = 2;
					nb_tab[a][b + 2] = 3;
					nb_tab[a][b + 3] = 4;
				}
			}
			b++;
			j++;
			if (b == 4)
			{
				b = 0;
				a++;
			}
		}
		a = 0;
		b = 0;
		i++;
		j = 0;
	}
	while (a < 4)
	{
		ft_putchar(nb_tab[a][b] + '0');
		b++;
		if (b == 4)
		{
			a++;
			b = 0;
			ft_putchar('\n');
		}
	}
}
