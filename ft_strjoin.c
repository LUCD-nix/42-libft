/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:08:22 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/14 18:36:07 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		total;

	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = 0;
	res = ft_calloc(total, 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, total);
	ft_strlcat(res, s2, total);
	return (res);
}
