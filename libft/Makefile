# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.1337.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 10:30:04 by azari             #+#    #+#              #
#    Updated: 2023/03/15 17:44:51 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# _*_ MakeFile _*_

NAME = libft.a
CC = cc
FLAGS =  -Wall -Werror -Wextra
CFILES =  ft_strlen.c  ft_isdigit.c  ft_strchr.c ft_atoi.c  ft_strdup.c \
		  ft_substr.c ft_strjoin.c  ft_raise_error.c ft_strtok.c ft_check_sort_list.c ft_strtok.c
		  
BONUSC = ft_lstadd_back.c ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstdelone.c ft_lstclear.c 
OFILES = ${CFILES:.c=.o}
BONUSO = ${BONUSC:.c=.o}

all : ${NAME}

${NAME} : ${OFILES}
	@ar -crs ${NAME} ${OFILES}
	
bonus : ${OFILES} ${BONUSO}
	@ar -crs ${NAME} ${OFILES} ${BONUSO}

%.o:%.c libft.h
	@${CC} -c ${FLAGS} $<

clean :
	@rm -f ${OFILES} ${BONUSO}

fclean : clean
	@rm -f ${NAME}

re : fclean all bonus

.PHONY: clean fclean re all