/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 23:07:11 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/27 08:23:24 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	get_sign(t_node **st_a, t_node **hd_a, int target)
{
	int	result;

	result = 0;
	while (*st_a && (*st_a)->num != target)
	{
		*st_a = (*st_a)->next;
		result++;
	}
	*st_a = *hd_a;
	return (result);
}

static int	get_target(t_node **st_a, t_node **hd_a)
{
	int	result;

	result = 0;
	result = (*st_a)->num;
	while (*st_a)
	{
		*st_a = (*st_a)->next;
		if (*st_a && result > (*st_a)->num)
		{
			result = (*st_a)->num;
		}
	}
	*st_a = *hd_a;
	return (result);
}

static void	two_pb(t_node **hd_a, t_node **st_a, t_node **hd_b, t_node **st_b)
{
	int	target;
	int	sign;

	target = get_target(st_a, hd_a);
	sign = get_sign(st_a, hd_a, target);
	if (sign == 3 || sign == 4)
	{
		while (*st_a && (*st_a)->num != target)
		{
			rra(st_a, hd_a);
		}
	}
	else
	{
		while (*st_a && (*st_a)->num != target)
		{
			ra(st_a, hd_a);
		}
	}
	pb(hd_a, st_a, hd_b, st_b);
	*st_a = *hd_a;
}

void	sort_five(t_node *hd_a, t_node *st_a, t_node *hd_b, t_node *st_b)
{
	two_pb(&hd_a, &st_a, &hd_b, &st_b);
	two_pb(&hd_a, &st_a, &hd_b, &st_b);
	sort_three(hd_a, st_a);
	pa(&hd_b, &st_b, &hd_a, &st_a);
	pa(&hd_b, &st_b, &hd_a, &st_a);
}
