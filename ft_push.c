/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandric <aandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:59:20 by aandric           #+#    #+#             */
/*   Updated: 2022/01/26 14:00:47 by aandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (*stack_b)
	{
		temp = (*stack_b)->next;
		ft_lstadd_front(stack_a, *stack_b);
		*stack_b = temp;
		write(1, "pa\n", 3);
	}
}

void	ft_push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (*stack_a)
	{
		temp = (*stack_a)->next;
		ft_lstadd_front(stack_b, *stack_a);
		*stack_a = temp;
		write(1, "pb\n", 3);
	}
}
