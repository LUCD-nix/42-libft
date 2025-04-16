/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:53:42 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/16 17:44:48 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	while (*str && ft_strchr("\t\n\v\f\r ", *str))
		str++;
	if (*str == '-' || *str == '+')
	{
		sign -= 2 * (*str == '-');
		str++;
	}
	while (ft_isdigit(*str))
	{
		res *= 10;
		res += *(str++) - '0';
	}
	return (sign * res);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	ft_putnbr_fd(ft_atoi("\000 1"), 1);
	return (0);
}*/
