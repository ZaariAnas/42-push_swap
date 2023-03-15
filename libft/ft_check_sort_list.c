/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:42:59 by azari             #+#    #+#             */
/*   Updated: 2023/03/15 17:56:57 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_sort_list(t_list *lst)
{
	t_list	*tmp;
	int		asc;
	int		desc;

	tmp = lst;
	asc = 1;
	desc = 1;
	while (tmp->next)
	{
		(tmp->content > tmp->next->content) && (asc = 0);
		(tmp->content < tmp->next->content) && (desc = 0);
		tmp = tmp->next;
	}
	return (asc || desc);
}
