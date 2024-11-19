#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default name", 100, 50, 20)
{
	std::cout << "Ello ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "Ello ScavTrap name constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name, unsigned int health, unsigned int energy, unsigned int attack) : ClapTrap(name, health, energy, attack)
{
	std::cout << "Ello ScavTrap complete constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
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

void ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points >= 1)
	{
		std::cout << this->_name << " SCAVATAKS " << target << " for " << this->_attack_damage << " damage!" << std::endl;
		this->_energy_points -= 1;
	}
	else
		std::cout << this->_name << " is exhausted and can't attack!" << std::endl;
}

// ScavTrap &ScavTrap::operator=(const ScavTrap &other)
// {
// 	this->_name = other.getName();
// 	this->_hit_points = other.getHitPoints();
// 	this->_energy_points = other.getEnergyPoints();
// 	this->_attack_damage = other.getAttackDamage();

// 	std::cout << "Scav = operator" << std::endl;
// 	return *this;
// }
