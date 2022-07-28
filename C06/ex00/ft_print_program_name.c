/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <ealgarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:38:21 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/28 01:54:00 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	argc = 0;
	while (argv[0][argc])
	{
		write(1, &argv[0][argc], 1);
		argc++;
	}
	write(1, "\n", 1);
	return (0);
}
