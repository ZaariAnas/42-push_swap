/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:29:00 by azari             #+#    #+#             */
/*   Updated: 2023/03/15 11:29:33 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
