/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:21:58 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/22 23:01:49 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	all_stack_free(t_node **stack)
{
	t_node	*free_tmp;

	if (*stack)
	{
		while (*stack)
		{
			free_tmp = (*stack)->next;
			free(*stack);
			*stack = free_tmp;
		}
	}
}

void	put_error_and_exit(void)
{
	write(FD_2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
