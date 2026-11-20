/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydames <ydames@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 01:32:31 by ydames            #+#    #+#             */
/*   Updated: 2026/11/20 04:28:53 by ydames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*strim;

	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	i = 0;
	k = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	strim = malloc((j - i) + 1);
	if (!strim)
		return (NULL);
	while (i < j)
		strim[k++] = s1[i++];
	strim[k] = '\0';
	return (strim);
}
