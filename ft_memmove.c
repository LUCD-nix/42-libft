/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:41:16 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/14 12:05:31 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*temp_dest;
	char		*temp_src;
	size_t		i;

	temp_dest = (char *) dest;
	temp_src = (char *) src;
	if (src < dest)
	{
		i = n;
		while (--i >= 0)
			temp_dest[i] =  temp_src[i];
	}
	else
	{
		i = -1;
		while (++i < n)
			temp_dest[i] =  temp_src[i];
	}
	return (dest);
}
