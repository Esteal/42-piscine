/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgarin <ealgarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:37:34 by ealgarin          #+#    #+#             */
/*   Updated: 2022/07/22 18:39:22 by ealgarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_len(char *s1)
{
    unsigned int    len_s1;

    len_s1 = 0;
    while (s1[len_s1] != '\0')
    {
        len_s1++;
    }
    return (len_s1);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int  len;
    unsigned int  j;
    
    j = 0;
    while(dest[j])
      j++;
    i = 0;
    while (dest[i])
    {
        if(i<size)
          dest[i + j] = src[i];
        else
          dest[i + j] = '\0';
        i++;
    }
    dest[i] = '\0';
    return (i);
}

int    main(void)
{
    char src1a[] = "abcde";
    char dest1a[] = "1234567";
    char src1b[] = "abcde";
    char dest1b[] = "1234567";
    char src2a[] = "abcd";
    char dest2a[] = "123";
    char src2b[] = "abcd";
    char dest2b[] = "123";
    char src3a[] = "";
    char dest3a[] = "";
    char src3b[] = "";
    char dest3b[] = "";
    char src4a[] = "12345";
    char dest4a[] = "abc";
    char src4b[] = "12345";
    char dest4b[] = "abc";
    
    printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
            ft_strlcpy(dest1a, src1a, 0) == strlcpy(dest1b, src1b, 0) ? "Pass" : "Fail",
            strcmp(dest1a, dest1b) == 0 && strcmp(src1a, src1b) == 0 ? "Pass" : "Fail",
            ft_strlcpy(dest2a, src2a, 3) == strlcpy(dest2b, src2b, 3) ? "Pass" : "Fail",
            strcmp(dest2a, dest2b) == 0 && strcmp(src2a, src2b) == 0 ? "Pass" : "Fail",
            ft_strlcpy(dest3a, src3a, 0) == strlcpy(dest3b, src3b, 0) ? "Pass" : "Fail",
            strcmp(dest3a, dest3b) == 0 && strcmp(src3a, src3b) == 0 ? "Pass" : "Fail",
            ft_strlcpy(dest4a, src4a, 2) == strlcpy(dest4b, src4b, 2) ? "Pass" : "Fail",
            strcmp(dest4a, dest4b) == 0 && strcmp(src4a, src4b) == 0 ? "Pass" : "Fail");
}