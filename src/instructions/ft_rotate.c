/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 09:51:16 by azari             #+#    #+#             */
/*   Updated: 2023/04/02 06:47:10 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	ft_rotate(t_list **stack)
{
	t_list	*temp;
	t_list	*last;

	temp = *stack;
	*stack = temp->next;
	last = ft_lstlast(*stack);
	last->next = temp;
	temp->next = NULL;
}

void	ra(t_list **stack)
{
	ft_rotate(stack);
	ft_putendl_fd("ra", 1);
}

void	rb(t_list **stack)
{
	ft_rotate(stack);
	ft_putendl_fd("rb", 1);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_putendl_fd("rr", 1);
}
