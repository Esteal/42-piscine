/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:25:25 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/19 12:02:00 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_putnbr(char *str, int i, int result)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10 + (str[i] - '0'));
		i++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;
	int	count;

	count = 0;
	result = 0;
	i = 0;
	neg = 1;
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
	return (neg * ft_putnbr(str, i, result));
}
