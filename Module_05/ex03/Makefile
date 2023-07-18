

SRC = Bureaucrat.cpp main.cpp AForm.cpp Intern.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
INC = AForm.hpp Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp Intern.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
NAME = Bureaucrat
CC = c++

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@ clear
	@echo "\033[0;92m./Bureaucrat :\033[0m"

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