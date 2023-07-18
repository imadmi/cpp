
#pragma once
#include "AForm.hpp"
#include <iostream>

class AForm;

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;

    public :
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat & operator=(Bureaucrat const &copy);
        Bureaucrat(Bureaucrat const &copy);
        ~Bureaucrat();

        std::string getName() const ;
        int getGrade() const ;

        void incrementGrade();
        void decrementGrade();

        void signForm(AForm  &form);
        void executeForm(AForm const & form);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade too high";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade too low";
                }
        };
};

std::ostream & operator<<(std::ostream &OSTREAM,Bureaucrat &BUR);