

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", 72, 45), _target("NULL")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy):AForm(copy), _target(copy._target)
{}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
    (void)copy;
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const 
{
    return (this->_target);
}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const 
{
    if (executor.getGrade() > this->getgradeToExecute())
        throw GradeTooLowException();
    else
    {
        if (time(0) % 2 == 0)
            std::cout << "BZZZZZT! " << _target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << std::endl;
    }
}