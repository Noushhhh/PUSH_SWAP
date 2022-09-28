/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandric <aandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:44:36 by aandric           #+#    #+#             */
/*   Updated: 2022/01/27 17:29:41 by aandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_three(t_list **stack_a)
{
	t_list	*next;

	next = (*stack_a)->next;
	if ((*stack_a)->index == 2)
	{
		ft_rotate_a(stack_a);
		if ((*stack_a)->index == 1)
			ft_swap_a(stack_a);
		return ;
	}
	if ((*stack_a)->index == 1)
	{
		if (next->index == 0)
			ft_swap_a(stack_a);
		if (next->index == 2)
			ft_reverse_a(stack_a);
		return ;
	}
	if ((*stack_a)->index == 0)
	{
		ft_reverse_a(stack_a);
		ft_swap_a(stack_a);
		return ;
	}
}

void	push_swap_four(t_list **stack_a, t_list **stack_b)
{
	t_list	*start;
	int		i;

	i = 0;
	start = *stack_a;
	while (i < 1)
	{
		if ((*stack_a)->index == 0)
		{	
			ft_push_b(stack_a, stack_b);
			i++;
		}
		else
			ft_rotate_a(stack_a);
	}
	ft_putindex(stack_a);
	if (!ft_is_sorted(*stack_a))
		push_swap_three(stack_a);
	ft_push_a(stack_a, stack_b);
}

void	push_swap_five(t_list **stack_a, t_list **stack_b)
{
	t_list	*start;
	int		i;

	i = 0;
	start = *stack_a;
	while (i < 2)
	{
		if (((*stack_a)->index == 0) || ((*stack_a)->index == 1))
		{
			ft_push_b(stack_a, stack_b);
			i++;
		}
		else
			ft_rotate_a(stack_a);
	}
	if (ft_is_sorted(*stack_b))
		ft_swap_b(stack_b);
	ft_putindex(stack_a);
	if (!ft_is_sorted(*stack_a))
		push_swap_three(stack_a);
	ft_push_a(stack_a, stack_b);
	ft_push_a(stack_a, stack_b);
}

void	push_swap_hundred(t_list **stack_a, t_list **stack_b)
{
	int	n;
	int	size_stack;

	n = 0;
	while (!ft_is_sorted(*stack_a))
	{
		size_stack = ft_lstsize(*stack_a);
		while (size_stack)
		{
			if (!((*stack_a)->index >> n & 1))
				ft_push_b(stack_a, stack_b);
			else
				ft_rotate_a(stack_a);
			size_stack--;
		}
		size_stack = ft_lstsize(*stack_b);
		while (size_stack)
		{
			ft_push_a(stack_a, stack_b);
			size_stack--;
		}
		n++;
	}
}

int	push_swap(t_list **stack_a, t_list **stack_b, int ac)
{
	ft_putindex(stack_a);
	if (ft_is_sorted(*stack_a))
		return (1);
	if (ac == 4 || ac == 3)
		push_swap_three(stack_a);
	if (ac == 5)
		push_swap_four(stack_a, stack_b);
	if (ac == 6)
		push_swap_five(stack_a, stack_b);
	if (ac > 6)
		push_swap_hundred(stack_a, stack_b);
	return (0);
}
