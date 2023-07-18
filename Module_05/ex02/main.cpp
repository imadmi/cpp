
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()   
{
    try
    {
        Bureaucrat bureaucrat("imad", 120);
        Bureaucrat bureaucrat1("imad", 40);
        Bureaucrat bureaucrat2("imad", 1);

        ShrubberyCreationForm form("hello");
        RobotomyRequestForm form1("Hey");
        PresidentialPardonForm form2("Hi");

        form.beSigned(bureaucrat);
        form1.beSigned(bureaucrat1);
        form2.beSigned(bureaucrat2);

        form.execute(bureaucrat);
        std::cout << std::endl;
        form1.execute(bureaucrat1);
        std::cout << std::endl;
        form2.execute(bureaucrat2);
    }
    catch (const std::exception& exception)
    {
        std::cout << "Exception occurred: " << exception.what() << std::endl;
    }
    catch (...)
    {
        std::cout << "Exception occurred." << std::endl;
    }

    return 0;
}
