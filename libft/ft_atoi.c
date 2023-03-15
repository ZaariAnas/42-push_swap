/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 07:28:43 by azari             #+#    #+#             */
/*   Updated: 2023/03/15 16:17:38 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	result;

	i = 0;
	sign = 1;
	result = 0;
	(ft_strchr("+-", str[0])) && (sign = '-' - str[0] - 1) && (i += 1);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i++] - 48;
		if (result > INT_MAX || result < INT_MIN)
			ft_raise_error(ARG_INT_ERR, 49);
	}
	if ((str[i] && !ft_isdigit(str[i])) 
			|| str[i - 1] == '-' || str[i - 1] == '+')
		ft_raise_error(ARG_INT_ERR, 49);
	return (result * sign);
}
