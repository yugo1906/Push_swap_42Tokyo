/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yughoshi <yughoshi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:42:19 by yughoshi          #+#    #+#             */
/*   Updated: 2023/02/17 08:35:14 by yughoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_node **st_a, t_node **head_a, t_node **st_b, t_node **head_b)
{
	t_node	*new_head_a;

	new_head_a = *head_a;
	// ft_printf("pa::st_a->num = %d\n", (*st_a)->num);
	*head_a = (*head_a)->next;
	if (!(*head_b)->num)
	{
		// ft_printf("true\n");
		new_head_a->next = NULL;
		*head_b = new_head_a;
	}
	else
	{
		// ft_printf("false\n");
		new_head_a->next = *head_b;
		*head_b = new_head_a;
	}
	// ft_printf("pa::st_a->num = %d\n", (*st_a)->num);
	// *st_a = *head_a;
	*st_b = *head_b;
	// ft_printf("pa::st_a->num = %d\n", (*st_a)->num);
	ft_printf("pa::(*st_b)->num = %d\n===\n", (*st_b)->num);
}

void	pb(t_node **st_a, t_node **head_a, t_node **st_b, t_node **head_b)
{
	ps_lstadd_front(head_a, ps_lstnew());
	*st_b = *head_b;
	*st_a = *head_a;
	(*st_a)->num = (*st_b)->num;
	ft_printf("pb::(*st_a)->num = %d\n===\n", (*st_a)->num);
}

// void	pb(void)
// {
// }
void	testpa(t_node **st_a, t_node **head_a, t_node **st_b, t_node **head_b)
{
	ps_lstadd_front(head_b, ps_lstnew());
	*st_a = *head_a;
	*st_b = *head_b;
	(*st_b)->num = 2;
	ft_printf("pa::(*st_b)->num = %d\n===\n", (*st_b)->num);
}
