/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:24:45 by lucorrei          #+#    #+#             */
/*   Updated: 2025/05/10 18:11:42 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

void	ft_toupper_iter(unsigned int i, char *c)
{
	if (!c)
		return ;
	(void) i;
	*c = ft_toupper(*c);
}

char	*prepend(short formatting)
{
	char	*to_prepend;

	to_prepend = 0;
	if (HEX_SIGNAL & formatting)
	{
		to_prepend = ft_strjoin("0x", to_prepend);
	}
	if (IS_NEG & formatting)
	{
		to_prepend = ft_strjoin_free_second("-", to_prepend);
	}
	else if (NUMBER_PLUS & formatting)
	{
		to_prepend = ft_strjoin_free_second("+", to_prepend);
	}
	else if (NUMBER_SPACE & formatting)
	{
		to_prepend = ft_strjoin_free_second(" ", to_prepend);
	}
	return (to_prepend);
}

char	*align_left(t_format *item)
{
	char	*res;
	char	filler;
	int		difference;

	if (item->size >= item->min)
		return (item->string);
	filler = ' ';
	res = ft_calloc(item->min, sizeof(*res));
	if (!res)
	{
		free(item->string);
		return (NULL);
	}
	difference = item->min - item->size;
	ft_memcpy(res, item->string, item->size);
	ft_memset(res + item->size, filler, difference);
	item->size = item->min;
	free(item->string);
	return (res);
}

char	*align_right(t_format *item)
{
	char	*res;
	char	filler;
	int		difference;

	if (item->size >= item->min)
		return (item->string);
	if ((IS_NEG | NUMBER_PLUS | NUMBER_SPACE) & item->formatting
		&& ZERO_PAD & item->formatting)
		item->min -= 1;
	if (HEX_SIGNAL & item->formatting && ZERO_PAD & item->formatting)
		item->min -= 2;
	if (ZERO_PAD & item->formatting)
		filler = '0';
	else
		filler = ' ';
	res = ft_calloc(item->min + 1, sizeof(*res));
	if (!res)
	{
		free(item->string);
		return (NULL);
	}
	difference = item->min - item->size;
	ft_memset(res, filler, difference);
	ft_memcpy(res + difference, item->string, item->size);
	item->size = item->min;
	free(item->string);
	return (res);
}

void	handle_max(t_format *item)
{
	char	*res;
	char	*temp;

	if (item->formatting & IS_NUMERIC)
		return ;
	res = 0;
	res = ft_calloc(item->max + 1, 1);
	if (!res)
	{
		free(item->string);
		return ;
	}
	ft_memcpy(res, item->string, item->max);
	temp = item->string;
	item->string = res;
	item->size = item->max;
	free(temp);
}
