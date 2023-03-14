/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 07:45:17 by azari             #+#    #+#             */
/*   Updated: 2023/03/14 13:47:56 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "pushswap.h"

void	ft_parser(char **av)
{
	int		i;
	int		num;
	char	*token;

	i = 0;
	token = ft_strtok(av[1], " ");
	while (token)
	{
		if ()
		num = ft_atoi(token);
		if (!num)
			return (free(token), write(2, ARG_INT_ERR, 49));
		else
		{
			
		}
	}
}

int	ft_strdigit(char *str)
{
	int	i;

	i = -1;
	if (!str)
		return (0);
	((str[0] == '-') || str[0] == '+' || !str[0]) && (str[1]) && (i += 1);
	while (str[++i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
	}
	return (1);
}