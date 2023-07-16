
#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public AForm
{
    private:
        const std::string _target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &copy);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm & operator=(PresidentialPardonForm const &copy);
        ~PresidentialPardonForm();

        std::string getTarget() const;
        void execute(Bureaucrat const & executor) const;
};