#ifndef SCAVTRAP
# define SCAVTRAP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(std::string name, unsigned int health, unsigned int attack);
		ScavTrap(const ClapTrap &other);
		ScavTrap &operator=(const ClapTrap &other);
		~ScavTrap(void);

		void guardGate(void) const;
};

#endif