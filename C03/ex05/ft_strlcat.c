/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:51:06 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/14 11:24:22 by ealgarin         ###   ########lyon.fr   */
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

unsigned int	loop(char *dest, char *src, unsigned int size, unsigned int i)
{
	unsigned int	j;

	j = 0;
	while (dest[i] != '\0')
	{
		if (i >= size)
		{
			dest[i] = '\0';
			j--;
		}
		j++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		if (dest[ft_len(dest) + 1] == '\0')
			dest[ft_len(dest)] = '\0';
		j++;
		i++;
	}
	dest[ft_len(dest)] = '\0';
	return (ft_len(dest));
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (ft_len(dest) == size)
		return (ft_len(src));
	if (src[0] == '\0')
		return (ft_len(dest));
	return (loop(dest, src, size, i));
}
