/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:23:45 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/19 12:53:03 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_node **stack, t_node **head)
{
	size_t	i;

	*stack = *head;
	if (!((*stack) == NULL) && !((*stack)->next == NULL))
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
		while (!(i <= 0))
		{
			*stack = (*stack)->next;
			i--;
		}
		(*stack)->next = NULL;
		write(1, "ra\n", 3);
	}
}

void	rb(t_node **stack, t_node **head)
{
	size_t i;

	*stack = *head;
	if (!((*stack) == NULL) && !((*stack)->next == NULL))
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
		while (!(i <= 0))
		{
			*stack = (*stack)->next;
			i--;
		}
		(*stack)->next = NULL;
		write(1, "rb\n", 3);
	}
}
