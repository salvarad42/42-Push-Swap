NAME = push_swap
SRC = ft_check_args.c ft_check_errors.c ft_free.c ft_index_stack.c\
	ft_is_sorted.c ft_make_stack.c ft_radix_sort.c ft_simple_sort.c\
	ft_sort_stack.c push_swap.c ft_push.c ft_swap.c ft_rotate.c\
	ft_reverse.c
OBJS = ${SRC:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror -stdlib=libstdc++
RM = rm -rf
all: ${NAME}
${NAME}: ${OBJS}
		@${MAKE} -C ./libft
		@${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}
clean:
		@${MAKE} -C ./libft fclean
		@${RM} ${OBJS}
fclean: clean
		@${RM} ${NAME}
re: fclean all
.PHONY: all clean fclean re

debug: CFLAGS += -g
debug: ${NAME}