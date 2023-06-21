

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
    std::cout << YELLOW << "Brain default destructor called" << DEF << std::endl;
}

Brain& Brain::operator=(Brain &copy)
{
    std::cout << "Brain copy assaignement operator called" << std::endl;
    if (this != &copy)
    {
        for(int i = 0 ; i < 100 ; i++)
        {
            this->ideas[i] = copy.ideas[i];
        }
    }
    return (*this);
}