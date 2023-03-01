/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:56:13 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/28 09:38:21 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ps_lstnew(t_node **stack)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(1 * sizeof(t_node));
	if (new_node == NULL)
	{
		all_stack_free(stack);
		put_error_and_exit();
	}
	new_node->num = 0;
	new_node->rank = 0;
	new_node->next = NULL;
	return (new_node);
}
