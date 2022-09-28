/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandric <aandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:43:28 by aandric           #+#    #+#             */
/*   Updated: 2022/02/02 16:54:16 by aandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = NULL;
	if (lst != NULL)
	{
		if (*lst != NULL)
		{
			last = ft_lstlast(*lst);
			last -> next = new;
		}
		else
			*lst = new;
	}
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

void	ft_lstclear(t_list **lst)
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	if (!lst)
		return ;
	while (current)
	{
		next = current -> next;
		free(current);
		current = next;
	}
	*lst = NULL;
}

t_list	*ft_lstnew(int content)
{
	t_list	*newlist;

	newlist = malloc(sizeof(t_list));
	if (!newlist)
		return (NULL);
	newlist -> content = content;
	newlist -> next = NULL;
	return (newlist);
}

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
