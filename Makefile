# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panguyen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/16 12:48:29 by panguyen          #+#    #+#              #
#    Updated: 2020/06/29 07:18:57 by psngyn           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c \
       ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar.c \
       ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
       ft_split.c ft_strchr.c ft_strcpy.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
       ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnew.c ft_strnstr.c \
       ft_strrchr.c ft_strtrim.c ft_substr.c ft_swap.c ft_tolower.c ft_toupper.c \

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
	ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c 

OBJS = $(SRCS:.c=.o)

OBJS_B = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) libft.h
	@ar -rcs $(NAME) $(OBJS)
	@ranlib $(NAME)

%.o: %.c
	@gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	@rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

bonus: $(OBJS) $(OBJS_B)
	@ar -rcs $(NAME) $(OBJS) $(OBJS_B)

.PHONY: all clean fclean re
