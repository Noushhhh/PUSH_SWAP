/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandric <aandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:11:51 by aandric           #+#    #+#             */
/*   Updated: 2022/01/20 14:44:35 by aandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_a(t_list **stack_a)
{
	t_list	*start;
	t_list	*end;

	start = *stack_a;
	end = ft_lstlast(*stack_a);
	while (start->next->next)
		start = start->next;
	start->next = NULL;
	end->next = *stack_a;
	*stack_a = end;
	write(1, "rra\n", 4);
}

void	ft_reverse_b(t_list **stack_b)
{
	t_list	*start;
	t_list	*end;

	start = *stack_b;
	end = ft_lstlast(*stack_b);
	while (start->next->next)
		start = start->next;
	start->next = NULL;
	end->next = *stack_b;
	*stack_b = end;
	write(1, "rrb\n", 4);
}

void	ft_reverse_r(t_list **stack_a, t_list **stack_b)
{
	ft_reverse_a(stack_a);
	ft_reverse_b(stack_b);
	write(1, "rrr\n", 4);
}
