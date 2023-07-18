
#include "Form.hpp"

std::ostream& operator<<(std::ostream& OSTREAM, Bureaucrat& BUREACRAT)
{
    OSTREAM << BUREACRAT.getName() << ", bureaucrat grade " << BUREACRAT.getGrade();
    return (OSTREAM);
}

std::ostream & operator<<(std::ostream &OSTREAM,Form &FORM)
{
    OSTREAM << "The Form : " << FORM.getName() << std::endl;
    OSTREAM << "Signed grade " << FORM.getGradeToSign() << std::endl;
    OSTREAM << "Executed grade " << FORM.getGradeToExecute() << std::endl;
    OSTREAM << "Signe " << FORM.getSigned() << std::endl;
    return (OSTREAM);
}

int main()
{
    try
    {
        Bureaucrat bureaucrat("Imad", 10);
        Form form("Form 1", 90);
        std::cout << form << std::endl;
        std::cout << std::endl;
        std::cout << bureaucrat << std::endl;
        std::cout << std::endl;
        form.beSigned(bureaucrat);
        bureaucrat.signForm(form);
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception occurred: " << e.what() << std::endl;
    }
    return (EXIT_SUCCESS);
}