/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:53:42 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/08 17:18:17 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memchr(const void *s1, const void *s2, size_t n)
{
    return(ft_strncmp((const unsigned char *) s1,
                      (const unsigned char *) s2, n));
}
