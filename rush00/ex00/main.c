/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:27:13 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/09 14:37:22 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int a, int b);

int	main(void)
{
	rush(3, 5);
	write(1, "\n", 1);
	rush(5, 3);
	write(1, "\n", 1);
	rush(1, 5);
	write(1, "\n", 1);
	rush(5, 1);
	write(1, "\n", 1);
	rush(0, 5);
	write(1, "\n", 1);
	rush(5, 0);
	return (0);
}
