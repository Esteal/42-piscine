/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:14:55 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/19 14:41:38 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

long int	ft_len(char	*str)
{
	long int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_convert(long int result, char *base, long int ten)
{
	long int	i;

	i = 0;
	while (ten)
	{
		i = result / ten;
		result = result % ten;
		ten = ten / 10;
		ft_putchar(base[i]);
	}	
}

int	error(char *base, long int len)
{
	long int	i;
	long int	j;

	i = 0;
	j = 1;
	if (len <= 1)
		return (0);
	while (base[i + 1])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	len_base;
	long int	nb_print;
	long int	result;
	long int	ten;

	ten = 1;
	len_base = ft_len(base);
	if (error(base, len_base) == 1)
	{
		while (nbr)
		{
			nb_print = nbr % len_base;
			nbr = nbr / len_base;
			result = result + nb_print * ten;
			ten = ten * 10;
		}
		ft_convert(result, base, ten / 10);
	}
}
