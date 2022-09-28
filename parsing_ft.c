/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandric <aandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:51:53 by aandric           #+#    #+#             */
/*   Updated: 2022/02/02 16:56:51 by aandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_int(char **data)
{
	int	i;

	i = 1;
	while (data[i])
	{
		if ((ft_atoi(data[i]) == -1) && (ft_strlen(data[i]) > 2))
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_is_digit(char **data)
{
	int	i;
	int	j;

	i = 1;
	while (data[i])
	{
		j = 0;
		while (data[i][j])
		{
			if (data[i][j] == '-' && ft_strlen(data[i]) < 2)
				return (0);
			if (data[i][j] == '-' && j != 0)
				return (0);
			if (!(data[i][j] >= '0' && data[i][j] <= '9') && data[i][j] != '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_unique(t_list **stack_a)
{
	t_list	*compared;
	t_list	*start;

	start = *stack_a;
	compared = *stack_a;
	while (*stack_a)
	{
		compared = (*stack_a)->next;
		while (compared)
		{
			if ((*stack_a)->content == compared->content)
			{
				*stack_a = start;
				return (0);
			}
			compared = compared->next;
		}
		*stack_a = (*stack_a)->next;
	}
	*stack_a = start;
	return (1);
}

int	ft_parsing(char **data, t_list **stack_a)
{
	if (!ft_is_digit(data))
		return (0);
	if (!ft_is_int(data))
		return (0);
	if (!ft_is_unique(stack_a))
		return (0);
	return (1);
}
