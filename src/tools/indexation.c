/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:05:43 by azari             #+#    #+#             */
/*   Updated: 2023/03/19 14:05:13 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

int	ft_find_min(t_list **stack)
{
	t_list	*tmp;
	int		min;

	tmp = *stack;
	min = tmp->content;
	while (tmp)
	{
		(tmp->content < min) && (min = tmp->content);
		tmp = tmp->next;
	}
	return (min);
}

int	ft_check_lis(int x, int y)
{
	if (x + 1 > y)
		return (x + 1);
	return (0);
}
void	ft_lis(t_list **stack)
{
	t_list	*i;
	t_list	*j;

	i = (*stack)->next;
	while (i)
	{
		j = *stack;
		while (j->next != i)
		{
			if (j->content < i->content && (j->lis + 1) >= i->lis)
				i->lis = j->lis + 1;
			j = j->next;
		}
		i = i->next;
	}
}     