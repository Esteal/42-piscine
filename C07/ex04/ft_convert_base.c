/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <ealgarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:21:13 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/23 20:25:47 by ealgarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	error(char *base, long int len);
long int ft_len(char *str);


char	*ft_convert(long int result, char *base, long int ten)
{
	long int	i;
	char		*stack;
	i = 0;
	stack = malloc(sizeof(char) * ft_len(base));
	while (ten)
	{
		i = result / ten;
		result = result % ten;
		ten = ten / 10;
		stack[i] = base[i];
	}
	return (stack);
}

int	error_two(char *base, long int len)
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

char	*ft_putnbr_base(long int nbr, char *base)
{
	long int	len_base;
	long int	nb_print;
	long int	result;
	long int	ten;

	ten = 1;
	len_base = ft_len(base);
	if (error_two(base, len_base) == 1)
	{
		while (nbr)
		{
			nb_print = nbr % len_base;
			nbr = nbr / len_base;
			result = result + nb_print * ten;
			ten = ten * 10;
		}
		return (ft_convert(result, base, ten / 10));
	}
	return (0);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	return (ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to));
}
