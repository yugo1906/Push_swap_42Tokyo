/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:17:25 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/21 09:02:46 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// void	init_stack(t_node **stack)
// {
// 	t_node	*new;

// 	new = (t_node *)malloc(1 * sizeof(t_node));
// 	if (new == NULL)
// 	{
// 		// todo::これまでに確保したnodeすべてをfree:error_all_free_exit()
// 		//  all_free_and_exit();
// 	}
// 	new->next = *stack;
// 	*stack = new;
// 	(*stack)->num = 0;
// 	(*stack)->next = NULL;
// }

int	main(int argc, char *argv[])
{
	size_t	tmp_argc;
	size_t	i;
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*head_a;
	t_node	*head_b;

	stack_a = ps_lstnew();
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
	// テストコード:stack_aの値確認
	stack_a = head_a;
	ft_printf("stack_aの初期値\n");
	while (stack_a != NULL)
	{
		ft_printf("stack_a->num = %d\n", stack_a->num);
		stack_a = stack_a->next;
	}
	pa(&head_a, &head_b);
	pa(&head_a, &head_b);
	pa(&head_a, &head_b);
	// reverse_rotateの挙動確認
	ft_printf("rraの挙動確認===\n");
	rra(&stack_a, &head_a);
	// rra(&stack_a, &head_a);
	while (stack_a != NULL)
	{
		ft_printf("stack_a->num = %d\n", stack_a->num);
		stack_a = stack_a->next;
	}
	ft_printf("rrbの挙動確認===\n");
	rrb(&stack_b, &head_b);
	// rrb(&stack_b, &head_b);
	while (stack_b != NULL)
	{
		ft_printf("stack_b->num = %d\n", stack_b->num);
		stack_b = stack_b->next;
	}
	ft_printf("rrrの挙動確認===\n");
	rrr(&stack_a, &head_a, &stack_b, &head_b);
	// rrr(&stack_a, &head_a, &stack_b, &head_b);
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
	// // swapの挙動確認
	// sa(&stack_a, &head_a);
	// ft_printf("saの挙動確認===\n");
	// while (stack_a != NULL)
	// {
	// 	ft_printf("stack_a->num = %d\n", stack_a->num);
	// 	stack_a = stack_a->next;
	// }
	// pa(&head_a, &head_b);
	// pa(&head_a, &head_b);
	// pa(&head_a, &head_b);
	// ft_printf("pa後===\n");
	// stack_a = head_a;
	// stack_b = head_b;
	// while (stack_a != NULL)
	// {
	// 	ft_printf("stack_a->num = %d\n", stack_a->num);
	// 	stack_a = stack_a->next;
	// }
	// while (stack_b != NULL)
	// {
	// 	ft_printf("stack_b->num = %d\n", stack_b->num);
	// 	stack_b = stack_b->next;
	// }
	// // rotateの挙動確認
	// ft_printf("raの挙動確認===\n");
	// ra(&stack_a, &head_a);
	// ra(&stack_a, &head_a);
	// while (stack_a != NULL)
	// {
	// 	ft_printf("stack_a->num = %d\n", stack_a->num);
	// 	stack_a = stack_a->next;
	// }
	// ft_printf("rbの挙動確認===\n");
	// rb(&stack_b, &head_b);
	// while (stack_b != NULL)
	// {
	// 	ft_printf("stack_b->num = %d\n", stack_b->num);
	// 	stack_b = stack_b->next;
	// }
	// ft_printf("rrの挙動確認===\n");
	// rr(&stack_a, &head_a, &stack_b, &head_b);
	// while (stack_a != NULL)
	// {
	// 	ft_printf("stack_a->num = %d\n", stack_a->num);
	// 	stack_a = stack_a->next;
	// }
	// while (stack_b != NULL)
	// {
	// 	ft_printf("stack_b->num = %d\n", stack_b->num);
	// 	stack_b = stack_b->next;
	// }
	// // // reverse_rotateの挙動確認
	// // ft_printf("rraの挙動確認===\n");
	// // rra(&stack_a, &head_a);
	// // rra(&stack_a, &head_a);
	// // while (stack_a != NULL)
	// // {
	// // 	ft_printf("stack_a->num = %d\n", stack_a->num);
	// // 	stack_a = stack_a->next;
	// // }
	// ft_printf("ss後===\n");
	// // ss(&stack_a, &head_a, &stack_b, &head_b);
	// ss(&stack_a, &head_a, &stack_b, &head_b);
	// while (stack_a != NULL)
	// {
	// 	ft_printf("stack_a->num = %d\n", stack_a->num);
	// 	stack_a = stack_a->next;
	// }
	// while (stack_b != NULL)
	// {
	// 	ft_printf("stack_b->num = %d\n", stack_b->num);
	// 	stack_b = stack_b->next;
	// }
	return (0);
}
