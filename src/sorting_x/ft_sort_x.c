/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:29:11 by azari             #+#    #+#             */
/*   Updated: 2023/04/02 01:49:21 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	ft_index_stack(t_list *stack)
{
	int	i;
	int	j;
	int	size;

	size = ft_lstsize(stack);
	i = -1;
	while (++i <= size / 2 && stack)
	{
		stack->flag = i;
		stack = stack->next;
	}
	j = size / 2;
	(size % 2 == 0) && (j -= 1);
	while (stack)
	{
		stack->flag = -j;
		stack = stack->next;
		j--;
	}
}

void	ft_mark_prev(t_list *stack_a, t_list **p)
{
	t_list	*cur;
	t_list	*min;
	int		n;
	int		flag;

	min = ft_find_min(&stack_a);
	n = (*p)->content;
	cur = min;
	flag = 0;
	while (cur)
	{
		((cur->content > n) && (!flag)) && ((*p)->prev = cur) && (flag = 1);
		cur = cur->next;
	}
	cur = stack_a;
	while (cur != min)
	{
		((cur->content > n) && (!flag)) && ((*p)->prev = cur) && (flag = 1);
		cur = cur->next;
	}
	(!flag) && ((*p)->prev = min);
}

void	ft_set_req_moves(t_list **stack_a, t_list **stack_b)
{
	t_list	*cur;
	int		in_a;
	int		in_b;

	cur = (*stack_b);
	ft_index_stack(*stack_a);
	ft_index_stack(*stack_b);
	while (cur)
	{
		ft_mark_prev(*stack_a, &cur);
		in_a = cur->prev->flag;
		in_b = cur->flag;
		if (in_a < 0 && in_b >= 0)
			cur->lis = in_b + (in_a * -1);
		else if (in_b < 0 && in_a >= 0)
			cur->lis = in_a + (in_b * -1);
		else if (in_a >= 0 && in_b >= 0)
			cur->lis = in_a * (in_a >= in_b) + in_b * (in_b >= in_a);
		else if (in_a < 0 && in_b < 0)
			cur->lis = -1 * (in_a * (in_a < in_b) + in_b * (in_b < in_a));
		cur = cur->next;
	}
}

void	ft_sort_x(t_list **stack_a, t_list **stack_b)
{
	t_list	*cur;
	t_list	*target;
	int		min;

	ft_lis(stack_a, stack_b);
	ft_set_req_moves(stack_a, stack_b);
	cur = *stack_b;
	target = cur;
	while (cur)
	{
		(cur->lis < min) && (min = cur->lis) && (target = cur);
		cur = cur->next;
	}
	ft_process_pb(stack_a, stack_b, target);
	printf("----------------------------\n");
	printf("--[best node to push : %d]--\n", target->content);
	printf("----------------------------\n");
}
