
#pragma once
#include <iostream>
#define RED "\033[41m"
#define DEF "\033[0m"
#define YELLOW "\033[0;33m\0"

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(Animal &copy);
        Animal & operator=(Animal &copy);
        virtual ~Animal();

        void setType(std::string);
        std::string getType() const;

        virtual  void makeSound() const = 0;
};