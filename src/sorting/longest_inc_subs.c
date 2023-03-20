/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest_inc_subs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:05:43 by azari             #+#    #+#             */
/*   Updated: 2023/03/20 22:36:44 by azari            ###   ########.fr       */
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
		cur = cur->prev;
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

void	ft_lis(t_list **stack_a, t_list **stack_b)
{
	t_list	*i;
	t_list	*j;
	t_list	*last;
	// int		len;

	(void)stack_b;
	i = (*stack_a)->next;
	while (i)
	{
		j = *stack_a;
		while (j != i)
		{
			if (j->content < i->content && (j->lis + 1) >= i->lis)
			{
				i->lis = j->lis + 1;
				i->prev = j;
				last = i;
			}
			j = j->next;
		}
		i = i->next;
	}
	ft_flag_lis(last, last->lis);
	ft_set_lis(stack_a, stack_b, last->lis);
}