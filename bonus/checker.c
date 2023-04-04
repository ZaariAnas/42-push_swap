/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:42:07 by azari             #+#    #+#             */
/*   Updated: 2023/04/04 18:17:17 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ft_exec_instruc(t_list **sa, t_list **sb, char *instruc)
{
	int	flag;

	flag = 0;
	(!ft_strcmp(instruc, "sa\n")) && (ft_swp(sa), flag = 1);
	(!ft_strcmp(instruc, "sa\n")) && (ft_swp(sb), flag = 1);
	(!ft_strcmp(instruc, "ss\n")) && (ft_swp(sa), ft_swp(sb), flag = 1);
	(!ft_strcmp(instruc, "pa\n")) && (ft_push(sb, sa), flag = 1);
	(!ft_strcmp(instruc, "pb\n")) && (ft_push(sa, sb), flag = 1);
	(!ft_strcmp(instruc, "ra\n")) && (ft_rot(sa), flag = 1);
	(!ft_strcmp(instruc, "rb\n")) && (ft_rot(sb), flag = 1);
	(!ft_strcmp(instruc, "rr\n")) && (ft_rot(sa), ft_rot(sa), flag = 1);
	(!ft_strcmp(instruc, "rra\n")) && (ft_rrot(sa), flag = 1);
	(!ft_strcmp(instruc, "rrb\n")) && (ft_rrot(sa), flag = 1);
	(!ft_strcmp(instruc, "rrr\n")) && (ft_rrot(sa), ft_rrot(sa), flag = 1);
	if (!flag)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

int	main(int ac, char **av)
{
	t_list	*sa;
	t_list	*sb;
	char	*instruc;

	sa = NULL;
	sb = NULL;
	if (ac > 1)
	{
		sa = ft_parser(av);
		instruc = get_next_line(0);
		while (instruc)
		{
			ft_exec_instruc(&sa, &sb, instruc);
			free(instruc);
			instruc = get_next_line(0);
		}
		free(instruc);
		if (ft_check_sort_list(sa) && !sb)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
}
