/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest_inc_subs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:05:43 by azari             #+#    #+#             */
/*   Updated: 2023/03/19 18:00:37 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

// t_list	*ft_get_node_by_index(t_list *stack, int index)
// {
// 	t_list	*tmp;

// 	tmp = stack;
// 	while (tmp->index != index)
// 		tmp = tmp->next;
// 	return (tmp);
// }
void	ft_lis(t_list **stack)
{
	t_list	*i;
	t_list	*j;

	i = (*stack)->next;
	while (i)
	{
		j = *stack;
		while (j != i)
		{
			if (j->content < i->content && (j->lis + 1) >= i->lis)
			{
				i->lis = j->lis + 1;
				i->prev_index = j->index;
			}
			j = j->next;
		}
		i = i->next;
	}
}
