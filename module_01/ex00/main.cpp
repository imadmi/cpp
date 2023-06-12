#include "Zombie.hpp"

//creates a zombie, name it, and return it so you can use it outside of the function scope
Zombie	*newZombie(std::string name);

//creates a zombie, name it, and the zombie announces itself
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*new_membre_zombie = newZombie("IMAD");
	// new_membre_zombie->announce();
	delete (new_membre_zombie);
	std::cout << std::endl;

	randomChump("MIMOUNI");

	return (EXIT_SUCCESS);
}
