/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:13:44 by azari             #+#    #+#             */
/*   Updated: 2023/03/15 18:38:33 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# define ARG_INT_ERR "error\nunvalid type of argument :: integer needed"
# define ARG_NUM_ERR "error\ninsufficient number of arguments"
# define ARG_DUP_ERR "error\nunvalid arguments :: no duplicates allowed"
# define ARG_SORT_ERR "error\nunvalid arguments :: arguments sorted"

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

t_list	*ft_parser(char	**av);
void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **lst1, t_list **lst2);

#endif