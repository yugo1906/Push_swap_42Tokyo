# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 15:59:44 by yughoshi          #+#    #+#              #
#    Updated: 2023/03/06 09:15:24 by yughoshi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
CFLAGS	=	-Wall -Wextra -Werror
SRCS	=	ft_printf.c \
			utils_ft_printf.c
OBJS	=	$(SRCS:.c=.o)

$(NAME):	$(OBJS)
	ar rcs $@ $^

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re
