/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:17:25 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/15 08:28:50 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	init_stack(t_node **head, t_node **stack)
{
	t_node	*new;

	new = (t_node *)malloc(1 * sizeof(t_node));
	if (new == NULL)
	{
		// todo::これまでに確保したnodeすべてをfree:error_all_free_exit()
		//  all_free_and_exit();
	}
	new->num = 0;
	new->next = NULL;
	new->prev = NULL;
	*stack = new;
	*head = *stack;
}

int	main(int argc, char *argv[])
{
	size_t	tmp_argc;
	size_t	i;
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*head_a;
	t_node	*head_b;

	init_stack(&head_a, &stack_a);
	init_stack(&head_b, &stack_b);
	if (argc == 1)
		put_error_and_exit();
	tmp_argc = argc - 1;
	i = 0;
	while (i++ < tmp_argc)
	{
		// ft_printf("i = %d\n", i);
		stack_a->num = ps_atoi(argv[i]);
		// ft_printf("%d\n", stack_a->num);
		if (i != tmp_argc)
		{
			stack_a->next = ps_lstnew(0);
			stack_a = stack_a->next;
		}
	}
	//テスト出力コード
	stack_a = head_a;
	while (stack_a != NULL)
	{
		// ft_printf("OK\n");
		ft_printf("stack_a->num = %d\n", stack_a->num);
		stack_a = stack_a->next;
	}
	sa(&stack_a, &head_a);
	stack_a = head_a;
	while (stack_a != NULL)
	{
		// ft_printf("OK\n");
		ft_printf("stack_a->num = %d\n", stack_a->num);
		stack_a = stack_a->next;
	}
	return (0);
}

/*テストコード
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
	return (0);
}
*/
