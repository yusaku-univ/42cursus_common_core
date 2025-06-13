# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yutakumi <yutakumi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/13 19:27:37 by yutakumi          #+#    #+#              #
#    Updated: 2025/06/13 19:27:48 by yutakumi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= get_next_line

CC		= cc
CFLAGS	= -Wall -Wextra -Werror -D BUFFER_SIZE=42

SRC		= get_next_line.c get_next_line_utils.c main.c
OBJ		= $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re