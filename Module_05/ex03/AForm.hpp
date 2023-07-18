
#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        const int _gradeToSign;
        const int _gradeToExecute;
        bool _signed;

    public:
        AForm();
        AForm(std::string name, int gradeToExecute, int gradeToSign);
        AForm &operator=(const AForm &copy);
        AForm(const AForm &copy);
        virtual ~AForm();

        std::string  getName() const;
        int          getgradeToSign() const;
        int          getgradeToExecute() const;
        bool         getSigne() const;

        void beSigned(Bureaucrat &bureaucrate);
        virtual void execute(Bureaucrat const &executor) const = 0;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "Grade too high";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "Grade too low";
                }
        };
        class NotSignedException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "Form not signed";
                }
        };
};

std::ostream &operator<<(std::ostream &OSTREAM, AForm &AFORM);
