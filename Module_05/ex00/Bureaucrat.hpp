

#pragma once
#include <iostream>

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& src);
        ~Bureaucrat();
        Bureaucrat& Bureaucrat::operator=(const Bureaucrat& BUREACRAT);

        std::string getName() const;
        int         getGrade() const;

        // void        incrementGrade();
        // void        decrementGrade();

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

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs );
