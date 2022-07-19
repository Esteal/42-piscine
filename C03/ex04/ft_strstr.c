/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:14:28 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/14 08:37:58 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1)
{
	unsigned int	len_s1;

	len_s1 = 0;
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	return (len_s1);
}

char	*ft_strstr2(char *to_find, char *str, int i, int j)
{
	char	*str_b;
	int		len;

	len = ft_strcmp(to_find);
	str_b = "\0";
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			str_b = &str[i];
			while (str[i + j] == to_find[j])
			{
				j++;
				if (j == len)
					return (&str_b[0]);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	return (ft_strstr2(to_find, str, i, j));
}
