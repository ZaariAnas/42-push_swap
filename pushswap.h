/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:13:44 by azari             #+#    #+#             */
/*   Updated: 2023/03/28 17:05:29 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"

t_list	*ft_parser(char	**av);
void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **lst1, t_list **lst2);
void	ft_push(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ft_rotate(t_list **stack);
void	ra(t_list **stack);
void	rb(t_list **stack);
void	rr(t_list **stack_a, t_list **stack_b);
void	ft_rrotate(t_list **stack);
void	rra(t_list **stack);
void	rrb(t_list **stack);
void	rrr(t_list **stack_a, t_list **stack_b);
int		ft_find_max(t_list **stack);
void	ft_sort_3(t_list **stack);
int		ft_find_min_index(t_list **stack);
void	ft_sort_5(t_list **stack_a, t_list **stack_b);
int		ft_check_lis(int a, int b);
void	ft_lis(t_list **stack_a, t_list **stack_b);
void	ft_flag_lis(t_list *last, int len);
t_list	*ft_get_node_by_index(t_list *stack, int index);
void	ft_set_lis(t_list **stack_a, t_list **stack_b, int len);
t_list	*ft_find_max_len(t_list *stack);
void	ft_index_stack(t_list *stack);
void	ft_set_req_moves(t_list **stack_a, t_list **stack_b);
void	ft_mark_prev(t_list *stack_a, t_list *top_b);

#endif