/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:28:17 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/12 18:47:46 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	i;

	i = 0;
	len_dest = ft_strcmp(dest);
	while (src[i] != '\0')
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
