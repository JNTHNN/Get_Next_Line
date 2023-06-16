# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grmortel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 14:55:10 by grmortel          #+#    #+#              #
#    Updated: 2023/02/26 16:00:42 by grmortel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRCS = open.c \ft_putstr.c \number.c \error.c

MAIN = main.c

$(NAME):
		cc $(CFLAGS) -o $(NAME) $(MAIN) $(SRCS)

CFLAGS = -Wall -Wextra -Werror

all = $(NAME)

fclean:
		rm -f $(NAME)
