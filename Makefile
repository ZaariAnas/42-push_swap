# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azari <azari@student.1337.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 12:15:21 by azari             #+#    #+#              #
#    Updated: 2023/03/12 15:29:11 by azari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= 	gcc

CFLAGS		= 	-Wall -Wextra -Werror -MMD -fsanitize=address 

NAME 		= 	push_swap

LIBFT 		= 	libft/libft.a

FT_PRINTF 	= 	ft_printf/libftprintf.a

CFILES		= 	pushswap.c	\
				instruc.c	\

OFILES		= 	$(CFILES:.c=.o)

DEP			= 	$(CFILES:.c=.d)

all 	:   $(NAME) 

$(NAME) : $(OFILES) 
	@make -C libft
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

-include $(DEP)