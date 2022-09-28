/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandric <aandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:09:52 by aandric           #+#    #+#             */
/*   Updated: 2022/01/20 14:43:45 by aandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_list **stack_a)
{
	t_list	*temp;

	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstlast(*stack_a)->next = temp;
	temp->next = NULL;
	write(1, "ra\n", 3);
}

void	ft_rotate_b(t_list **stack_b)
{
	t_list	*temp;

	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_lstlast(*stack_b)->next = temp;
	temp->next = NULL;
	write(1, "rb\n", 3);
}

void	ft_rotate_r(t_list **stack_a, t_list **stack_b)
{
	ft_rotate_a(stack_a);
	ft_rotate_a(stack_b);
	write(1, "rr\n", 3);
}
