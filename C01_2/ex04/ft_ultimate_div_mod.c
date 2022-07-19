/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 21:22:50 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/08 21:39:28 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	stock_div;
	int	stock_mod;

	stock_div = *a / *b;
	stock_mod = *a % *b;
	*a = stock_div;
	*b = stock_mod;
}
