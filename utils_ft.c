/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_ft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandric <aandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:47:05 by aandric           #+#    #+#             */
/*   Updated: 2022/01/28 19:01:14 by aandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	long int	sign;
	long int	nbr;

	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	nbr = 0;
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	nbr = (nbr * sign);
	if (nbr > 2147483647 || nbr < -2147483648)
		return (-1);
	else
		return ((int)nbr);
}

int	ft_is_sorted(t_list *stack_a)
{
	t_list	*next;

	while (stack_a->next)
	{
		next = stack_a->next;
		if (stack_a->index > next->index)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

void	ft_putindex(t_list **stack_a)
{
	t_list	*temp;
	t_list	*start;
	int		index;

	start = *stack_a;
	while (*stack_a)
	{
		index = 0;
		temp = start;
		while (temp)
		{
			if ((*stack_a)->content > temp->content)
				index++;
			(*stack_a)->index = index;
			temp = temp->next;
		}
		*stack_a = (*stack_a)->next;
	}
	*stack_a = start;
}

t_list	*ft_lstlast(t_list *lst)
{
	int		i;

	i = 0;
	if (!lst)
		return (0);
	while (lst -> next)
	{
		lst = lst -> next;
		i++;
	}
	return (lst);
}
