/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_pb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 05:19:11 by azari             #+#    #+#             */
/*   Updated: 2023/04/02 06:54:09 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	ft_push_pos(t_list **stack_a, t_list **stack_b, t_list *target)
{
	while (target->flag && target->link->flag)
	{
		rr(stack_a, stack_b);
		target->flag--;
		target->link->flag--;
	}
	while (target->link->flag || target->flag)
	{
		(target->flag) && (rb(stack_b), target->flag -= 1);
		(target->link->flag) && (ra(stack_a), target->link->flag -= 1);
	}
	pa(stack_a, stack_b);
}

void	ft_push_neg(t_list **stack_a, t_list **stack_b, t_list *target)
{
	while (target->flag && target->link->flag)
	{
		rrr(stack_a, stack_b);
		target->flag++;
		target->link->flag++;
	}
	while (target->link->flag || target->flag)
	{
		(target->flag) && (rrb(stack_b), target->flag += 1);
		(target->link->flag) && (rra(stack_a), target->link->flag += 1);
	}
	pa(stack_a, stack_b);
}

void	ft_push_diff(t_list **stack_a, t_list **stack_b, t_list *target)
{
	while (target->link->flag || target->flag)
	{
		(target->flag) && (rb(stack_b), target->flag -= 1);
		(target->link->flag) && (rra(stack_a), target->link->flag += 1);
	}
	pa(stack_a, stack_b);
}

void	ft_push_diff2(t_list **stack_a, t_list **stack_b, t_list *target)
{
	while (target->link->flag || target->flag)
	{
		(target->flag) && (rrb(stack_b), target->flag += 1);
		(target->link->flag) && (ra(stack_a), target->link->flag -= 1);
	}
	pa(stack_a, stack_b);
}

void	ft_process_pb(t_list **stack_a, t_list **stack_b, t_list *target)
{
	if (target->flag >= 0 && target->link->flag >= 0)
		ft_push_pos(stack_a, stack_b, target);
	if (target->flag < 0 && target->link->flag < 0)
		ft_push_neg(stack_a, stack_b, target);
	if (target->flag >= 0 && target->link->flag < 0)
		ft_push_diff(stack_a, stack_b, target);
	if (target->flag < 0 && target->link->flag >= 0)
		ft_push_diff2(stack_a, stack_b, target);
}
