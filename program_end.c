/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:21:58 by yughoshi          #+#    #+#             */
/*   Updated: 2023/03/05 17:52:05 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	all_stack_free(t_node **stack)
{
	t_node	*free_tmp;

	while (*stack)
	{
		free_tmp = (*stack)->next;
		free(*stack);
		*stack = free_tmp;
	}
}

void	put_error_and_free_and_exit(t_node **stack_a)
{
	write(FD_2, "Error\n", 6);
	all_stack_free(&*stack_a);
	exit(EXIT_FAILURE);
}
