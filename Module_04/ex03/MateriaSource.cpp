

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->_materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(std::string type)
{
    this->_type = type;
    for (int i = 0; i < 4; i++)
    {
        this->_materias[i] = NULL;
    }
    
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource default distructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i])
            delete this->_materias[i];
    }
    
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
    std::cout << "MateriaSource copy constroctor called" << std::endl;
    *this = copy;
}

MateriaSource& MateriaSource::operator=(MateriaSource &copy)
{
    std::cout << "MateriaSource copy assainement operator called" << std::endl;
    if (this != &copy)
    {
        this->_type = copy._type;
        for(int i = 0; i < 4; i++)
        {
            if (this->_materias[i])
                delete this->_materias[i];
            this->_materias[i] = copy._materias[i];
        }
    }
    return (*this);
 }

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] && this->_materias[i]->getType() == type )
        {
            return this->_materias[i]->clone();
        }
    }
    return (NULL);
}

void MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materias[i])
        {
            this->_materias[i] = materia;
            return;
        }
    }
}