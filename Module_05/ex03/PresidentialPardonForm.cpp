

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) , _target("NULL")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):AForm(copy), _target(copy._target)
{}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getgradeToExecute())
        throw GradeTooLowException();
    else if (this->getSigne() == false)
        throw NotSignedException();
    else
    {
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}

std::string PresidentialPardonForm::getTarget() const 
{
    return (this->_target);
}