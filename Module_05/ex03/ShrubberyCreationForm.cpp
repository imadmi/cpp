

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("NULL")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : AForm(copy), _target(copy._target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
    (void)copy;
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::cout << "the execute ShrubberyCreationForm function is called" << std::endl;
    if (executor.getGrade() > this->getgradeToExecute())
        throw GradeTooLowException();
    if (this->getSigne() == false)
        throw NotSignedException();
    std::ofstream file(this->getTarget() + "_shrubbery");

    if (!file.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return;
    };
    file << "          &&& &&  & &&" << std::endl;
    file << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
    file << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
    file << "   &() &\\/&|()|/&\\/  %  & ()" << std::endl;
    file << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
    file << "&&   && & &| &| /& & % ()& /&&" << std::endl;
    file << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
    file << "     &&     \\|||" << std::endl;
    file << "             |||" << std::endl;
    file << "             |||" << std::endl;
    file << "             |||" << std::endl;
    file << "       , -=-~  .-^- _" << std::endl;
    file.close();
}
