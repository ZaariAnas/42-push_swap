/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:56:40 by azari             #+#    #+#             */
/*   Updated: 2023/03/19 17:54:32 by azari            ###   ########.fr       */
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
	// printf("------------------------------------------[ ft_sort_5 ]\n");
	// printf("----------------------[ instructions ]\n");(&list_a, &list_b);
	ft_lis(&list_a);
	tmp = list_a;
	printf("----------------------[ a ]\n");
		printf("           [cnt] | [lis] | [index]\n");
		printf("           -------------\n");
	while (tmp)
	{
		printf("list_a -->  %d | %d | %d\n", tmp->content, tmp->lis, tmp->prev_index);
		tmp = tmp->next;
	}
	return (0);
}
