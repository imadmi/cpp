

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", 25, 5) , _target("NULL")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy):AForm(copy), _target(copy._target)
{}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm &copy)
{
    // (void)copy;
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