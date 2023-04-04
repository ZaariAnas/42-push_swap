/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longest_inc_circ_subs.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:05:43 by azari             #+#    #+#             */
/*   Updated: 2023/04/04 18:17:51 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	ft_flag_lis(t_list *last, int len)
{
	t_list	*cur;

	cur = last;
	while (len--)
	{
		cur->flag = 1;
		cur = cur->link;
	}
}

void	ft_set_lis(t_list **stack_a, t_list **stack_b, int len)
{
	int		size;

	size = ft_lstsize(*stack_a);
	while (size != len)
	{
		((*stack_a)->flag) && (ra(stack_a), size += 0);
		(!(*stack_a)->flag) && (pb(stack_a, stack_b), size--);
	}
}

t_list	*ft_find_max_len(t_list *stack)
{
	t_list	*cur;
	t_list	*max;

	cur = stack;
	max = stack;
	while (cur)
	{
		(cur->lis > max->lis) && (max = cur);
		cur = cur->next;
	}
	return (max);
}

void	ft_sort_x(t_list **stack_a, t_list **stack_b)
{
	t_list	*min;
	int		hf_size;
	int		index_min;

	while (ft_lstsize(*stack_b))
		ft_addback(stack_a, stack_b);
	index_min = ft_find_min_index(stack_a);
	hf_size = ft_lstsize(*stack_a) / 2;
	min = ft_find_min(stack_a);
	if (index_min <= hf_size)
		while ((*stack_a)->content != min->content)
			ra(stack_a);
	if (index_min > hf_size)
		while ((*stack_a)->content != min->content)
			rra(stack_a);
}

void	ft_find_lis(t_list	**stack)
{
	t_list	*i;
	t_list	*j;
	t_list	*init;
	int		size;

	init = ft_find_min(stack);
	size = ft_lstsize(*stack);
	i = init;
	while (size--)
	{
		j = init;
		while (j != i)
		{
			if (j->content < i->content && (j->lis + 1) >= i->lis)
			{
				i->lis = j->lis + 1;
				i->link = j;
			}
			j = j->next;
			(!j) && (j = *stack);
		}
		i = i->next;
		(!i) && (i = *stack);
	}
}
