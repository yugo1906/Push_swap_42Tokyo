/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:47:37 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/26 19:21:46 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_case1(t_node *hd_a, t_node *st_a, t_node *hd_b, t_node *st_b)
{
	pb(&hd_a, &st_a, &hd_b, &st_b);
	sort_three(hd_a, st_a);
	pa(&hd_b, &st_b, &hd_a, &st_a);
}

static void	sort_case2(t_node *hd_a, t_node *st_a, t_node *hd_b, t_node *st_b)
{
	sa(&st_a, &hd_a);
	pb(&hd_a, &st_a, &hd_b, &st_b);
	sort_three(hd_a, st_a);
	pa(&hd_b, &st_b, &hd_a, &st_a);
}

static void	sort_case3(t_node *hd_a, t_node *st_a, t_node *hd_b, t_node *st_b)
{
	ra(&st_a, &hd_a);
	ra(&st_a, &hd_a);
	pb(&hd_a, &st_a, &hd_b, &st_b);
	sort_three(hd_a, st_a);
	pa(&hd_b, &st_b, &hd_a, &st_a);
}

static void	sort_case4(t_node *hd_a, t_node *st_a, t_node *hd_b, t_node *st_b)
{
	rra(&st_a, &hd_a);
	pb(&hd_a, &st_a, &hd_b, &st_b);
	sort_three(hd_a, st_a);
	pa(&hd_b, &st_b, &hd_a, &st_a);
}

void	sort_four(t_node *hd_a, t_node *st_a, t_node *hd_b, t_node *st_b)
{
	int	num_1;
	int	num_2;
	int	num_3;
	int	num_4;

	num_1 = st_a->num;
	num_2 = st_a->next->num;
	num_3 = st_a->next->next->num;
	num_4 = st_a->next->next->next->num;
	if (num_1 < num_2 && num_1 < num_3 && num_1 < num_4)
		sort_case1(hd_a, st_a, hd_b, st_b);
	else if (num_2 < num_1 && num_2 < num_3 && num_2 < num_4)
		sort_case2(hd_a, st_a, hd_b, st_b);
	else if (num_3 < num_1 && num_3 < num_2 && num_3 < num_4)
		sort_case3(hd_a, st_a, hd_b, st_b);
	else if (num_4 < num_1 && num_4 < num_2 && num_4 < num_3)
		sort_case4(hd_a, st_a, hd_b, st_b);
}
