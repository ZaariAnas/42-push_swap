/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:13:44 by azari             #+#    #+#             */
/*   Updated: 2023/04/04 18:16:49 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"
# include "bonus/get_next_line/get_next_line.h"

t_list	*ft_parser(char	**av);
void	ft_swp(t_list **lst);
void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **lst1, t_list **lst2);
void	ft_push(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ft_rot(t_list **stack);
void	ra(t_list **stack);
void	rb(t_list **stack);
void	rr(t_list **stack_a, t_list **stack_b);
void	ft_rrot(t_list **stack);
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
void	ft_mark_prev(t_list *stack_a, t_list **node);
void	ft_set_req_moves(t_list **stack_a, t_list **stack_b);
t_list	*ft_find_min(t_list **stack);
void	ft_null_prev(t_list **stka, t_list **stkb);
void	ft_sort_x(t_list **stack_a, t_list **stack_b);
void	ft_process_pb(t_list **stack_a, t_list **stack_b, t_list *target);
void	ft_push_pos(t_list **stack_a, t_list **stack_b, t_list *target);
void	ft_push_neg(t_list **stack_a, t_list **stack_b, t_list *target);
void	ft_push_diff(t_list **stack_a, t_list **stack_b, t_list *target);
void	ft_push_diff2(t_list **stack_a, t_list **stack_b, t_list *target);
void	ft_addback(t_list **stack_a, t_list **stack_b);
void	ft_find_lis(t_list	**stack);
void	ft_exec_instruc(t_list **stack_a, t_list **stack_b, char *instruc);

#endif