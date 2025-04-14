/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:19:00 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/14 18:40:34 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	beg;
	unsigned int	end;
	unsigned int	len;
	char			*res;

	len = ft_strlen(s1);
	beg = 0;
	while (ft_strchr(set, s1[beg]))
		beg++;
	end = 0;
	while (ft_strchr(set, s1[len - end]))
		end++;
	res = 0;
	res = ft_calloc(len - beg - end + 2, 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + beg, len - beg - end + 2);
	return (res);
}
