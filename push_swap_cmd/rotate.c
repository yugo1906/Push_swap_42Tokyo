/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:23:45 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/19 12:51:06 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_node **stack, t_node **head)
{
	size_t	i;

	*stack = *head;
	// if (!((*stack) == NULL) && !((*stack)->next == NULL))
	// 	return ;
	// リストの最後のノードを特定する処理
	if (!((*stack) == NULL) && !((*stack)->next == NULL))
	{
		i = 0;
		while ((*stack)->next)
		{
			*stack = (*stack)->next;
			i++;
		}
		// リストの最後のノードがリストの先頭のnodeを指す処理
		(*stack)->next = *head;
		// リストの先頭のheadがリストの２番目を指し、先頭 == 2番目として扱う処理
		*stack = *head;
		*head = (*stack)->next;
		// (元々先頭だったnodeが最後のノードの場所に移っており、)元々先頭だったnodeのnode->nextがNULLになる処理
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
