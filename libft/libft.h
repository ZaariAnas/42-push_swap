/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.1337.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:58:08 by azari             #+#    #+#             */
/*   Updated: 2023/03/15 17:57:26 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define ARG_INT_ERR "error\nunvalid type of argument :: integer needed"
# define ARG_NUM_ERR "error\ninsufficient number of arguments"
# define ARG_DUP_ERR "error\nunvalid arguments :: no duplicates allowed"
# define ARG_SORT_ERR "error\nunvalid arguments :: arguments sorted"

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstadd_back(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(int));
void	ft_lstclear(t_list **lst, void (*del)(int));
void	ft_raise_error(char *str, int size);
int		ft_check_sort_list(t_list *lst);
char	*ft_strtok(char *str, char *sep);

#endif
