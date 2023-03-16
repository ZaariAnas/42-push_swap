# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.1337.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 12:15:21 by azari             #+#    #+#              #
#    Updated: 2023/03/16 10:20:01 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= 	gcc

CFLAGS		= 	-Wall -Wextra -Werror -fsanitize=address 

NAME 		= 	push_swap

LIBFT 		= 	libft/libft.a

FT_PRINTF 	= 	ft_printf/libftprintf.a

CFILES		= 	pushswap.c						\
				src/instructions/ft_push.c		\
				src/instructions/ft_swap.c		\
				src/instructions/ft_rrotate.c	\
				src/instructions/ft_rotate.c	\
				src/parsing/ft_parser.c			\

OFILES		= 	$(CFILES:.c=.o)

all 	:   $(NAME)

$(NAME) : $(OFILES) 
	@make bonus -C libft
	@echo "\033[33;1m😎  making LIBFT\033[0m"
	@make -C ft_printf
	@echo "\033[33;1m😎  making FT_PRINTF\033[0m"
	@$(CC) $(CFILES) libft/libft.a ft_printf/libftprintf.a -o $(NAME)
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
	@make fclean -C ft_printf
	@rm -rf $(DEP) $(NAME)
	@echo "\033[32m✅  object files and archive removed successfully.\033[0m"
	@echo "\033[33;1m😎  done cleaning\033[0m"

re		: fclean all
