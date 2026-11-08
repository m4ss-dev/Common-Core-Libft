/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydames <ydames@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 01:19:56 by ydames            #+#    #+#             */
/*   Updated: 2026/11/08 02:42:11 by ydames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*occ;

	i = 0;
	occ = NULL;
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			occ = (char *)&str[i];
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return((char *)&str[i]);
	}
	
	return (occ);
}

int	main(void)
{
	char s[] = "erreur pas reussi";
	printf("%s", ft_strrchr(s, 'r'));
}