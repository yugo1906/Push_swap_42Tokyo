/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:23:42 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/21 09:02:11 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_node **stack, t_node **head)
{
	size_t	i;

	i = 0;
	*stack = *head;
	if (*stack && (*stack)->next)
	{
		while ((*stack)->next)
		{
			*stack = (*stack)->next;
			i++;
		}
		(*stack)->next = *head;
		*head = *stack;
		while (i > 0)
		{
			*stack = (*stack)->next;
			i--;
		}
		(*stack)->next = NULL;
		*stack = *head;
	}
}

void	rra(t_node **stack, t_node **head)
{
	*stack = *head;
	if (*stack && (*stack)->next)
	{
		reverse_rotate(stack, head);
		write(1, "rra\n", 4);
		*stack = *head;
	}
}

void	rrb(t_node **stack, t_node **head)
{
	*stack = *head;
	if (*stack && (*stack)->next)
	{
		reverse_rotate(stack, head);
		write(1, "rrb\n", 4);
		*stack = *head;
	}
}

void	rrr(t_node **st_a, t_node **head_a, t_node **st_b, t_node **head_b)
{
	*st_a = *head_a;
	*st_b = *head_b;
	if (*st_a && (*st_a)->next && (*st_b) && (*st_b)->next)
	{
		reverse_rotate(st_a, head_a);
		reverse_rotate(st_b, head_b);
		write(1, "rrr\n", 4);
		*st_a = *head_a;
		*st_b = *head_b;
	}
}
