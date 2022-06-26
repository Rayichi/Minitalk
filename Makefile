NAME = server client

NAME_SERVER = server

NAME_CLIENT = client

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIBFT = libft/libft.a

SRC_SERVER =server.c

SRC_CLIENT = client.c

CLIENT_DIR = src_client/

SERVER_DIR = src_server/

OBJ_SERVER = ${addprefix ${SERVER_DIR}, ${SRC_SERVER:.c=.o}}

OBJ_CLIENT = ${addprefix ${CLIENT_DIR}, ${SRC_CLIENT:.c=.o}}

OBJS_DIR = obj/

OBJS_SERVER = ${addprefix ${OBJS_DIR}, ${OBJ_SERVER}}

OBJS_CLIENT =  ${addprefix ${OBJS_DIR}, ${OBJ_CLIENT}}

OBJ = ${OBJS_SERVER} ${OBJS_CLIENT}

${OBJS_DIR}%.o: %.c includes/minitalk.h Makefile
	@mkdir -p ${OBJS_DIR}
	@mkdir -p ${OBJS_DIR}${CLIENT_DIR}
	@mkdir -p ${OBJS_DIR}${SERVER_DIR}
	${CC} ${FLAGS} -I includes/ -c $< -o $@

all: ${NAME}

$(NAME): ${OBJ}
	make -C ./libft
	${CC} ${FLAGS} -o ${NAME_SERVER} ${OBJS_SERVER} ${LIBFT}
	${CC} ${FLAGS} -o ${NAME_CLIENT} ${OBJS_CLIENT} ${LIBFT}

clean:
	@make clean -C ./libft 
	rm -rf $(OBJ)

fclean: clean
	@make fclean -C ./libft 
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: re all clean fclean