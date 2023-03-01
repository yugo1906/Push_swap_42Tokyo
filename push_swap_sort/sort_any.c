/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_any.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:47:09 by yughoshi          #+#    #+#             */
/*   Updated: 2023/03/01 09:22:54 by yughoshi         ###   ########.fr       */
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

	// ft_printf("point初期値=%d\n", *point);
	st_b = hd_b;
	count = 0;
	// max_rank = get_max_rank(hd_a, st_a);
	// max_rank_digits = get_max_rank_digits(max_rank);
	while (*st_a)
	{
		count++;
		if ((*st_a)->rank == *point)
		{
			// ft_printf("st->rank = %d\n", (*st_a)->rank);
			// ft_printf("point = %d\n", *point);
			// ft_printf("count= %d\n", count);
			*point = *point + 1;
			// ft_printf("*point+1 = %d\n", *point);
			break ;
		}
		// ft_printf("count= %d\n", count);
		// ft_printf("point= %d\n", *point);
		*st_a = (*st_a)->next;
	}
	*st_a = *hd_a;
	// ft_printf("aast-rank = %d\n", (*st_a)->rank);
	// ft_printf("argc = %d\n", *argc);
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
		// ft_printf("tmp_argc = %d\n", tmp_argc);
		while (tmp_argc-- > 0)
		{
			rra(&*st_a, &*hd_a);
			// ft_printf("count = %d\n", count);
			// ft_printf("st-rank = %d\n", (*st_a)->rank);
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
		// ft_printf("point = %d\n", point);
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
