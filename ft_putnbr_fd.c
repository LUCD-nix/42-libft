/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:13:05 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/15 15:44:12 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	n;
	char	to_print;

	n = nb;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n < 10)
	{
		to_print = n + '0';
		write(1, &to_print, 1);
		return ;
	}
	to_print = n % 10 + '0';
	ft_putnbr_fd(n / 10, fd);
	write(fd, &to_print, 1);
}
