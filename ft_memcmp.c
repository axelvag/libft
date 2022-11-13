/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:45:15 by avaganay          #+#    #+#             */
/*   Updated: 2022/11/13 15:06:42 by avaganay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char*)(s1 + i) != *(char*)(s2 + i))
			return (*(char*)(s1 + i) - *(char*)(s2 + i));
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>
int main()
{
    printf("%d",ft_memcmp("Si tu lis t'es gay", "Si tu lis t'es gay", 19));
    printf("\n");
    printf("%d",memcmp("Si tu lis t'es gay", "Si tu lis t'es gay", 19));
    printf("\n");
    printf("\n");
    printf("%d",ft_memcmp("Si tu lis t'es gay", "Si tu lis t'es", 19));
    printf("\n");
    printf("%d",memcmp("Si tu lis t'es gay", "Si tu lis t'es", 19));
    printf("\n");
    printf("\n");
    printf("%d",ft_memcmp("Si tu lis t'es gay", "Si tu lis t'es homo", 19));
    printf("\n");
    printf("%d",memcmp("Si tu lis t'es gay", "Si tu lis t'es homo", 19));
    printf("\n");
    printf("\n");
    printf("%d",ft_memcmp("Si tu liS t'es gay", "Si tu lis t'es gay", 19));
    printf("\n");
    printf("%d",memcmp("Si tu liS t'es gay", "Si tu lis t'es gay", 19));
}