/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:14:28 by avaganay          #+#    #+#             */
/*   Updated: 2022/11/13 13:42:05 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char	*ptr;
	size_t  i;
    size_t  j;

	i = 0;
    j = 0;
	ptr = (char*)malloc(sizeof(*s) * (len + 1));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
        if (i >= start && j < len)
        {
		    ptr[j] = s[i];
            j++;
        }
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}