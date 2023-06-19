

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
INC = ClapTrap.hpp ScavTrap.hpp
NAME = ScavTrap
CC = c++

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@ clear
	@echo "\033[0;92m./ScavTrap :\033[0m"

clean:
	@ rm -f $(OBJ)
	@ clear
	@echo "\033[0;93mObject files removed.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@ clear
	@echo "\033[0;93mThe object files and the executable are removed.\033[0m"

re: fclean $(NAME)

%.o: %.cpp
	@$(CC) -c $< -o $@

.PHONY: all clean fclean re