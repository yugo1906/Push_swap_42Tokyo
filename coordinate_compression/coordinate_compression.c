/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:36:54 by yughoshi          #+#    #+#             */
/*   Updated: 2023/03/01 09:35:08 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	coordinate_compression(t_node **stack_a, t_node **head_a)
{
	t_node	*target;

	target = *stack_a;
	while (target)
	{
		while (*stack_a)
		{
			if (target->num > (*stack_a)->num)
				target->rank++;
			*stack_a = (*stack_a)->next;
		}
		*stack_a = *head_a;
		target = target->next;
	}
	*stack_a = *head_a;
	while (*stack_a)
	{
		*stack_a = (*stack_a)->next;
	}
	*stack_a = *head_a;
}
