/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m4ss <m4ss@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:04:53 by m4ss              #+#    #+#             */
/*   Updated: 2026/11/11 17:38:21 by m4ss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char *tmp = src;
	unsigned char *tmp2 = dest;

	if (dest < src)
		ft_memcpy(dest, src, n);
	else
		while (n > 0)
		{
			n--;
			tmp2[n] = tmp[n];
		}
    return(dest);
}