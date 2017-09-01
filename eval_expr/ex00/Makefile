# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qponcele <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/26 22:52:53 by qponcele          #+#    #+#              #
#    Updated: 2017/08/29 21:34:30 by qponcele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
FILES = do_op ft_exe ft_io ft_utills
SRC_DIR = ./src
INCLUDES = ./includes

FILESC = ./src/*.c
FILESO = *.o

.PHONY: all clean fclean re

all: test

test:
	@rm -rf $(NAME)
	@cat > $(NAME) <<< "bc <<< \$$1"
	@chmod 500 $(NAME)

$(FILESO):
	@gcc -Wall -Wextra -Werror -c -I $(INCLDUES) $(FILESC)

$(NAME):
	@gcc -Wall -Wextra -Werror -o $(NAME) -I $(INCLUDES) $(FILESO)

clean:
	@rm -rf $(NAME)
	@/bin/rm -f $(FILESO) 

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
