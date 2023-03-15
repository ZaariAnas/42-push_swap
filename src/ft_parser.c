/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 07:45:17 by azari             #+#    #+#             */
/*   Updated: 2023/03/15 17:29:04 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../pushswap.h"

int	ft_check_sort_list(t_list *lst)
{
	t_list 	*tmp;
	int		asc;
	int		desc;

	tmp = lst;
	asc = 1;
	desc = 1;
	while (tmp->next)
	{
		(tmp->content > tmp->next->content) && (asc = 0);	
		(tmp->content < tmp->next->content) && (desc = 0);
		tmp = tmp->next;
	}
	return (asc || desc);
}

t_list	*ft_parser(char	**av)
{
	t_list 	*list;
	char 	*token;
	int 	i;
	
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
			ft_raise_error(ARG_INT_ERR, 49);
	}
	if ((!token && av[i]) || ft_check_sort_list(list))
		ft_raise_error(ARG_SORT_ERR, 44);
	return (list);
}
