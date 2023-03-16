/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 09:21:53 by azari             #+#    #+#             */
/*   Updated: 2023/03/16 14:58:15 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	ft_rrotate(t_list **stack)
{
	t_list	*temp;
	t_list	*last;

	temp = *stack;
	while (temp->next->next)
		temp = temp->next;
	last = temp->next;
	temp->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_list **stack)
{
	ft_rrotate(stack);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_list **stack)
{
	ft_rrotate(stack);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	ft_rrotate(stack_a);
	ft_rrotate(stack_b);
	ft_putendl_fd("rrr", 1);
}
