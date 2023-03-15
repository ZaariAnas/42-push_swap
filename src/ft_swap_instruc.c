/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:12:54 by azari             #+#    #+#             */
/*   Updated: 2023/03/15 18:46:11 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	sa(t_list **lst)
{
	int	tmp;

	if (!*lst || !(*lst)->next)
		return ;
	tmp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = tmp;
	printf("sa\n");
}

void	sb(t_list **lst)
{
	int	tmp;

	if (!*lst || !(*lst)->next)
		return ;
	tmp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = tmp;
	printf("sb\n");
}

void	ss(t_list **lst1, t_list **lst2)
{
	sa(lst1);
	sb(lst2);
}
