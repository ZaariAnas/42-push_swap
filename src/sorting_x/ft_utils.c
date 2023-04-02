/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:07:17 by azari             #+#    #+#             */
/*   Updated: 2023/04/02 01:47:18 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

t_list	*ft_find_min(t_list	**stack)
{
	t_list	*tmp;
	t_list	*node;

	node = *stack;
	tmp = *stack;
	while (tmp)
	{
		(tmp->content < node->content) && (node = tmp);
		tmp = tmp->next;
	}
	return (node);
}
