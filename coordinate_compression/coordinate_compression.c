/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:36:54 by yughoshi          #+#    #+#             */
/*   Updated: 2023/03/05 10:32:34 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	coordinate_compression(t_node **stack_a, t_node **head_a)
{
	t_node	*target;
	size_t	i;

	target = *stack_a;
	while (target)
	{
		i = 0;
		while (*stack_a)
		{
			if (target->num >= (*stack_a)->num)
			{
				i++;
				target->rank = i;
			}
			*stack_a = (*stack_a)->next;
		}
		*stack_a = *head_a;
		target = target->next;
	}
	*stack_a = *head_a;
	// while (*stack_a)
	// {
	// 	*stack_a = (*stack_a)->next;
	// }
	// *stack_a = *head_a;
}
