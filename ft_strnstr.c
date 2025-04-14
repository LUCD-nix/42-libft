/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:53:42 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/14 12:42:42 by lucorrei         ###   ########.fr       */
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
    while (i < len_big - len_small && n)
    {
        if (!ft_strncmp(big + i, little, len_small))
            return ((char *) (big + i));
        i++;
		n--;
    }
    return (NULL);
}
