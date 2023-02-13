/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:56:13 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/14 00:34:30 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ps_lstnew(int content)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(1 * sizeof(t_node));
	if (new_node == NULL)
	{
		//ToDo::これまでに確保したnodeすべてをfree:error_all_free()
		return (NULL);
	}
	new_node->num = content;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}
