/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:23:45 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/21 08:52:48 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_node **stack, t_node **head)
{
	size_t	i;

	*stack = *head;
	if (*stack && (*stack)->next)
	{
		i = 0;
		while ((*stack)->next)
		{
			*stack = (*stack)->next;
			i++;
		}
		(*stack)->next = *head;
		*stack = *head;
		*head = (*stack)->next;
		*stack = *head;
		while (i > 0)
		{
			*stack = (*stack)->next;
			i--;
		}
		(*stack)->next = NULL;
	}
}

void	ra(t_node **stack, t_node **head)
{
	*stack = *head;
	if (*stack && (*stack)->next)
	{
		rotate(stack, head);
		write(1, "ra\n", 3);
		*stack = *head;
	}
}

void	rb(t_node **stack, t_node **head)
{
	*stack = *head;
	if (*stack && (*stack)->next)
	{
		rotate(stack, head);
		write(1, "rb\n", 3);
		*stack = *head;
	}
}

void	rr(t_node **st_a, t_node **head_a, t_node **st_b, t_node **head_b)
{
	*st_a = *head_a;
	*st_b = *head_b;
	if (*st_a && (*st_a)->next && (*st_b) && (*st_b)->next)
	{
		rotate(st_a, head_a);
		rotate(st_b, head_b);
		write(1, "rr\n", 3);
		*st_a = *head_a;
		*st_b = *head_b;
	}
}
