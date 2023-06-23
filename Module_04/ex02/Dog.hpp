
#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;

    public:
        Dog();
        Dog(Dog &copy);
        Dog& operator=(Dog &copy);
        ~Dog();

        virtual void makeSound() const;
};