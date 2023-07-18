
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
    }
    catch (std::exception &exception)
    {
        std::cout << exception.what() << std::endl;
    }

    return (EXIT_SUCCESS);
}
