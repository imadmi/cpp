
#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public AForm
{
    private:
        const std::string _target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm & operator=(const PresidentialPardonForm &copy);
        ~PresidentialPardonForm();

        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};