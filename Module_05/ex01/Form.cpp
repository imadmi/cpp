

#include "Form.hpp"

Form::Form() : _name("NULL"), _gradeToSign(0), _gradeToExecute(0), _signed(false)
{}

Form::Form(const std::string& name, int gradeToSign) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(0), _signed(false)
{
    if (gradeToSign < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150)
        throw GradeTooLowException();
}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _signed(false)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& FORM) : _name(FORM.getName()), _gradeToSign(FORM.getGradeToSign()), _gradeToExecute(FORM.getGradeToExecute())
{}

Form::~Form()
{}

Form & Form::operator=(Form const  &copy)
{
    if (this != &copy)
        this->_signed = copy._signed;
    return (*this);
}

std::string Form::getName() const
{
    return (_name);
}

bool   Form::getSigned() const
{
    return (_signed);
}

int   Form::getGradeToSign() const
{
    return (_gradeToSign);
}

int   Form::getGradeToExecute() const
{
    return (_gradeToExecute);
}

void    Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _signed = true;
}
