/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:23:42 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/21 08:52:29 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	reverse_rotate(void)
// {
// }

void	rra(t_node **stack, t_node **head)
{
	size_t	i;

	i = 0;
	*stack = *head;
	if (*stack && (*stack)->next)
	{
		// 最後のnodeを特定する
		while ((*stack)->next)
		{
			*stack = (*stack)->next;
			i++;
		}
		// 最後のnodeが1番目のnodeを指す
		(*stack)->next = *head;
		*head = *stack;
		while (i > 0)
		{
			*stack = (*stack)->next;
			i--;
		}
		(*stack)->next = NULL;
		*stack = *head;
		write(1, "rra\n", 4);
	}
}

// void	rrb(void)
// {
// }

// void	rrr(void)
// {
// }
