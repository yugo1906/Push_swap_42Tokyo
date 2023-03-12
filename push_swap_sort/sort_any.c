/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_any.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:47:09 by yughoshi          #+#    #+#             */
/*   Updated: 2023/03/12 16:42:30 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	get_max_rank_bin_digits(int argc)
{
	size_t	max_rank_digits;

	max_rank_digits = 0;
	while (argc)
	{
		argc = argc / 2;
		max_rank_digits++;
	}
	return (max_rank_digits);
}

void	radix_sort(t_node **hd_a, t_node **st_a, t_node **hd_b, int argc)
{
	int		i;
	int		j;
	int		max_rank_bin_digits;
	t_node	**st_b;

	max_rank_bin_digits = get_max_rank_bin_digits(argc);
	st_b = hd_b;
	i = 0;
	while (i < max_rank_bin_digits)
	{
		j = 0;
		while (j < argc)
		{
			if ((*st_a)->rank >> i & 1)
				ra(&*st_a, &*hd_a);
			else
				pb(&*hd_a, &*st_a, &*hd_b, &*st_b);
			j++;
		}
		while (*st_b)
			pa(&*hd_b, &*st_b, &*hd_a, &*st_a);
		i++;
	}
}

void	sort_any(int argc, t_node *hd_a, t_node *st_a, t_node *hd_b)
{
	radix_sort(&hd_a, &st_a, &hd_b, argc);
	all_stack_free(&st_a);
	exit(EXIT_SUCCESS);
}
