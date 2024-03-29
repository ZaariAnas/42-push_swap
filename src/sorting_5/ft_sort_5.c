/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:50:24 by azari             #+#    #+#             */
/*   Updated: 2023/04/04 18:15:36 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

int	ft_find_min_index(t_list **stack)
{
	t_list	*tmp;
	int		index;
	int		min;
	int		i;

	tmp = *stack;
	i = 0;
	index = 0;
	min = tmp->content;
	while (tmp)
	{
		(tmp->content < min) && (min = tmp->content) && (index = i);
		tmp = tmp->next;
		i++;
	}
	return (index);
}

void	ft_sort_5(t_list **stack_a, t_list **stack_b)
{
	int		min_index;

	while (ft_lstsize(*stack_a) > 3)
	{
		min_index = ft_find_min_index(stack_a);
		if (ft_check_sort_list(*stack_a) && !(*stack_b))
			return ;
		(min_index == 0) && (pb(stack_a, stack_b), min_index += 0);
		(min_index > 2) && (rra(stack_a), min_index += 0);
		(min_index && min_index <= 2) && (ra(stack_a), min_index += 0);
	}
	ft_sort_3(stack_a);
	pa(stack_b, stack_a);
	(*stack_b) && (pa(stack_b, stack_a), min_index += 0);
}
