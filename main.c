/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:17:25 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/19 10:13:11 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	init_stack(t_node **stack)
{
	t_node	*new;

	new = (t_node *)malloc(1 * sizeof(t_node));
	if (new == NULL)
	{
		// todo::これまでに確保したnodeすべてをfree:error_all_free_exit()
		//  all_free_and_exit();
	}
	new->next = *stack;
	*stack = new;
	(*stack)->num = 0;
	(*stack)->prev = NULL;
	(*stack)->next = NULL;
}

int	main(int argc, char *argv[])
{
	size_t	tmp_argc;
	size_t	i;
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*head_a;
	t_node	*head_b;

	stack_a = NULL;
	init_stack(&stack_a);
	head_a = stack_a;
	head_b = NULL;
	if (argc == 1)
		put_error_and_exit();
	tmp_argc = argc - 1;
	i = 0;
	while (i++ < tmp_argc)
	{
		stack_a->num = ps_atoi(argv[i]);
		if (i != tmp_argc)
		{
			stack_a->next = ps_lstnew();
			stack_a = stack_a->next;
		}
	}
	/*todo::最後に消す スタック内を確認するテストコード */
	//テストコード:stack_aの値確認
	stack_a = head_a;
	ft_printf("stack_aの初期値\n");
	while (stack_a != NULL)
	{
		ft_printf("stack_a->num = %d\n", stack_a->num);
		stack_a = stack_a->next;
	}
	// swapの挙動確認
	sa(&stack_a, &head_a);
	while (stack_a != NULL)
	{
		ft_printf("stack_a->num = %d\n", stack_a->num);
		stack_a = stack_a->next;
	}
	pa(&head_a, &head_b);
	pa(&head_a, &head_b);
	pa(&head_a, &head_b);
	pa(&head_a, &head_b);
	// pa(&head_a, &head_b);
	sb(&stack_b, &head_b);
	ft_printf("ss前===\n");
	stack_a = head_a;
	stack_b = head_b;
	while (stack_a != NULL)
	{
		ft_printf("stack_a->num = %d\n", stack_a->num);
		stack_a = stack_a->next;
	}
	while (stack_b != NULL)
	{
		ft_printf("stack_b->num = %d\n", stack_b->num);
		stack_b = stack_b->next;
	}
	stack_a = head_a;
	stack_b = head_b;
	ss(&stack_a, &head_a, &stack_b, &head_b);
	while (stack_a != NULL)
	{
		ft_printf("stack_a->num = %d\n", stack_a->num);
		stack_a = stack_a->next;
	}
	while (stack_b != NULL)
	{
		ft_printf("stack_b->num = %d\n", stack_b->num);
		stack_b = stack_b->next;
	}
	/*
	// sa(&stack_a, &head_a);
	stack_a = head_a;
	stack_b = head_b;
	pa(&head_a, &head_b);
	pa(&head_a, &head_b);
	ft_printf("\n===pa後のstack_a===\n\n");
	// pa(&stack_a, &head_a, &stack_b, &head_b);
	stack_a = head_a;
	while (stack_a != NULL)
	{
		ft_printf("stack_a->num = %d\n", stack_a->num);
		stack_a = stack_a->next;
	}
	ft_printf("\n===pb前のstack_bの確認===\n\n");
	stack_b = head_b;
	while (stack_b != NULL)
	{
		ft_printf("stack_b->num = %d\n", stack_b->num);
		stack_b = stack_b->next;
	}
	pb(&head_b, &head_a);
	ft_printf("\n===pb後のstack_aの確認===\n\n");
	stack_a = head_a;
	while (stack_a != NULL)
	{
		ft_printf("stack_a->num = %d\n", stack_a->num);
		stack_a = stack_a->next;
	}
	ft_printf("\n===最終のstack_bの確認===\n");
	// テストコード:stack_bの値確認
	stack_b = head_b;
	while (stack_b != NULL)
	{
		ft_printf("stack_b->num = %d\n", stack_b->num);
		stack_b = stack_b->next;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	size_t	tmp_argc;
	size_t	i;
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*head_a;
	t_node	*head_b;

	head_a = init_stack();
	head_b = init_stack();
	stack_a = head_a;
	stack_b = head_b;
	if (argc == 1)
		put_error_and_exit();
	ft_printf("argc = %d\n", argc);
	tmp_argc = argc - 1;
	i = 0;
	while (i++ < tmp_argc)
	{
		ft_printf("i = %d\n", i);
		stack_a->num = ps_atoi(argv[i]);
		ft_printf("%d\n", stack_a->num);
		if (i != tmp_argc)
		{
			stack_a->next = init_stack();
			stack_a = stack_a->next;
		}
	}
	stack_a = head_a;
	while (stack_a != NULL)
	{
		ft_printf("OK\n");
		ft_printf("stack_a->num = %d\n", stack_a->num);
		stack_a = stack_a->next;
	}
*/
	return (0);
}
