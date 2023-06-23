
#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout << "Brain default destructor called" << std::endl;
}

Brain &Brain::operator=(Brain &copy)
{
    if (this != &copy)
    {
        for(int i = 0; i < 100; i++)
        {
                this->ideas[i] = copy.ideas[i];
        }
    }
    return *this;
}