/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:56:40 by azari             #+#    #+#             */
/*   Updated: 2023/04/04 18:11:06 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int ac, char **av)
{
	t_list	*list_a;
	t_list	*list_b;
	int		size;

	if (ac > 1)
	{
		list_a = ft_parser(av);
		if (ft_check_sort_list(list_a))
		{
			ft_lstclear(&list_a);
			return (0);
		}
		size = ft_lstsize(list_a);
		if (size <= 3)
			ft_sort_3(&list_a);
		else if (size <= 5)
			ft_sort_5(&list_a, &list_b);
		else if (size > 5)
			ft_lis(&list_a, &list_b);
		ft_lstclear(&list_a);
	}
	return (0);
}
