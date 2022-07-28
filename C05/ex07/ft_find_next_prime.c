/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <ealgarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:14:11 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/27 18:41:03 by ealgarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime_long(long nb)
{
	long	i;
	long	sqrt_nb;

	i = 5;
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
		return (0);
	sqrt_nb = 46341;
	while (i < nb && i < sqrt_nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime_long((long) nb) != 1)
		nb++;
	return (nb);
}
