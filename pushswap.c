/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:56:40 by azari             #+#    #+#             */
/*   Updated: 2023/03/16 08:02:22 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int ac, char **av)
{
	t_list	*list;
	t_list	*tmp;

	if (ac < 2)
		ft_raise_error();
	list = ft_parser(av);
	tmp = list;
	while (tmp)
	{
		printf("list --> [%d]\n", tmp->content);
		tmp = tmp->next;
	}
	sa(&list);
	printf("------[after swap]------\n");
	tmp = list;
	while (tmp)
	{
		printf("list --> [%d]\n", tmp->content);
		tmp = tmp->next;
	}
	return (0);
}
