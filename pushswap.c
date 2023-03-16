/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:56:40 by azari             #+#    #+#             */
/*   Updated: 2023/03/16 14:49:37 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int ac, char **av)
{
	t_list	*list_a;
	t_list	*list_b;
	t_list	*tmp;

	if (ac < 2)
		ft_raise_error();
	list_a = ft_parser(av);
	tmp = list_a;
	list_b = NULL;
	while (tmp)
	{
		printf("list_a --> [%d]\n", tmp->content);
		tmp = tmp->next;
	}
	printf("------------------------------------------[ ft_sort_5 ]\n");
	printf("----------------------[ instructions ]\n");
	ft_sort_5(&list_a, &list_b);
	tmp = list_a;
	printf("----------------------[ a ]\n");
	while (tmp)
	{
		printf("list_a --> [%d]\n", tmp->content);
		tmp = tmp->next;
	}
	// tmp = list_b;
	// printf("------[ b ]------\n");
	// while (tmp)
	// {
	// 	printf("list_b --> [%d]\n", tmp->content);
	// 	tmp = tmp->next;
	// }
	return (0);
}

