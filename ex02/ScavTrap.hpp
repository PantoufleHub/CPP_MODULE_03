#ifndef SCAVTRAP
# define SCAVTRAP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(std::string name, unsigned int health, unsigned int attack);
		ScavTrap(const ClapTrap &other);
		~ScavTrap();
		// ScavTrap &operator=(const ScavTrap &other);
		void guardGate() const;
};

#endif