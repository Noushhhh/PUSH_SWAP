/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandric <aandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:59:27 by aandric           #+#    #+#             */
/*   Updated: 2022/02/04 14:12:39 by aandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **data)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	stack_b = NULL;
	i = 1;
	if (ac < 2)
		return (0);
	while (i < ac)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(data[i])));
		i++;
	}
	if (!ft_parsing(data, &stack_a))
	{
		write(2, "Error\n", 7);
		ft_lstclear(&stack_a);
		return (0);
	}
	push_swap(&stack_a, &stack_b, ac);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
