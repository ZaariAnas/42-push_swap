/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:13:44 by azari             #+#    #+#             */
/*   Updated: 2023/03/13 09:40:05 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# define ARG_INT_ERR "error\nunvalid type of argument :: integer needed"
# define ARG_NUM_ERR "error\ninsufficient number of arguments"
# define ARG_DUP_ERR "error\nunvalid arguments :: no duplicates allowed"
# define ARG_DUP_ERR "error\nunvalid arguments :: no duplicates allowed"

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

int		ft_isnumber(char *arg);
// void	ft_raise_arg_trigger(int ac, char **av);
void	ft_raise_error(char *str);
int		ft_arg_parser(char *av);

#endif