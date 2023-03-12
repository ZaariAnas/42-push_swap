/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:08:34 by azari             #+#    #+#             */
/*   Updated: 2022/11/02 15:18:41 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define B10 "0123456789"
# define B16L "0123456789abcdef"
# define B16U "0123456789ABCDEF"

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_strlen(char *s);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr_base_u(unsigned long long nbr, char *base);
int	ft_putnbr_base_s(long long nbr, char *base);
int	ft_printf(const char *s, ...);

#endif