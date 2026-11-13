/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m4ss <m4ss@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:21:55 by m4ss              #+#    #+#             */
/*   Updated: 2026/11/11 17:41:14 by m4ss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
    const unsigned char *tmp;

    tmp = s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
		{
			return ((void *)&tmp[i]);
		}
		i++;
	}
    return(NULL);
}