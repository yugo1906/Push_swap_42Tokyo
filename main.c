/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:17:25 by yughoshi          #+#    #+#             */
/*   Updated: 2023/03/12 17:44:24 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_need_sort(t_node **stack_a, t_node **head_a)
{
	while (*stack_a && (*stack_a)->next)
	{
		if ((*stack_a)->num > (*stack_a)->next->num)
		{
			*stack_a = *head_a;
			return ;
		}
		*stack_a = (*stack_a)->next;
	}
	stack_a = head_a;
	all_stack_free(&*stack_a);
	exit(EXIT_SUCCESS);
}

void	check_duplication(t_node **stack_a)
{
	t_node	*tmp1;
	t_node	*tmp2;

	tmp1 = *stack_a;
	tmp2 = tmp1->next;
	while (tmp1)
	{
		while (tmp2)
		{
			if (tmp1->rank == tmp2->rank)
			{
				put_error_and_free_and_exit(&*stack_a);
			}
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
		if (tmp1)
			tmp2 = tmp1->next;
	}
}

void	sort(int argc, t_node *head_a, t_node *stack_a)
{
	t_node	*stack_b;
	t_node	*head_b;

	stack_b = NULL;
	head_b = stack_b;
	if (argc == 2)
		sort_two(head_a, stack_a);
	else if (argc == 3)
		sort_three(&head_a, &stack_a, true);
	else if (argc == 4)
		sort_four(head_a, stack_a, head_b, stack_b);
	else if (argc == 5)
		sort_five(head_a, stack_a, head_b, stack_b);
	else if (argc >= 6)
		sort_any(argc, head_a, stack_a, head_b);
}

int	main(int argc, char *argv[])
{
	int		i;
	t_node	*stack_a;
	t_node	*head_a;

	if (argc == 1)
		exit(EXIT_SUCCESS);
	head_a = NULL;
	stack_a = ps_lstnew(&stack_a, &head_a);
	head_a = stack_a;
	argc = argc - 1;
	i = 0;
	while (i++ < argc)
	{
		stack_a->num = ps_atoi(argv[i], &stack_a, &head_a);
		if (i != argc)
		{
			stack_a->next = ps_lstnew(&stack_a, &head_a);
			stack_a = stack_a->next;
		}
	}
	coordinate_compression(&stack_a, &head_a);
	check_duplication(&stack_a);
	check_need_sort(&stack_a, &head_a);
	sort(argc, head_a, stack_a);
	return (0);
}
