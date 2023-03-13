/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 07:28:43 by azari             #+#    #+#             */
/*   Updated: 2023/03/13 11:01:02 by azari            ###   ########.fr       */
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
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32 || str[i] == 127)
		i++;
	(str[i] == '-') && (sign *= -1) && (i += 1);
	(str[i] == '+') && (i += 1);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
		if (result > INT_MAX || result < INT_MIN)
			return (write(2, ARG_INT_ERR, 49), 0);
	}
	if ((str[i] && !ft_isdigit(str[i])) || str[i - 1] == ' ' || !str[0])
		return (write(2, ARG_INT_ERR, 49), 0);
	return (result * sign);
}
