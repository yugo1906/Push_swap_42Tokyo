NAME		=	push_swap
CC			=	gcc
CFLAGS = -Wall -Wextra -Werror
LISTDIR = list_func_utils
PSCMDDIR = push_swap_cmd
PSSORTDIR = push_swap_sort
SRCS		=	main.c \
					ps_atoi.c \
					program_end.c \
					$(LISTDIR)/ps_lstnew.c \
					$(PSCMDDIR)/swap.c \
					$(PSCMDDIR)/push.c \
					$(PSCMDDIR)/rotate.c \
					$(PSCMDDIR)/reverse_rotate.c \
					$(PSSORTDIR)/sort_two.c \
					$(PSSORTDIR)/sort_three.c \
					$(PSSORTDIR)/sort_four.c \
					$(PSSORTDIR)/sort_five.c \
					$(PSSORTDIR)/sort_any.c \
					coordinate_compression/coordinate_compression.c
OBJS		=	${SRCS:%.c=%.o}
LIBFTDIR =	./libft
PRINTFDIR	=	./include_printf

all: ${NAME}

${NAME}: ${OBJS} push_swap.h
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
