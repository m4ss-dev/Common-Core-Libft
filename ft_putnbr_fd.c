/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydames <ydames@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 18:01:01 by m4ss              #+#    #+#             */
/*   Updated: 2026/11/17 08:12:03 by ydames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <unistd.h>

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == INT_MIN)
	{
		ft_putstr_fd("-2147483647", 1);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, 1);
		ft_putnbr_fd(nb % 10, 1);
	}
	else
		ft_putchar_fd(nb + '0', 1);
}

// int	main(void)
// {
// 	ft_putnbr_fd('A\n', 1);
// 	return (0);
// }
