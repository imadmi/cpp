
SRC = main.cpp setters_getters.cpp add.cpp search.cpp
OBJ = main.o setters_getters.o add.o search.o
INC = header.hpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@ clear
	@echo "\033[0;92m./PhoneBook :\033[0m"

clean:
	@ rm -f $(OBJ)
	@ clear
	@echo "\033[0;93mObject files removed.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@ clear
	@echo "\033[0;93mThe object files and the executable are removed.\033[0m"

re: fclean $(NAME)

.PHONY: all clean fclean re
