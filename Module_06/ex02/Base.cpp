
#include "A.hpp"
#include "C.hpp"
#include "B.hpp"
#include "Base.hpp"

Base *Base::generate()
{
    Base *base;
    int i = time(NULL);

    if (i % 3 == 0)
        base = new C;
    else if (i % 3 == 1)
        base = new B;
    else
        base = new A;
    return (base);
}

void Base::identify(Base *p)
{
    // std::cout << "Base *p" << std::endl;
    try
    {
        if (dynamic_cast<A*>(p))
            std::cout << "Type A" << std::endl;
        if (dynamic_cast<B*>(p))
            std::cout << "Type B" << std::endl;
        if (dynamic_cast<C*>(p))
            std::cout << "Type C" << std::endl;
    }
    catch(const std::exception &e)
    {}
}

void Base::identify(Base &ref)
{
    // std::cout << "Base &ref" << std::endl;
    try
    {
        A &aRef = dynamic_cast<A &>(ref);
        std::cout << "Type A" << std::endl;
    }
    catch(const std::exception &e)
    {}
    
    try
    {
        B &bRef = dynamic_cast<B &>(ref);
        std::cout << "Type B" << std::endl;
    }
    catch(const std::exception &e)
    {}
    
    try
    {
        C &cRef = dynamic_cast<C &>(ref);
        std::cout << "Type C" << std::endl;
    }
    catch(const std::exception &e)
    {}
}

Base::~Base()
{}
