/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:24:08 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/12 23:16:36 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define FD_2 2

# include "./include_libft/libft.h"
# include "./include_printf/ft_printf.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	struct s_node	*prev;
	int				num;
	struct s_node	*next;
}					t_node;

int					ps_atoi(const char *str);
void				put_error_and_exit(void);

#endif
