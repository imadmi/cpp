
#include "Weapon.hpp"

// A reference provides a convenient and safe way to access the weapon without the need for null checks or memory management. 
// It also ensures that HumanA will always have a valid weapon,
// as the reference cannot be null or reseated after initialization.
class	HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack(void);
		void	setWeapon(Weapon weapon);
};
