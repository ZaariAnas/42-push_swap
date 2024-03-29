/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:12:54 by azari             #+#    #+#             */
/*   Updated: 2023/04/04 16:56:58 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

void	ft_swp(t_list **lst)
{
	int	tmp;

	if (!*lst || !(*lst)->next)
		return ;
	tmp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = tmp;
}

void	sa(t_list **lst)
{
	ft_swp(lst);
	ft_putendl_fd("sa", 1);
}

void	sb(t_list **lst)
{
	ft_swp(lst);
	ft_putendl_fd("sb", 1);
}

void	ss(t_list **lst1, t_list **lst2)
{
	ft_swp(lst1);
	ft_swp(lst2);
	ft_putendl_fd("ss", 1);
}
