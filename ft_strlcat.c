/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydames <ydames@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 03:42:11 by ydames            #+#    #+#             */
/*   Updated: 2026/11/19 07:42:12 by ydames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	f;

	i = 0;
	f = 0;
	while (dst[i])
	{
		i++;
	}
	while (src[f] != '\0' && i < size)
	{
		dst[i] = src[f];
		f++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}

// int	main(void)
// {
// 	char	buffer[10] = "KooR";
// 	size_t	needed;

// 	needed = strlcat(buffer, ".fr-demo", sizeof buffer);
// 	printf("%s\n", buffer);
// 	printf("taille necessaire : %zu\n", needed);
// 	return (0);
// }
