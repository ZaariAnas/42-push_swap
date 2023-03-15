/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:51:49 by azari             #+#    #+#             */
/*   Updated: 2023/03/15 11:58:17 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
	{
		if (tmp->content == new->content)
			ft_raise_error(ARG_DUP_ERR, 49);
		tmp = tmp -> next;
	}
	if (tmp->content == new->content)
		ft_raise_error(ARG_DUP_ERR, 49);
	tmp->next = new;
}
