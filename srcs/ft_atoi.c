/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:53:42 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/08 17:18:17 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int		ft_atoi(const char *str)
{
    int	res;
    int	sign;

    sign = 1;
    res = 0;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while (ft_isdigit(*str))
    {
        res *= 10;
        res += *str++ - '0';
    }
    return (sign * res);
}
