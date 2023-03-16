/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 07:45:17 by azari             #+#    #+#             */
/*   Updated: 2023/03/16 10:21:03 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushswap.h"

t_list	*ft_parser(char	**av)
{
	t_list	*list;
	char	*token;
	int		i;

	i = 1;
	list = NULL;
	token = ft_strtok(av[1], " ");
	while (token && av[i])
	{
		ft_lstadd_back(&list, ft_lstnew(ft_atoi(token)));
		token = ft_strtok(NULL, " ");
		if (!token && av[++i])
			token = ft_strtok(av[i], " ");
		if (!token && av[i])
			ft_raise_error();
	}
	if (!token && av[i])
		ft_raise_error();
	if (ft_check_sort_list(list))
		exit(0);
	return (list);
}
