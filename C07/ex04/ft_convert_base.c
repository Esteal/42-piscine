/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:21:13 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/20 15:20:38 by ealgarin         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int ft_nbr(char *base_from, char *nbr, int len_from)
{
    int nb_int;
    int i;
    int j;

    i = 0;
    j = 0;
    nb_int = 0;
    while (nbr[i])
    {
        if (nbr[i] == base_from[j])
            {
                nb_int =  len_from * nb_int + ((nbr[i] - '0') * len_from);
                i++;
                j = 0;   
            }
        j++;
    }
    return (nb_int);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int len_from;
    int nb_int;

    len_from = ft_strlen(base_from);
    nb_int = ft_nbr(base_from, nbr, len_from);
    printf("%i", nb_int);
    return ("test");
}

int main(void)
{
    ft_convert_base("13", "01234", "12355");
}
