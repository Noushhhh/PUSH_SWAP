# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aandric <aandric@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 13:55:07 by aandric           #+#    #+#              #
#    Updated: 2022/01/27 15:46:04 by aandric          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
 
SRCS =	ft_push.c 		\
		ft_reverse.c	\
		ft_rotate.c		\
		ft_swap.c		\
		lst_ft.c		\
		main.c			\
		parsing_ft.c	\
		push_swap.c		\
		utils_ft.c		\

OBJS = ${SRCS:.c=.o}

HEADER = push_swap.h

CMD = gcc
FLAGS = -Wall -Werror -Wextra

%.o: %.c $(HEADER)
	$(CMD) $(FLAGS) -c $< -o $@ 

$(NAME): $(OBJS)
	$(CMD) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)
 
fclean: clean
	rm -rf $(NAME)
 
re: fclean all
 
.PHONY: clean all re fclean