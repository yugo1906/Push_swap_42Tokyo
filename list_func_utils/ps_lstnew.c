/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:56:13 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/22 06:51:58 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	all_stack_free(t_node **stack)
{
	t_node	*free_tmp;

	if (*stack)
	{
		while (*stack)
		{
			free_tmp = (*stack)->next;
			free(*stack);
			*stack = free_tmp;
		}
	}
	put_error_and_exit();
}

t_node	*ps_lstnew(t_node **stack)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(1 * sizeof(t_node));
	if (new_node == NULL)
	{
		all_stack_free(stack);
	}
	new_node->num = 0;
	new_node->next = NULL;
	return (new_node);
}
