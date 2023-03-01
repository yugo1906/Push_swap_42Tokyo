/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_any.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:47:09 by yughoshi          #+#    #+#             */
/*   Updated: 2023/03/01 09:45:36 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	get_max_rank_digits(int max_rank)
{
	size_t	max_rank_digits;

	max_rank_digits = 1;
	while (max_rank / 10)
	{
		max_rank_digits++;
	}
	return (max_rank_digits);
}

size_t	get_max_rank(t_node **hd_a, t_node **st_a)
{
	size_t	max_rank;

	max_rank = 0;
	while (*st_a)
	{
		if ((*st_a)->rank > max_rank)
			max_rank = (*st_a)->rank;
		(*st_a) = (*st_a)->next;
	}
	*st_a = *hd_a;
	return (max_rank);
}

bool	check_rotation(size_t count, int *argc)
{
	size_t	check;
	int		rank_half_len;

	rank_half_len = *argc / 2;
	if (count <= rank_half_len)
		return (true);
	else
		return (false);
}

void	radix_sort(t_node **hd_a, t_node **st_a, t_node **hd_b, size_t *point,
		int *argc)
{
	t_node	**st_b;
	size_t	max_rank;
	size_t	max_rank_digits;
	size_t	rank_count;
	size_t	count;
	int		tmp_argc;

	st_b = hd_b;
	count = 0;
	while (*st_a)
	{
		count++;
		if ((*st_a)->rank == *point)
		{
			*point = *point + 1;
			break ;
		}
		*st_a = (*st_a)->next;
	}
	*st_a = *hd_a;
	if (check_rotation(count, argc))
	{
		while (--count)
		{
			ra(&*st_a, &*hd_a);
		}
		pb(&*hd_a, &*st_a, &*hd_b, &*st_b);
		*argc = *argc - 1;
	}
	else
	{
		tmp_argc = (*argc + 1) - count;
		while (tmp_argc-- > 0)
		{
			rra(&*st_a, &*hd_a);
		}
		pb(&*hd_a, &*st_a, &*hd_b, &*st_b);
		*argc = *argc - 1;
	}
}

void	sort_any(int argc, t_node *hd_a, t_node *st_a, t_node *hd_b)
{
	t_node	*st_b;
	size_t	max_rank;
	size_t	max_rank_digits;
	size_t	point;

	point = 0;
	while (st_a)
	{
		radix_sort(&hd_a, &st_a, &hd_b, &point, &argc);
		st_a = hd_a;
	}
	st_a = hd_a;
	st_b = hd_b;
	while (point--)
	{
		pa(&hd_b, &st_b, &hd_a, &st_a);
		if (st_b)
			st_b = st_b->next;
	}
}
