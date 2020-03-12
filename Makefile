# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panguyen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 14:36:14 by panguyen          #+#    #+#              #
#    Updated: 2020/03/11 17:09:57 by panguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_islower.c ft_isprime.c ft_isprint.c ft_isupper.c \
		ft_itoa.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
		ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c \
		ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c \
		ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_revlst.c ft_strcat.c \
		ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
		ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
		ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c \
		ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c \
		ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c \
		ft_swap.c ft_tolower.c ft_toupper.c

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
