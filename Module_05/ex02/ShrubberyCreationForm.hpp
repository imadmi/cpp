
#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        const std::string _target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm &copy);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm &copy);
        ~ShrubberyCreationForm();

        std::string getTarget() const;

        void execute(Bureaucrat const &executor) const;
};
