/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:40:17 by avaganay          #+#    #+#             */
/*   Updated: 2022/11/13 14:40:45 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        *(char*)(b + i) = (char)c;
        i++;
    }
    return (b);
}