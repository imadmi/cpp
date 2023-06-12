
#include "Weapon.hpp"

// By using a pointer, 
// we can have the option to assign a weapon to HumanB at a later time,
// or leave it uninitialized if desired
class	HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};
