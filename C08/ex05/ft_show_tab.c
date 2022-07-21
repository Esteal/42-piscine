/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <ealgarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:11:18 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/21 19:19:02 by ealgarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	nb_is_more_ten(long int nb, long int i, long int modulo, long int n)
{
	while ((nb / i) > 10)
		i = i * 10;
	while (i >= 10)
	{
		modulo = nb % i;
		n = (nb - modulo) / i;
		ft_putchar('0' + n);
		i = i / 10;
		nb = modulo;
	}
	ft_putchar('0' + nb);
}

void	ft_putnbr(int nb)
{
	long int	n;
	long int	modulo;
	long int	i;
	long int	stack;

	stack = nb;
	modulo = 0;
	n = 0;
	if (nb < 0)
	{
		stack = stack * (-1);
		ft_putchar('-');
	}
	if (stack < 10)
	{
		ft_putchar('0' + stack);
	}
	else
	{
		i = 10;
		nb_is_more_ten(stack, i, modulo, n);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
