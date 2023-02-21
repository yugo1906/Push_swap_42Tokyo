/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:39:48 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/21 09:38:34 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

size_t	check_space_and_check_sign(const char *str, int *sign)
{
	size_t	i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

int	ps_atoi(const char *str)
{
	long long	res;
	int			sign;
	size_t		i;

	res = 0;
	sign = 1;
	i = check_space_and_check_sign(str, &sign);
	while (ft_isdigit(str[i]))
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		if (sign == 1 && (res > ((LONG_MAX - (sign * (str[i] - '0'))) / 10)))
			return ((int)LONG_MAX);
		if (sign == -1 && (res < ((LONG_MIN - (sign * (str[i] - '0'))) / 10)))
			return ((int)LONG_MIN);
		res = (res * 10) + (sign * (str[i] - '0'));
		i++;
	}
	if (!ft_isdigit(str[i]) && str[i] != '\0')
		put_error_and_exit();
	if (res > INT_MAX || res < INT_MIN)
		put_error_and_exit();
	return ((int)res);
}
