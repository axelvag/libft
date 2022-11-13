/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 11:55:07 by avaganay          #+#    #+#             */
/*   Updated: 2022/11/13 14:05:55 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    size_t i;

    i = 0;
    str = ft_strdup(s);
    if (!str)
        return (NULL);
    while (str[i])
    {
        str[i] = (*f)(i,str[i]);
        i++;
    }
    return (str);
}