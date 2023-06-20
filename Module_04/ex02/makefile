

SRC = Animal.cpp Brain.cpp Cat.cpp Dog.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
INC = Animal.hpp Brain.hpp Cat.hpp Dog.hpp
NAME = Animal
CC = c++

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@ clear
	@echo "\033[0;92m./Animal :\033[0m"

clean:
	@ rm -f $(OBJ)
	@ clear
	@echo "\033[0;93mObject files removed.\033[0m"

fclean: clean
	@rm -f $(NAME)
	@ clear
	@echo "\033[0;93mThe object files and the executable are removed.\033[0m"

re: fclean $(NAME)

%.o: %.cpp $(INC)
	@$(CC) -c $< -o $@

.PHONY: all clean fclean re