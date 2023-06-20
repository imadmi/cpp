
#pragma once
#include <iostream>


class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal( std::string type );
        WrongAnimal(WrongAnimal &copy);
        WrongAnimal & operator=(WrongAnimal &copy);
        ~WrongAnimal();

        void            setType(std::string type);
        std::string     getType() const;

        void    makeSound() const;
};