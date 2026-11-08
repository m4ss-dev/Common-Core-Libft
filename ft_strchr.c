/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydames <ydames@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 21:40:20 by ydames            #+#    #+#             */
/*   Updated: 2026/11/07 23:15:07 by ydames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
            return((char *)&s[i]);
		}
    i++;
	}
}
 // CAST  (char *)
int	main(void)
{
	char	s[] = "test,pqpas,oui,toutafait";
	printf("%s\n", ft_strchr(s, ','));
	/*char	*fail;*/
/*
	printf("%s\n", ft_strchr(s, ','););
	/*fail = ft_strchr(s, '@');
	if (fail == NULL)
		printf("could not find ! \n");*/
	return (0);
}
