# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obenhamm <obenhamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 20:01:30 by obenhamm          #+#    #+#              #
#    Updated: 2024/11/04 11:10:11 by obenhamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ft_atoi.c \
       ft_isalnum.c \
       ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c  \
       ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c  \
       ft_strlcat.c ft_strlcpy.c ft_strlen.c  ft_strncmp.c \
       ft_tolower.c ft_toupper.c ft_strchr.c ft_putnbr_fd.c\
       ft_strrchr.c  ft_strnstr.c ft_strdup.c ft_calloc.c ft_putchar_fd.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all 