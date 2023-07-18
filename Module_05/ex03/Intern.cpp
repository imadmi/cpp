
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& copy)
{
    *this = copy;
}

Intern& Intern::operator=(const Intern& copy)
{
    return (*this);
}

Intern::~Intern()
{}

AForm*   Intern::makeForm(std::string name, std::string target)
{
    std::string Names[] = {"robotomy request", "presidential pardon", "shrubbery creation"};

    AForm* forms[] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
    
    for (int i = 0; i < 3; i++) 
    {
        if (name == Names[i]) 
        {
            std::cout << "Intern creates " << name << " .The target is : " << target << std::endl;
            for (int j = 0; j < 3; j++)
            {
                if (i != j)
                    delete forms[j];
            }
            return (forms[i]);
        }
    }
    std::cout << "Intern cannot create : " << name << " form." << std::endl;

    return (nullptr);
}