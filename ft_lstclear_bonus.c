/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucorrei <lucorrei@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:26:38 by lucorrei          #+#    #+#             */
/*   Updated: 2025/04/16 19:51:06 by lucorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*previous;
	t_list	*next;

	if (!del || !*lst || !lst)
		return ;
	previous = *lst;
	next = (*lst)->next;
	while (next->next != NULL)
	{
		previous = next;
		next = next->next;
		ft_lstdelone(previous, del);
	}
	ft_lstdelone(next, del);
	*lst = NULL;
}

int	main(int argc, char **argv)
