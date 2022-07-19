/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:46:01 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/14 10:26:02 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *s1)
{
	unsigned int	len_s1;

	len_s1 = 0;
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	return (len_s1);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (src[0] == '\0')
		return (dest);
	while (dest[j] != '\0')
		j++;
	while (i < nb && src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
