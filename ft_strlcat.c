/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:05:36 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/14 12:38:30 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[j] && j < size)
		j++;
	if (j == size)
		return size;
	while (src[i] && i + j + 1 < size)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src) + ft_strlen(dst));
}
