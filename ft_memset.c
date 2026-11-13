/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m4ss <m4ss@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 20:42:43 by ydames            #+#    #+#             */
/*   Updated: 2026/11/11 17:31:56 by m4ss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

// ptr = pointeur generique / int c =  valeur de la zone memoire / n =  taille

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
        ((unsigned char *)ptr)[i] = (unsigned char)c;
		i++;
	}

	return (ptr);
}