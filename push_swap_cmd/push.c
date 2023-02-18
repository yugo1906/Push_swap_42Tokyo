/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:42:19 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/19 08:35:27 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_node **head_a, t_node **head_b)
{
	t_node	*new_head_a;

	if (*head_a)
	{
		new_head_a = *head_a;
		*head_a = (*head_a)->next;
		if (!(*head_b))
		{
			new_head_a->next = NULL;
			*head_b = new_head_a;
		}
		else
		{
			new_head_a->next = *head_b;
			*head_b = new_head_a;
		}
		write(1, "pa\n", 3);
	}
}

void	pb(t_node **head_b, t_node **head_a)
{
	t_node	*new_head_b;

	if (*head_b)
	{
		new_head_b = *head_b;
		*head_b = (*head_b)->next;
		if (!(*head_a))
		{
			new_head_b->next = NULL;
			*head_a = new_head_b;
		}
		else
		{
			new_head_b->next = *head_a;
			*head_a = new_head_b;
		}
		write(1, "pb\n", 3);
	}
}
