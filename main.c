/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:17:25 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/14 09:23:00 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_node	*init_stack(void)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(1 * sizeof(t_node));
	if (new_node == NULL)
	{
		//todo::これまでに確保したnodeすべてをfree:error_all_free()
		return (NULL);
	}
	new_node->num = 0;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
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
	tmp_argc = argc - 1;
	i = 0;
	while (i++ < tmp_argc)
	{
		stack_a->num = ps_atoi(argv[i]);
		if (i != tmp_argc)
		{
			stack_a->next = init_stack();
			stack_a = stack_a->next;
		}
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
