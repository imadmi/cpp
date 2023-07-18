
#pragma once
#include<iostream>
#include"AForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& copy);
        ~Intern();

        Intern& operator=(const Intern& copy);

        AForm*   makeForm(std::string name, std::string target);
};
