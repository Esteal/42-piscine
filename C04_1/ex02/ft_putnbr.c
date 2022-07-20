/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:26:22 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/18 19:50:26 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
