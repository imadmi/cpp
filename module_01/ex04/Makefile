

SRC = main.cpp Sed.cpp
OBJ = main.o Sed.o
FLAGS = -Wall -Wextra -Werror -std=c++98
INC = Sed.hpp
NAME = Sed
CC = c++

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@ clear
	@echo "\033[0;92m./Sed :\033[0m"

clean:
	@ rm -f $(OBJ) *.replace
	@ clear
	@echo "\033[0;93mObject files removed.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@ clear
	@echo "\033[0;93mThe object files and the executable are removed.\033[0m"

re: fclean $(NAME)

.PHONY: all clean fclean re