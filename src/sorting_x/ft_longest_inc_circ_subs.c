/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longest_inc_circ_subs.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:05:43 by azari             #+#    #+#             */
/*   Updated: 2023/04/02 07:30:13 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

// void	ft_flag_lis(t_list *last, int len)
// {
// 	t_list	*cur;

// 	cur = last;
// 	while (len--)
// 	{
// 		cur->flag = 1;
// 		cur = cur->link;
// 	}
// }

// void	ft_set_lis(t_list **stack_a, t_list **stack_b, int len)
// {
// 	int		size;

// 	size = ft_lstsize(*stack_a);
// 	while (size != len)
// 	{
// 		((*stack_a)->flag) && (ra(stack_a), size += 0);
// 		(!(*stack_a)->flag) && (pb(stack_a, stack_b), size--);
// 	}
// }

// t_list	*ft_find_max_len(t_list *stack)
// {
// 	t_list	*cur;
// 	t_list	*max;

// 	cur = stack;
// 	max = stack;
// 	while (cur)
// 	{
// 		(cur->lis > max->lis) && (max = cur);
// 		cur = cur->next;
// 	}
// 	return (max);
// }

void	ft_sort_x(t_list **stack_a, t_list **stack_b)
{
	t_list	*min;
	int		min_index;
	int		size;

	min = ft_find_min(stack_a);
	min_index = ft_find_min_index(stack_a);
	size = ft_lstsize(*stack_a);
	while (ft_lstsize(*stack_b))
		ft_addback(stack_a, stack_b);
	while (ft_find_min_index(stack_a) && min_index >= size / 2)
		ra(stack_a);
	while (ft_find_min_index(stack_a) && min_index < size / 2)
		rra(stack_a);
}

// void	ft_lis(t_list **stack_a, t_list **stack_b)
// {
// 	t_list	*i;
// 	t_list	*j;
// 	t_list	*last;

// 	i = (*stack_a)->next;
// 	while (i)
// 	{
// 		j = i->next;
// 		while (j != i)
// 		{
// 			(!j) && (j = *stack_a);
// 			if (j->content < i->content && (j->lis + 1) >= i->lis)
// 			{
// 				i->lis = j->lis + 1;
// 				i->link = j;
// 			}
// 			j = j->next;
// 		}
// 		i = i->next;
// 	}
// 	last = ft_find_max_len(*stack_a);
// 	ft_flag_lis(last, last->lis);
// 	ft_set_lis(stack_a, stack_b, last->lis);
// 	ft_sort_x(stack_a, stack_b);
// }

void	justnorme(t_list *tmp, t_list *node, t_list **maxlis, t_list *stack)
{
	while (tmp != node)
	{
		if (tmp->content < node->content && tmp->lis >= node->lis)
		{
			node->link = tmp;
			node->lis++;
		}
		if (node->lis > tmp->lis)
			*maxlis = node;
		else
			*maxlis = tmp;
		tmp = tmp->next;
		if (!tmp)
			tmp = stack;
	}
}

void	get_lis(t_list *stack, t_list *start, t_list **maxlis)
{
	t_list	*tmp;
	t_list	*node;
	int		size;

	size = ft_lstsize(stack);
	node = start;
	while (size-- >= 0)
	{
		tmp = start;
		justnorme(tmp, node, maxlis, stack);
		node = node->next;
		if (!node)
			node = stack;
	}
}

void	getting_lis(t_list *stack, int *numlis)
{
	int		size;
	t_list	*tmp;
	t_list	*maxlis;

	size = -1;
	tmp = stack;
	while (tmp)
	{
		tmp->flag = 0;
		tmp->lis = 0;
		tmp = tmp->next;
	}
	tmp = stack;
	while (++size < getpmin(stack))
		tmp = tmp->next;
	get_lis(stack, tmp, &maxlis);
	//-------------------------
	while (maxlis)
	{
		(*numlis)++;
		maxlis->flag = 1;
		maxlis = maxlis->link;
	}
}
void	push_lis(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	lstsize;

	size = 0;
	getting_lis(*stack_a, &size);
	lstsize = ft_lstsize(*stack_a) - size;
	while (lstsize)
	{
		if (!((*stack_a)->flag == 1))
		{
			pb(stack_a, stack_b);
			lstsize--;
		}
		else
			ra(stack_a);
	}
	while (ft_lstsize(*stack_b))
		ft_sort_x(stack_a, stack_b);
}