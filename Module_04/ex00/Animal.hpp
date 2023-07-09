
#pragma once
#include <iostream>


class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal( std::string type );
        Animal(Animal &copy);
        Animal & operator=(Animal &copy);
        virtual ~Animal(); // virtual means we can override it in the driven classes 

        void            setType(std::string type);
        std::string     getType() const;

        virtual void    makeSound() const; // const 7it fmain daro const
};