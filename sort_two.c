/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:47:17 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/22 23:10:31 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_node *head_a, t_node *stack_a)
{
	if (head_a->num > stack_a->next->num)
	{
		sa(&stack_a, &head_a);
		all_stack_free(&stack_a);
		exit(EXIT_SUCCESS);
	}
	else
	{
		all_stack_free(&stack_a);
		exit(EXIT_SUCCESS);
	}
}
