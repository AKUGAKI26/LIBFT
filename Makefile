# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obenhamm <obenhamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 20:01:30 by obenhamm          #+#    #+#              #
#    Updated: 2024/11/11 14:08:18 by obenhamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

FUNCTIONS = ft_atoi.c ft_strtrim.c ft_split.c \
            ft_isalnum.c ft_strmapi.c ft_itoa.c \
            ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
            ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
            ft_memmove.c ft_memset.c ft_strjoin.c \
            ft_strlcat.c ft_strlcpy.c ft_strlen.c \
            ft_strncmp.c ft_putstr_fd.c \
            ft_tolower.c ft_toupper.c ft_strchr.c \
            ft_putnbr_fd.c ft_putendl_fd.c ft_striteri.c \
            ft_strrchr.c ft_strnstr.c ft_strdup.c \
            ft_calloc.c ft_putchar_fd.c ft_substr.c

FUNCTIONS_BONUS = ft_lstadd_back_bonus.c ft_lstclear_bonus.c \
                  ft_lstdelone_bonus.c ft_lstadd_front_bonus.c \
                  ft_lstiter_bonus.c ft_lstlast_bonus.c \
                  ft_lstnew_bonus.c ft_lstsize_bonus.c \
                  ft_lstmap_bonus.c
       
OBJS = $(FUNCTIONS:.c=.o)

OBJS_BONUS = $(FUNCTIONS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)

bonus: $(OBJS_BONUS)
		ar -rcs $(NAME) $(OBJS_BONUS)

clean:
		rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.SECONDARY: $(OBJS_BONUS) $(OBJS)
