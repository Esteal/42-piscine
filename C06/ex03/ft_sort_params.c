/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:01:56 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/17 17:23:30 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 == *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_param(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_sort_int_tab(int size, char **s1)
{
	int		j;
	int		i;
	char	*b;

	i = size;
	j = size;
	while (i >= 0)
	{
		while (j >= 0)
		{
			if (ft_strcmp(s1[i], s1[j]) > 0)
			{
				b = s1[i];
				s1[i] = s1[j];
				s1[j] = b;
			}
			j--;
		}
		i--;
		j = size - 1;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_int_tab(argc - 1, argv);
	ft_print_param(argc, argv);
	return (0);
}
