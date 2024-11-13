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
		ScavTrap(const ScavTrap &other);
		// ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();

		void guardGate() const;
};

#endif