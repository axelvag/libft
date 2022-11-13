/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:44:27 by avaganay          #+#    #+#             */
/*   Updated: 2022/11/13 13:43:23 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int abs(int n)
{
    if (n < 0)
    {
        return (-n);
    }
    return (n);
}

void ft_strrev(char *str)
{
    size_t i;
    size_t len;
    char tmp;

    i = 0;
    len = ft_strlen(str) - 1;
    while (i < len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
}

char *ft_itoa(int n)
{
    char *str;
    int sign;
    int i;

    sign = 0;
    i = 0;
    if (n < 0)
        sign = 1;
    str = malloc(sign * sizeof(*str) + 2);
    if (!str)
		return (NULL);
    if (n == 0)
    {
        str[0] = '0';
        i++;
    }
    while (n != 0)
    {
        str[i++] = abs(n % 10) + '0';
        n = n / 10;
    }
    if (sign)
        str[i++] = '-';
    str[i] = '\0';
    ft_strrev(str);
    return (str);
}