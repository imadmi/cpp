
// #include "Bureaucrat.hpp"

// std::ostream& operator<<(std::ostream& OSTREAM, Bureaucrat& BUREACRAT)
// {
//     OSTREAM << BUREACRAT.getName() << ", bureaucrat grade " << BUREACRAT.getGrade();
//     return (OSTREAM);
// }

// int   main()
// {
//     try
//     {
//         Bureaucrat bureaucrat("ash", 1);

//         std::cout << bureaucrat << std::endl;

//         // bureaucrat.incrementGrade();
//         // bureaucrat.decrementGrade();
//     }
//     catch (Bureaucrat::GradeTooHighException &e)
//     {
//         std::cout << e.what() << std::endl;
//     }

//     return (EXIT_SUCCESS);
// }

// #include <iostream>

// class MyException : public std::exception {
// public:
//     virtual const char* what() const throw() {
//         return "My exception occurred";
//     }
// };

// int main()
// {
//     throw MyException();

// }

#include <iostream>

int main()
{
    try {
        int numerator = 10;
        int denominator = 0;

        if (denominator == 0) {
            throw 0; // throwing an int as an exception
        }

        int result = numerator / denominator;
        std::cout << "Result: " << result << std::endl;
    }
    catch (int exception) {
        std::cout << "Exception caught: Division by zero!" << std::endl;
    }

    return 0;
}
