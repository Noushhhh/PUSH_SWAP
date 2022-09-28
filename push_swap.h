/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandric <aandric@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:45:38 by aandric           #+#    #+#             */
/*   Updated: 2022/01/28 18:59:29 by aandric          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}				t_list;

int		ft_atoi(const char *str);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
void	ft_swap_a(t_list **stack_a);
void	ft_swap_b(t_list **stack_b);
void	ft_swap_s(t_list **stack_a, t_list **stack_b);
void	ft_rotate_a(t_list **stack_a);
void	ft_rotate_b(t_list **stack_b);
void	ft_rotate_r(t_list **stack_a, t_list **stack_b);
void	ft_reverse_a(t_list **stack_a);
void	ft_reverse_b(t_list **stack_b);
void	ft_reverse_r(t_list **stack_a, t_list **stack_b);
void	ft_push_a(t_list **stack_a, t_list **stack_b);
void	ft_push_b(t_list **stack_a, t_list **stack_b);
int		ft_strlen(char *str);
int		ft_is_digit(char **data);
int		ft_is_int(char **data);
int		ft_is_unique(t_list **stack_a);
int		ft_parsing(char **data, t_list **stack_a);
int		ft_is_sorted(t_list *stack_a);
void	ft_putindex(t_list **stack_a);
int		push_swap(t_list **stack_a, t_list **stack_b, int ac);
void	push_swap_three(t_list **stack_a);
void	push_swap_four(t_list **stack_a, t_list **stack_b);
void	push_swap_five(t_list **stack_a, t_list **stack_b);
void	push_swap_hundred(t_list **stack_a, t_list **stack_b);

#endif
