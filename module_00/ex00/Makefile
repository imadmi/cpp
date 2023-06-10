# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/10 12:11:08 by imimouni          #+#    #+#              #
#    Updated: 2023/06/10 12:11:09 by imimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
	
FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): 
	@ c++ $(FLAGS) megaphone.cpp -o $(NAME)

clean:
	@rm -rf $(NAME)

re: clean all

.PHONY: all clean re