/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:24:08 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/15 08:28:43 by yughoshi         ###   ########.fr       */
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
void				ps_lstadd_back(t_node **lst, t_node *new);
t_node				*ps_lstnew(int content);
t_node				*ps_lstlast(t_node *lst);
void				sa(t_node **stack, t_node **head);
void				sb(t_node **stack, t_node **head);
void				w_swap(t_node **st_a, t_node **head_a, t_node **st_b,
						t_node **head_b);

#endif
