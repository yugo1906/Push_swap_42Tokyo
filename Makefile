### ToDo
# 1.依存するファイル：libft.a, libftprintf.a
# 2.push_swapプログラムのための*.o
# 3. 1と2を一緒にコンパイル→push_swap

NAME		=	push_swap
CC			=	gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS		=	main.c ps_atoi.c put_error_and_exit.c
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
