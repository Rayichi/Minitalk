# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yfrancoi <yfrancoi@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 09:22:56 by yfrancoi          #+#    #+#              #
#    Updated: 2022/01/24 09:22:56 by yfrancoi         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = ft_lstmap.c ft_lstnew.c ft_lstadd_front.c \
	ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c\
	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isalnum.c \
	ft_isdigit.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
	ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_itoa.c ft_split.c ft_memchr.c ft_strmapi.c \
	ft_strjoin.c ft_substr.c ft_striteri.c ft_strtrim.c\
	ft_pow.c

SRC_DIR = src/

GNL = get_next_line.c get_next_line_utils.c

GNL_DIR = gnl/

FTPRINTF = ft_printf.c ft_printf_utils.c ft_putnbr_base.c

FTPRINTF_DIR = ft_printf/

OBJS = ${addprefix ${SRC_DIR}, ${SRC:.c=.o}} \
	${addprefix ${GNL_DIR}, ${GNL:.c=.o}} \
	${addprefix ${FTPRINTF_DIR}, ${FTPRINTF:.c=.o}} \

OBJS_DIR = obj/

OBJ = ${addprefix ${OBJS_DIR}, ${OBJS}}\


obj/%.o: %.c includes/libft.h Makefile 
	${CC} ${FLAGS} -I ./includes -c $< -o $@

all: ${NAME}

$(NAME): ${OBJ}
	ar r ${NAME} ${OBJ}

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean
