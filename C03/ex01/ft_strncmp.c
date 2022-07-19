/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:05:02 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/13 18:00:41 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				calcul;

	i = 0;
	calcul = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] != s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (calcul);
}
