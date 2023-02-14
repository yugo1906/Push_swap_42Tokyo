### ToDo
# 1.依存するファイル：libft.a, libftprintf.a
# 2.push_swapプログラムのための*.o
# 3. 1と2を一緒にコンパイル→push_swap

NAME		=	push_swap
CC			=	gcc
# todo::メモリーリークのオプションを提出前に外す
# todo::-Wall -Wextra -Werror をcflagsにつける
CFLAGS	= -g -fsanitize=address
# CFLAGS = -Wall -Wextra -Werror
LISTDIR = list_func_utils
PSCMDDIR = push_swap_cmd
SRCS		=	main.c \
					ps_atoi.c \
					put_error_and_exit.c \
					$(LISTDIR)/ps_lstnew.c \
					$(LISTDIR)/ps_lstadd_back.c \
					$(LISTDIR)/ps_lstlast.c \
					$(PSCMDDIR)/swap.c
OBJS		=	${SRCS:%.c=%.o}
LIBFTDIR =	./include_libft
PRINTFDIR	=	./include_printf

all: ${NAME}

${NAME}: ${OBJS}
	make -C $(LIBFTDIR)
	make -C $(PRINTFDIR)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFTDIR)/libft.a $(PRINTFDIR)/libftprintf.a -o $(NAME)

clean:
	make clean -C $(LIBFTDIR)
	make clean -C $(PRINTFDIR)
	rm -f ${OBJS}

fclean:clean
	rm -f ${NAME}

re: fclean $(NAME)

.PHONY: all clean fclean re bonus
