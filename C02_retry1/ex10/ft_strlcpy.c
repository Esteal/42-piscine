/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:37:34 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/12 20:49:40 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *s1)
{
	unsigned int	len_s1;

	len_s1 = 0;
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	return (len_s1);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	dest[i] = '\0';
	return (ft_len(dest));
}
