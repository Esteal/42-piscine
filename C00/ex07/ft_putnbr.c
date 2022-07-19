/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:47:12 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/08 09:41:00 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	nb_is_more_ten(int nb, int i, int modulo, int n)
{
	while ((nb / i) > 10)
	{
	i = i * 10;
	}
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
	int	n;
	int	modulo;
	int	i;

	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	if (nb < 10)
	{
		ft_putchar('0' + nb);
	}
	else
	{
		i = 10;
		nb_is_more_ten(nb, i, modulo, n);
	}
}
