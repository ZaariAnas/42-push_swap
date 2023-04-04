# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.1337.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 12:15:21 by azari             #+#    #+#              #
#    Updated: 2023/04/04 17:41:46 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= 	gcc

CFLAGS		= 	-Wall -Wextra -Werror 

# -fsanitize=address

NAME 		= 	push_swap

BONUS_NAME 	= 	checker

LIBFT 		= 	libft/libft.a 

CFILES		= 	pushswap.c									\
				src/instructions/ft_push.c					\
				src/instructions/ft_swap.c					\
				src/instructions/ft_rrotate.c				\
				src/instructions/ft_rotate.c				\
				src/parsing/ft_parser.c						\
				src/sorting_3/ft_sort_3.c					\
				src/sorting_5/ft_sort_5.c					\
				src/sorting_x/ft_longest_inc_circ_subs.c	\
				src/sorting_x/ft_sort_x.c					\
				src/sorting_x/ft_utils.c					\
				src/sorting_x/ft_process_pb.c				\

BCFILES 	=	src/instructions/ft_push.c					\
				src/instructions/ft_swap.c					\
				src/instructions/ft_rrotate.c				\
				src/instructions/ft_rotate.c				\
				src/parsing/ft_parser.c						\
				bonus/get_next_line/get_next_line.c			\
				bonus/get_next_line/get_next_line_utils.c	\
				bonus/checker.c								\

OFILES		= 	$(CFILES:.c=.o)
BOFILES		= 	$(BCFILES:.c=.o)

all 	:   $(NAME)

bonus 	: 	$(BONUS_NAME)

$(NAME) : $(OFILES) 
	@make bonus -C libft
	@echo "\033[33;1m😎  making LIBFT\033[0m"
	@$(CC) $(CFILES) libft/libft.a -o $(NAME)
	@echo "\033[33;1m😎  done making\033[0m"


$(BONUS_NAME): $(BOFILES) libft/libft.a pushswap.h
	@$(CC) $(CFLAGS) $(BOFILES) libft/libft.a -o $(BONUS_NAME)
	@echo "\033[33;1m😎  making BONUS\033[0m"

clean	:
	@rm -rf $(OFILES) $(BOFILES)
	@echo "\033[32m✅  object files removed successfully.\033[0m"

fclean	: clean
	@make fclean -C libft
	@rm -rf $(NAME) $(BONUS_NAME)
	@echo "\033[32m✅  object files and archive removed successfully.\033[0m"
	@echo "\033[33;1m😎  done cleaning\033[0m"

re		: fclean all bonus