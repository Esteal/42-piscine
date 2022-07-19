/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:58:29 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/07 18:21:47 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	check_equal(char a, char b, char c)
{
	if (a != b && b != c && a != c)
	{
		if (a <= b && b <= c)
		{
			if (a != '7')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				write(1, ", ", 2);
			}
		}
	}
}

void	check_end(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		write(0, &a, 1);
		write(0, &b, 1);
		write(0, &c, 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				check_equal(a, b, c);
				check_end(a, b, c);
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}
