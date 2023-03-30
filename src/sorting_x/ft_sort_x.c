/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:29:11 by azari             #+#    #+#             */
/*   Updated: 2023/03/28 17:05:38 by azari            ###   ########.fr       */
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
void	ft_mark_prev(t_list *stack_a, t_list *node)
{
	t_list	*cur;

	cur = stack_a;
	while (cur-> next && cur->content < node->content)
		cur = cur->next;
	node->prev = cur;
}
void	ft_set_req_moves(t_list **stack_a, t_list **stack_b)
{
	t_list	*cur;
	int		index_a;
	int		index_b;

	cur = *stack_b;
	ft_index_stack(*stack_a);
	ft_index_stack(*stack_b);
	while (cur)
	{
		ft_mark_prev(stack_a, cur);
		index_a = cur->prev->flag;
		index_b = cur->flag;
		if 
	}
}
