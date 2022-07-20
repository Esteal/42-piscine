/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:04:50 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/17 20:05:25 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	display(char *grid);
int		ft_strlen(char	*grid);

int	main(int argc, char **argv)
{
	if (ft_strlen(argv[1]) != 31)
	{
		write(1, "ca marche pas !\n", 15);
		return(0);
	}
	if (argc - 1 == 1)
		display(argv[1]);
	if (argc - 1 != 1)
	{
		write(1, "Essaie encoe !\n", 15);
		return(0);
	}
	return (0);
}
