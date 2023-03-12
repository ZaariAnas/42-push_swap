/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:56:40 by azari             #+#    #+#             */
/*   Updated: 2023/03/12 13:49:24 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	raise_arg_trigger(int ac, char **av)
{
	int i;

	i = -1;
	if (ac < 2)
		return ;
	while (av[++i])
	{
		
	}
}

int main(int ac, char **av)
{
	// parsing
	raise_arg_trigger(ac, av);

	// execution
}