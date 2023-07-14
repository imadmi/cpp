

#include "Form.hpp"

Form::Form() : _name("NULL"), _gradeToSign(0), _gradeToExecute(0)
{}

Form::Form(std::string& name, int gradeToSign) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(0)
{
    if (gradeToSign < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150)
        throw GradeTooLowException();
}

Form::Form(std::string name,  int gradeE, int gradeS) : _name(name) , _gradeE(gradeE), _gradeS(gradeS), _signed(false)
{
    if (gradeS < 1 || gradeE < 1)
        throw GradeTooHighException();
    if (gradeS> 150 || gradeE > 150)
        throw GradeTooLowException();
}

Form::Form(Form& FORM) : _name(FORM.getName()), _gradeToSign(FORM.getGradeToSign()), _gradeToExecute(FORM.getGradeToExecute())
{}

Form::~Form()
{}

Form & Form::operator=(Form  &copy)
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
        throw Form::GradeTooLowException();
    _signed = true;
}
