
#pragma once
#include <iostream>

class Base
{
    public:
        Base *generate(void);
        void identify(Base* p);
        void identify(Base& p);

        virtual ~Base();
};
