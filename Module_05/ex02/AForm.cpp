

#include "AForm.hpp"

AForm::AForm():_name("NULL"), _signed(false),  _gradeToSign(1), _gradeToExecute(1)
{}

AForm::~AForm()
{}

AForm::AForm(std::string name, int gradeToExecute, int gradeToSign) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm &AForm::operator=(const AForm &copy)
{
    if (this != &copy)
    {
        this->_signed = copy._signed;
    }
    return (*this);
}

AForm::AForm(const AForm &copy): _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
    *this = copy;
}

std::string AForm::getName() const
{
    return (_name);
}

int AForm::getgradeToSign() const
{
    return (_gradeToSign);
}

int AForm::getgradeToExecute() const
{
    return (_gradeToExecute);
}

bool AForm::getSigne() const
{
    return (_signed);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    // try
    // {
    if (this->getgradeToSign() >= bureaucrat.getGrade())
        _signed = true;
    else
        throw GradeTooLowException();
    // }
    // catch(const std::exception& exception)
    // {
    //     std::cerr << exception.what() <<std::endl;
    // }   
}

std::ostream & operator<<(std::ostream &OSTREAM, AForm &AFORM)
{
    OSTREAM << "the Form: " << AFORM.getName() << std::endl;
    OSTREAM << "signed grade " << AFORM.getgradeToSign() << std::endl;
    OSTREAM << "executed grade " << AFORM.getgradeToExecute() << std::endl;
    OSTREAM << "signe " << AFORM.getSigne() << std::endl;
    return (OSTREAM);
}