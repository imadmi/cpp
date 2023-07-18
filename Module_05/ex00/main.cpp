
#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& OSTREAM, Bureaucrat& BUREACRAT)
{
    OSTREAM << BUREACRAT.getName() << ", bureaucrat grade " << BUREACRAT.getGrade();
    return (OSTREAM);
}

int main()
{
    try {
        Bureaucrat bureaucrat("Imad Mimouni", 150);
        std::cout << bureaucrat << std::endl;

        std::cout << "Created bureaucrat: " << bureaucrat.getName() << ", Grade: " << bureaucrat.getGrade() << std::endl;

        bureaucrat.incrementGrade();
        std::cout << "Incremented grade: " << bureaucrat.getGrade() << std::endl;

        bureaucrat.decrementGrade();
        std::cout << "Decremented grade: " << bureaucrat.getGrade() << std::endl;

        try
        {
            bureaucrat.incrementGrade();
        }
        catch (const Bureaucrat::GradeTooHighException& exception)
        {
            std::cout << "Caught GradeTooHighException: " << exception.what() << std::endl;
        }

        try
        {
            bureaucrat.decrementGrade();
        }
        catch (const Bureaucrat::GradeTooLowException& exception)
        {
            std::cout << "Caught GradeTooLowException: " << exception.what() << std::endl;
        }
    }
    catch (const std::exception& exception)
    {
        std::cout << "Caught exception: " << exception.what() << std::endl;
    }
    catch (...)
    {
        std::cout << "Caught exception: ..." << std::endl;
    }

    return (EXIT_SUCCESS);
}
