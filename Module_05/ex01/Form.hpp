
#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        const int           _gradeToSign;
        const int           _gradeToExecute;
        bool                _signed;

    public:
        Form();
        Form(const std::string& name, int gradeToSign);
        Form(const std::string& name, int gradeToSign, int gradeToExecute);
        Form(const Form &copy);
        ~Form();

        Form&   operator=( const Form& rhs );

        std::string getName() const;
        bool        getSigned() const;
        int         getGradeToSign() const;
        int         getGradeToExecute() const;

        void        beSigned( const Bureaucrat& bureaucrat );

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