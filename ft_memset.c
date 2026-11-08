/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydames <ydames@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 20:42:43 by ydames            #+#    #+#             */
/*   Updated: 2026/11/05 02:21:26 by ydames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// ptr = pointeur generique / int c =  valeur de la zone memoire / n =  taille

void	*memset(void *ptr, int c, size_t n)
{
	unsigned char tmp;

	while (n > 0)
	{

        *ptr = (unsigned char)c;
	}
	return (ptr);
}