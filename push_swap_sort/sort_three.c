/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:47:21 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/26 17:42:17 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_case1(t_node *head, t_node *stack)
{
	int	top_num;
	int	middle_num;
	int	bottom_num;

	top_num = stack->num;
	middle_num = stack->next->num;
	bottom_num = stack->next->next->num;
	if (middle_num < bottom_num && top_num < bottom_num)
	{
		sa(&stack, &head);
	}
	else if (middle_num > bottom_num && top_num > bottom_num)
	{
		sa(&stack, &head);
		rra(&stack, &head);
	}
	else if (middle_num < bottom_num && top_num > bottom_num)
	{
		ra(&stack, &head);
	}
}

void	sort_case2(t_node *head, t_node *stack)
{
	int	top_num;
	int	middle_num;
	int	bottom_num;

	top_num = stack->num;
	middle_num = stack->next->num;
	bottom_num = stack->next->next->num;
	if (middle_num > bottom_num && top_num < bottom_num)
	{
		sa(&stack, &head);
		ra(&stack, &head);
	}
	else if (middle_num > bottom_num && top_num > bottom_num)
	{
		rra(&stack, &head);
	}
}

void	sort_three(t_node *head, t_node *stack)
{
	int	top_num;
	int	middle_num;

	top_num = stack->num;
	middle_num = stack->next->num;
	if (top_num > middle_num)
	{
		sort_case1(head, stack);
	}
	else if (top_num < middle_num)
	{
		sort_case2(head, stack);
	}
}