/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:43:36 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/14 19:24:23 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**_browse_words(char *s, char c, char ***res, int max) 
{
	int		is_word;
	int		word_count;
	char	*beginning;

	while (word_count < max)
	{
		if (*s != c && !is_word)
		{
			is_word = 1;
			beg = s;
		}
		else if ((*s == c || !*s) && is_word)
		{
			is_word = 0;
			res[word_count++] = ft_calloc(s - beg + 1, 1);
			if (!res)
				return (_free_str_arr(res, max));
		}
		s++;
	}
}
char	**ft_split(char const *s, char c)
{
	int		max;
	char	**res;

	max = _count_words(s, c);
	res = 0;
	res = ft_calloc(max + 1, sizeof(char *));
	if (!res)
		return (_free_str_arr(&res, max));
	return (_browse_words(s, c, &res, max));
}
