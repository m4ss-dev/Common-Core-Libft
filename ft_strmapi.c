/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydames <ydames@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 04:53:07 by ydames            #+#    #+#             */
/*   Updated: 2026/11/20 06:17:46 by ydames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*chnd;

	if (!s || !f)
		return (NULL);
	chnd = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!chnd)
		return (NULL);
	i = 0;
	while (s[i])
	{
		chnd[i] = f(i, s[i]);
		i++;
	}
	chnd[i] = '\0';
	return (chnd);
}
