/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:53:42 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/08 17:18:17 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
    size_t	i;
    size_t	len_small;
    size_t	len_big;

    if (!*little || !big || !little)
        return (NULL);
    len_small = ft_strlen(little);
    len_big = ft_strlen(big);
    i = 0;
    while (i < len_big - len_small)
    {
        if (!ft_strncmp(big + i, little))
            return (big + i);
        i++;
    }
    return (NULL);
}
