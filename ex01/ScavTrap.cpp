#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Ello ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Ello ScavTrap name constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name, unsigned int health, unsigned int attack) : ClapTrap(name, health, attack)
{
	std::cout << "Ello ScavTrap complete constructor" << std::endl;
}

ScavTrap::ScavTrap(const ClapTrap &other) : ClapTrap(other)
{
	std::cout << "Ello ScavTrap copy constructor" << std::endl;
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "ScavTrap " << this->_name << " out" << std::endl;
}

void ScavTrap::guardGate(void) const
{
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
