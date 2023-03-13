/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:12:54 by azari             #+#    #+#             */
/*   Updated: 2023/03/13 19:04:15 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_isnumber(char *arg)
{
	int	i;

	i = -1;
	while (arg[++i])
	{
		if (!ft_isdigit(arg[i]))
			return (0);
	}
	return (1);
}

void	ft_raise_error(char *str)
{
	write(2, str, ft_strlen(str));
	exit(0);
}

int	ft_is_whitespace(char c)
{
	if ((c > 8 && c < 14) || c == 32 || c == 127)
		return (1);
	return (0);
}

char	*ft_strtok(char *str, char *sep)
{
	int			len;
	char		*rslt;
	static char	*container;

	if (str)
		container = str;
	if (!container)
		return (NULL);
	while (*container && ft_strchr(sep, *container))
		container++;
	len = 0;
	while (container[len] && !ft_strchr(sep, container[len]))
		len++;
	if (!len)
		return (NULL);
	rslt = ft_substr(container, 0, len);
	container += len;
	if (*container && ft_strchr(sep, *container))
		container++;
	return (rslt);
}