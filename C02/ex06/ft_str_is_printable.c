/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:54:55 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/13 09:50:46 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	retourne;
	int	i;

	retourne = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31))
		{
			retourne = 0;
		}
		i++;
	}
	return (retourne);
}
