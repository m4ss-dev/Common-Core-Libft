/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydames <ydames@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 02:11:13 by ydames            #+#    #+#             */
/*   Updated: 2026/11/08 02:17:57 by ydames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>

int	isalnum(int c);
void	ft_bzero(void *s, size_t n);
int	ft_isalpha(int c);
int	isascii(int c);
int	ft_isdigit(int c);
int	isprint(int c);
void	*memset(void *ptr, int c, size_t n);
char *ft_strchr(const char *s, int c);
size_t	strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *c);
int strcmp(const char *s1, const char *s2);
char	*ft_strrchr(const char *str, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif