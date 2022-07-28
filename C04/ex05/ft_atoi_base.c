/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <ealgarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:22:19 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/26 22:33:18 by ealgarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

long int	ft_find(char *base, char c)
{
	long int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (i);
	return (-1);
}

long int	ft_putnbr(char *str, int i, char *base)
{
	long int	result;

	result = 0;
	while (ft_find(base, str[i]) != -1)
	{
		result = (result * ft_len(base) + ft_find(base, str[i]));
		i++;
	}
	return (result);
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
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	long int	i;
	long int	neg;
	long int	count;

	count = 0;
	i = 0;
	neg = 1;
	if (error(base, ft_len(base)) == 1)
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				count++;
			i++;
		}
		if (count % 2 == 1)
			neg = -1;
		return (neg * ft_putnbr(str, i, base));
	}
	return (0);
}
