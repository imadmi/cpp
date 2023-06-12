

SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJ = HumanA.o HumanB.o main.o Weapon.o
FLAGS = -Wall -Wextra -Werror -std=c++98
INC = HumanA.hpp HumanB.hpp Weapon.hpp
NAME = Weapon
CC = c++

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@ clear
	@echo "\033[0;92m./Weapon :\033[0m"

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
