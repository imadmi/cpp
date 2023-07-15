

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("NULL")
{}

Bureaucrat::Bureaucrat(std::string name,  int grade) : _name(name) ,_grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat &copy)
{
    if (this != &copy)
    {
        this->_grade = copy._grade;
    }
    return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) : _name(copy._name)
{
    if (this != &copy)
    {
        _grade = copy._grade;
    }
}

Bureaucrat::~Bureaucrat()
{}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::decrementGrade()
{
    if (_grade >= 150)
        throw GradeTooLowException(); 
    _grade++;
}

void Bureaucrat::incrementGrade()
{
    if (_grade  <= 1)
        throw GradeTooHighException(); 
    _grade--;
}

void Bureaucrat::signForm(AForm &form)
{
    // try
    // {    
    if (form.getSigne() == true)
    {
        std::cout << *this << "signed " << form << std::endl;
    }
    else if (form.getgradeToSign() > this->getGrade())
        throw GradeTooLowException();
    // }
    // catch(const std::exception &exception)
    // {
    //     std::cout << *this << "couldn’t sign " << form << exception.what() << std::endl;
    // }
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executes " << form.getName() << std::endl;
    }
    catch(const std::exception& exception)
    {
        std::cout << "couldn't execute " << form.getName() << " because " << exception.what() << std::endl;
    }
}

std::ostream & operator<<(std::ostream &OSTREAM, Bureaucrat &BUR)
{
    OSTREAM << BUR.getName() << ", bureaucrat grade "<< BUR.getGrade() << std::endl;
    return (OSTREAM);
}