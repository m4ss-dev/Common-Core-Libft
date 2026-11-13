/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m4ss <m4ss@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:17:37 by m4ss              #+#    #+#             */
/*   Updated: 2026/11/11 17:37:45 by m4ss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *tmp;
    const unsigned char *tmp2;

    tmp = s1;
    tmp2 = s2;
	i = 0;
	while (i < n)
	{
		if (tmp[i] != tmp2[i])
		{
			return (tmp[i] - tmp2[i]);
		}
		i++;
	}
	return (0);
}