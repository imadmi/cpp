
#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
    private:
        const std::string _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm & operator=(const RobotomyRequestForm &copy);
        ~RobotomyRequestForm();

        std::string getTarget() const;

        void execute(Bureaucrat const & executor) const;
};