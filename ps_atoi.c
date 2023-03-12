/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:39:48 by yughoshi          #+#    #+#             */
/*   Updated: 2023/03/12 17:33:10 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	check_sign(const char *str, int *sign)
{
	size_t	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

void	check_error(const char str, long long res, t_node **st_a, t_node **hd_a)
{
	if (!ft_isdigit(str) && str != '\0')
	{
		*st_a = *hd_a;
		put_error_and_free_and_exit(&*st_a);
	}
	if (res > INT_MAX || res < INT_MIN)
	{
		*st_a = *hd_a;
		put_error_and_free_and_exit(&*st_a);
	}
}

int	ps_atoi(const char *str, t_node **stack_a, t_node **head_a)
{
	long long	res;
	int			sign;
	size_t		i;

	res = 0;
	sign = 1;
	i = check_sign(str, &sign);
	while (ft_isdigit(str[i]))
	{
		res = (res * 10) + (sign * (str[i] - '0'));
		check_error(str[i], res, &*stack_a, &*head_a);
		i++;
	}
	return ((int)res);
}
