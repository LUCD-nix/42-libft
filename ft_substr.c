/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:49:45 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/14 14:02:46 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;
	unsigned int	size;

	size = ft_strlen(s) + 1;
	res = 0;
	res = ft_calloc(len + 1, 1);
	if (!res)
		return (NULL);
	i = 0;
	while (start + i < size && i < len)
	{
		res[i] = s[start + i];
	}
	return (res);
}
