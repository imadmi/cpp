
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{


    const Animal* meta = new Animal();
    std::cout << std::endl;
    const Animal* i = new Cat();
    std::cout << std::endl;
    const Animal* j = new Dog();

    std::cout << std::endl;

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;

    const WrongAnimal* h = new WrongCat();
    std::cout << std::endl;
    std::cout << h->getType() << std::endl;
    h->makeSound();

    // WrongAnimal wronganimal("Al 7ayawan lghalat");
    // wronganimal.makeSound();
    // std::cout << std::endl;

    // WrongCat wrongcat;
    // wrongcat.setType("wrongcat");
    // wrongcat.makeSound();
    // std::cout << std::endl;

    delete meta;
    std::cout << std::endl;
    delete i;
    std::cout << std::endl;
    delete j;
    std::cout << std::endl;
    delete h;

    return (EXIT_SUCCESS);
}