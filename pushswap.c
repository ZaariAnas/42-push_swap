/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:56:40 by azari             #+#    #+#             */
/*   Updated: 2023/04/02 16:37:18 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int ac, char **av)
{
	t_list	*list_a;
	t_list	*list_b;
	// t_list	*tmp;
	// int		i;

	if (ac < 2)
		ft_raise_error();
	list_a = ft_parser(av);
	// i = 0;
	// tmp = list_a;
	list_b = NULL;
	// while (tmp)
	// {
	// 	printf("list_a --> [%d]\n", tmp->content);
	// 	tmp = tmp->next;
	// }
	// printf("------------------------------------------[ ft_sort_5 ]\n");
	// printf("----------------------[ instructions ]\n");
	ft_lis(&list_a, &list_b);
	// tmp = list_a;
	// printf("cont\tlis\tflag\n");
	// while (tmp)
	// {
	// 	printf("%d\t%d\t%d\n", tmp->content, tmp->lis, tmp->flag);
	// 	tmp = tmp->next;
	// 	i++;
	// }
	// printf("--------------------------------------- : %d\n", i);
	// if (ft_check_sort_list(list_a))
	// 	printf("list is sorted \n");
	// else
	// 	printf("fail \n");
	return (0);
}
