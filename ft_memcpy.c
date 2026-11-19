/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydames <ydames@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:49:19 by m4ss              #+#    #+#             */
/*   Updated: 2026/11/19 07:33:40 by ydames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	const unsigned char	*tmp;
	unsigned char		*tmp2;

	tmp = source;
	tmp2 = destination;
	while (size > 0)
	{
		*tmp2 = *tmp;
		tmp++;
		tmp2++;
		size--;
	}
	return (destination);
}
