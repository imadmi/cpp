

#include "Zombie.hpp"

/* Creates horde of zombies named 'name' */
Zombie*	zombieHorde(int N, std::string name);


int	main(void)
{
	int	size = 3;

	Zombie *horde = zombieHorde(size, "ZAKI");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
	horde = nullptr;
}