# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panguyen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 14:36:14 by panguyen          #+#    #+#              #
#    Updated: 2020/03/11 15:55:00 by panguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) libft.h
	@ar -rcs $(NAME) $(OBJS)
	@ranlib $(NAME)

%.o: %.c
	@gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
