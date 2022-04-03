# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 23:15:55 by zrdouane          #+#    #+#              #
#    Updated: 2022/03/29 23:15:56 by zrdouane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c
OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

NONE='\033[0m'
GREEN='\033[32m'
GRAY='\033[2;37m'
CURSIVE='\033[3m'

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(CURSIVE)$(GRAY)"          - Generating $(NAME)..." $(NONE)
	@ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	@echo $(CURSIVE)$(GRAY)"          - Compiling libft..." $(NONE)
	@gcc $(FLAGS) -c $(SRC)

norm:
	@norminette $(SRC) libft.h

clean:
	@echo $(CURSIVE)$(GRAY)"          - Removing libft object files"... $(NONE)
	@rm -f $(OBJ)

fclean: clean
	@echo $(CURSIVE)$(GRAY)"          - Removing $(NAME)..." $(NONE)
	@rm -f $(NAME)

re: fclean all
