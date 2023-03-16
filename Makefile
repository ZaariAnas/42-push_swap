# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.1337.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 12:15:21 by azari             #+#    #+#              #
#    Updated: 2023/03/16 14:56:00 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= 	gcc

CFLAGS		= 	-Wall -Wextra -Werror -fsanitize=address 

NAME 		= 	push_swap

LIBFT 		= 	libft/libft.a 

CFILES		= 	pushswap.c							\
				src/instructions/ft_push.c			\
				src/instructions/ft_swap.c			\
				src/instructions/ft_rrotate.c		\
				src/instructions/ft_rotate.c		\
				src/parsing/ft_parser.c				\
				src/sorting_3/ft_sort_3.c			\
				src/sorting_5/ft_sort_5.c			\

OFILES		= 	$(CFILES:.c=.o)

all 	:   $(NAME)

$(NAME) : $(OFILES) 
	@make bonus -C libft
	@echo "\033[33;1m😎  making LIBFT\033[0m"
	@$(CC) $(CFILES) libft/libft.a -o $(NAME)
	@echo "\033[33;1m😎  done making\033[0m"
	@echo "\033[93;1m                                                           \n\
		██████╗ ██╗   ██╗███████╗██╗  ██╗        ███████╗██╗    ██╗ █████╗ ██████╗	\n\
		██╔══██╗██║   ██║██╔════╝██║  ██║        ██╔════╝██║    ██║██╔══██╗██╔══██╗	\n\
		██████╔╝██║   ██║███████╗███████║        ███████╗██║ █╗ ██║███████║██████╔╝	\n\
		██╔═══╝ ██║   ██║╚════██║██╔══██║        ╚════██║██║███╗██║██╔══██║██╔═══╝ 	\n\
		██║     ╚██████╔╝███████║██║  ██║███████╗███████║╚███╔███╔╝██║  ██║██║     	\n\
		╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝		\n\
                                                                       	 		\033[0m"
	@echo "                                                      \033[97mBy: Anas Zari"

clean	:
	@rm -rf $(OFILES)
	@echo "\033[32m✅  object files removed successfully.\033[0m"

fclean	: clean
	@make fclean -C libft
	@rm -rf $(DEP) $(NAME)
	@echo "\033[32m✅  object files and archive removed successfully.\033[0m"
	@echo "\033[33;1m😎  done cleaning\033[0m"

re		: fclean all
