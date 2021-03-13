# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/13 09:55:55 by donggele          #+#    #+#              #
#    Updated: 2021/03/13 09:56:04 by donggele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = main.c ft_parse_dict.c separator.c print_number.c ft_strcmp.c \
	  input_nb.c ft_verif_dict_lenght.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all
