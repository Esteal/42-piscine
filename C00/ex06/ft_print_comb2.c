/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:58:29 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/08 09:40:06 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	affichage_final(char a, char b, char c, char d)
{
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
	}
}

void	affichage_huit(char a, char b, char c, char d)
{
	if (b == '8' && a != '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, ", ", 2);
	}
}

void	affichage(char a, char b, char c, char d)
{
	if (a <= c)
	{
		if (b < d)
		{
			if (b != '8')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, " ", 1);
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, ", ", 2);
			}
			else
			{
				affichage_huit(a, b, c, d);
			}
		}
	}
}

void	check_ten(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					affichage(a, b, c, d);
					affichage_final(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	check_ten(a, b, c, d);
}
