/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:17:25 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/14 07:28:23 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// void	init_stack(t_node **stack)
// {
// 	(*stack)->next = NULL;
// 	(*stack)->prev = NULL;
// }

int	main(int argc, char *argv[])
{
	size_t	i;
	t_node	*stack_a;
	// t_node *head;

	// t_node	*stack_b;
	// head = stack_a;
	// init_stack(&stack_b);
	// t_node	stack_pa;
	// t_node	*head;
	// head = &stack_a;
	// stack_a = ps_lstnew(0);

	stack_a = ps_lstnew(0);

	if (argc == 1)
		put_error_and_exit();
	i = argc;
	ft_printf("argc = %d\n", argc);
	// stack_a = head;
	while (i-- >= 2)
	{
		stack_a->num = ps_atoi(argv[i]);
		ft_printf("%d\n", stack_a->num);
		stack_a->next = ps_lstnew(0);
		stack_a = stack_a->next;
	}
	return (0);
}
