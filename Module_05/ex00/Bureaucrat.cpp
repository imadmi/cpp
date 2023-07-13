

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat& src ) : _name(src._name), _grade(src._grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

// void    Bureaucrat::incrementGrade()
// {
//     if ( _grade - 1 < 1 )
//         throw Bureaucrat::GradeTooHighException();
//     _grade--;
// }

// void    Bureaucrat::decrementGrade()
// {
//     if ( _grade + 1 > 150 )
//         throw Bureaucrat::GradeTooLowException();
//     _grade++;
// }

// Bureaucrat& Bureaucrat::operator=(const Bureaucrat& BUREACRAT)
// {
//     if ( this != &BUREACRAT )
//         _grade = BUREACRAT.getGrade();
//     return (*this);
// }