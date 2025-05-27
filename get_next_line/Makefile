# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mech-user <mech-user@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/27 14:07:09 by mech-user         #+#    #+#              #
#    Updated: 2025/05/27 14:11:38 by mech-user        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= get_next_line.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror -D BUFFER_SIZE=42

SRC		= get_next_line.c get_next_line_utils.c main.c
OBJ		= $(SRC:.c=.o)

HEADER	= get_next_line.h


all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re