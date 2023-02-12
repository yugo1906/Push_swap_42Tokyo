/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:17:25 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/12 23:23:38 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	size_t	i;
	t_node	stack_a;
	t_node	*stack_pa;

	stack_pa = &stack_a;
	if (argc == 1)
		put_error_and_exit();
	i = argc;
	while (i-- >= 2)
	{
		stack_pa->num = ps_atoi(argv[i]);
		ft_printf("%d\n", stack_pa->num);
	}
	return (0);
}
