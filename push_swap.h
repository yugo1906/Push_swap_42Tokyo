/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:24:08 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/21 09:10:53 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define FD_2 2

# include "./include_printf/ft_printf.h"
# include "./libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				num;
	struct s_node	*next;
}					t_node;

int					ps_atoi(const char *str);
void				put_error_and_exit(void);
t_node				*ps_lstnew(void);
void				sa(t_node **stack, t_node **head);
void				sb(t_node **stack, t_node **head);
void				ss(t_node **st_a, t_node **head_a, t_node **st_b,
						t_node **head_b);
void				pa(t_node **head_a, t_node **head_b);
void				pb(t_node **head_b, t_node **head_a);
void				ra(t_node **stack, t_node **head);
void				rb(t_node **stack, t_node **head);
void				rotate(t_node **stack, t_node **head);
void				rr(t_node **st_a, t_node **head_a, t_node **st_b,
						t_node **head_b);
void				rra(t_node **stack, t_node **head);
void				reverse_rotate(t_node **stack, t_node **head);
void				rra(t_node **stack, t_node **head);
void				rrb(t_node **stack, t_node **head);
void				rrr(t_node **st_a, t_node **head_a, t_node **st_b,
						t_node **head_b);

#endif
