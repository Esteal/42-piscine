/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:39:21 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/12 20:58:01 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	retourne;
	int	i;

	retourne = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			retourne = 0;
		}
		i++;
	}
	return (retourne);
}
