#ifndef FRAGTRAP
# define FRAGTRAP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(std::string name, unsigned int health, unsigned int energy, unsigned int attack);
		FragTrap(const ClapTrap &other);
		// FragTrap &operator=(const ClapTrap &other);
		~FragTrap();

		void highFivesGuys(void) const;
};

#endif