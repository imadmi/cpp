

SRC = main.cpp ZombieHorde.cpp Zombie.cpp
OBJ = main.o ZombieHorde.o Zombie.o
FLAGS = -Wall -Wextra -Werror -std=c++98
INC = Zombie.hpp
NAME = Zombie
CC = c++

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@ clear
	@echo "\033[0;92m./Zombie :\033[0m"

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
