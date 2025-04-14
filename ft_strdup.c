/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:17:43 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/14 18:01:40 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*res;
	size_t	size;

	res = 0;
	size = 1 + ft_strlen(str);
	res = (char *) ft_calloc(size, 1);
	if (!res)
		return (NULL);
	if (ft_strlcpy(res, str, size) == size - 1)
		return (res);
	return (NULL);
}
