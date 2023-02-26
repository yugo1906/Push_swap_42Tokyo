/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:47:21 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/23 02:18:33 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_case1(t_node *head, t_node *stack)
{
	int	top_num;
	int	middle_num;
	int	bottom_num;

	top_num = stack->num;
	middle_num = stack->next->num;
	bottom_num = stack->next->next->num;
	// case1
	if (middle_num < bottom_num && top_num < bottom_num)
	{
		sa(&stack, &head);
	}
	// case2
	else if (middle_num > bottom_num && top_num > bottom_num)
	{
		sa(&stack, &head);
		rra(&stack, &head);
	}
	// case3
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
	// case4
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
	// case1~3
	if (top_num > middle_num)
	{
		sort_case1(head, stack);
	}
	else if (top_num < middle_num)
	{
		sort_case2(head, stack);
	}
	// case4~5
}

/*
- 1番目と2番目
- 2番目と3番目
- 1番目と3番目

### case1
- 1番 > 2番
- 2番 < 3番
- 1番 < 3番

### case2
- 1番 > 2番
- 2番 > 3番
- 1番 > 3番

### case3
- 1番 > 2番
- 2番 < 3番
- 1番 > 3番

### case4
- 1番 < 2番
- 2番 > 3番
- 1番 < 3番

### case5
- 1番 < 2番
- 2番 > 3番
- 1番 > 3番

*/
