/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandric <aandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:59:52 by aandric           #+#    #+#             */
/*   Updated: 2022/01/20 16:44:17 by aandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_list **stack_a)
{
	t_list	*temp;

	temp = (*stack_a)->next;
	(*stack_a)->next = (*stack_a)->next->next;
	temp -> next = *stack_a;
	*stack_a = temp;
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_list **stack_b)
{
	t_list	*temp;

	temp = (*stack_b)->next;
	(*stack_b)->next = (*stack_b)->next->next;
	temp->next = *stack_b;
	*stack_b = temp;
	write(1, "sb\n", 3);
}

void	ft_swap_s(t_list **stack_a, t_list **stack_b)
{
	ft_swap_a(stack_a);
	ft_swap_b(stack_b);
	write(1, "sr\n", 3);
}
