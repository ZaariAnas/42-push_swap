/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:28:00 by azari             #+#    #+#             */
/*   Updated: 2023/03/15 16:41:22 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*t1;
	t_list	*t2;

	if (!lst || !*lst || !del)
		return ;
	t1 = *lst;
	while (t1)
	{
		t2 = t1;
		t1 = t1->next;
		del(t2->content);
		free(t2);
	}
	*lst = NULL;
}
