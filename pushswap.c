/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:56:40 by azari             #+#    #+#             */
/*   Updated: 2023/03/13 09:42:16 by azari            ###   ########.fr       */
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

int	ft_arg_parser(char *av)
{
	int	i;

	i = 0;
	if ((av[0] == '-' || av[0] == '+') && !av[1])
		return (write(2, ARG_INT_ERR, 49), 0);
	while (av[++i])
	{
		if (!ft_isdigit(av[i]))
			return (write(2, ARG_INT_ERR, 49), 0);	
	}
	return (ft_atoi(av));
}
int main(int ac, char **av)
{
	// parsing
	
	if (ac < 2)
		return (write(2, ARG_NUM_ERR, 39), 0);
	ft_printf("[%d]\n", ft_arg_parser(av[1]));
	// execution
	return (0);
}