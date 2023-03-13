/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:56:40 by azari             #+#    #+#             */
/*   Updated: 2023/03/13 18:41:47 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

// void	ft_raise_arg_trigger(int ac, char **av)
// {
// 	int i;

// 	i = -1;
// 	if (ac < 2)
// 		int;
// 	while (av[++i])
// 	{
// 		if (!ft_isnumber(av[i]))
// 			ft_raise_error("Error\nunvalid arguments :: only numbers needed");
// 	}
// 	// call itoa make them all int
// 	// check if on is not an int 
// 	// check if there is duplicates
// }

// t_list	*ft_arg_parser(char **av)
// {
// 	int		i;
// 	t_list	*head;

// 	head = NULL;
// 	i = -1;
// 	while (av[++i])
// 		ft_lstadd_back(&head, ft_lstnew((void *)ft_atoi(av[i])));
// 	return (head);
// }

int main(int ac, char **av)
{
	// parsing

	if (ac < 2)
		return (0);
	printf("[%d]\n", ft_atoi(av[1]));
	// execution
	return (0);
}