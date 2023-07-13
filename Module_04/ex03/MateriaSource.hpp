
#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        std::string _type;
        AMateria *_materias[4];

    public:
        MateriaSource();
        MateriaSource(std::string type);
        MateriaSource(MateriaSource &copy);
        MateriaSource & operator=(MateriaSource &copy);

        virtual ~MateriaSource();
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
        
};