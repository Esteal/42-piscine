/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:45:02 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/08 22:28:41 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	*div = a / b;
	*mod = a % b;
}
