/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:35:02 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/07 12:52:14 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{		
		write(1, &number, 1);
		number++;
	}
}
