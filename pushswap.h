/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:13:44 by azari             #+#    #+#             */
/*   Updated: 2023/03/12 18:54:51 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

int	ft_isnumber(char *arg);
void	ft_raise_arg_trigger(int ac, char **av);
void	ft_raise_error(char *str);

#endif