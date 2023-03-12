/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:56:40 by azari             #+#    #+#             */
/*   Updated: 2023/03/12 19:08:25 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "pushswap.h"

void	ft_raise_arg_trigger(int ac, char **av)
{
	int i;

	i = -1;
	if (ac < 2)
		ft_raise_error("Error\nunvalid arguments");
	while (av[++i])
	{
		if (!ft_isnumber(av[i]))
			ft_raise_error("Error\nunvalid arguments :: only numbers needed");
	}
	// call itoa make them all int
	// check if one is not an int 
	// check if there is duplicates
}

int main(int ac, char **av)
{
	// parsing

	ft_raise_arg_trigger(ac, av);
	ft_printf("--[clear]--\n");
	
	// execution
	return (0);
}