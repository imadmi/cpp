

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// const Animal* dog = new Dog();
	// const Animal* cat = new Cat();
	// std::cout << std::endl;
	// delete dog;
	// delete cat;

    int count = 2;	
	const Animal *(animal_array[count]);
	std::cout << std::endl;
	for (int i = 0; i < count / 2; i++)
	{
        std::cout << RED <<i + 1 << DEF << " ";
        animal_array[i] = new Dog();
    }	
	std::cout << std::endl;

	for (int i = count / 2; i < count; i++)
	{
        std::cout << RED <<i + 1 << DEF << " ";
		animal_array[i] = new Cat();
    }
    for (int i = 0; i < count; i++)
    {
        std::cout << RED <<i + 1 << DEF << " ";
        animal_array[i]->makeSound();
    }
	std::cout << std::endl;

	for (int i = 0; i < count; i++)
		delete animal_array[i];
	std::cout << std::endl;

	// copy assainement operator test
	
	Dog test;
		Dog tmp = test;

	std::cout << std::endl;

    return (EXIT_SUCCESS);
}