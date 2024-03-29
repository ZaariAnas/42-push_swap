/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:59:09 by azari             #+#    #+#             */
/*   Updated: 2023/04/04 00:35:29 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

int	ft_find_max(t_list **stack)
{
	t_list	*temp;
	int		max;

	temp = *stack;
	max = temp->content;
	while (temp)
	{
		(temp->content > max) && (max = temp->content);
		temp = temp->next;
	}
	return (max);
}

void	ft_sort_3(t_list **stack)
{
	int		max;

	max = ft_find_max(stack);
	if (ft_lstsize(*stack) == 3)
	{
		((*stack)->content == max) && (ra(stack), max += 0);
		((*stack)->next->content == max) && (rra(stack), max += 0);
	}
	((*stack)->content > (*stack)->next->content) && (sa(stack), max = 1337);
}
