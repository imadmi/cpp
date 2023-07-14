

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
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

void    Bureaucrat::incrementGrade()
{
    if (_grade  <= 1)
        throw GradeTooHighException();
    _grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& BUREACRAT)
{
    if (this != &BUREACRAT)
        _grade = BUREACRAT.getGrade();
    return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) : _name(copy._name)
{
    if (this != &copy)
    {
        this->_grade = copy._grade;
    }
}

// void    Bureaucrat::signForm(Form& form)
// {
//     try
//     {
//         form.beSigned( *this );
//         std::cout << *this << " signed " << form.getName() << std::endl;
//     }
//     catch (Form::GradeTooLowException &e)
//     {
//         std::cout << _name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
//     }
// }
