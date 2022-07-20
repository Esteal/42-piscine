/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:48:36 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/09 14:22:18 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	println(char a, char b, char c, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (0 == i)
			write(1, &a, 1);
		else if (x - 1 == i)
			write(1, &c, 1);
		else
			write(1, &b, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y && x)
	{
		if (0 == i)
			println('/', '*', '\\', x);
		else if (y - 1 == i)
			println('\\', '*', '/', x);
		else
			println('*', ' ', '*', x);
		i++;
	}
}
