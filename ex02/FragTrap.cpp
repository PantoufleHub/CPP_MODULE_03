#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("De")
{
	std::cout << "ragTraaaaapap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FFFFFFragTrap name constructor" << std::endl;
}

FragTrap::FragTrap(std::string name, unsigned int health, unsigned int energy, unsigned int attack) : ClapTrap(name, health, energy, attack)
{
	std::cout << "FragtrtewsdfgTrap complete constructor" << std::endl;
}

FragTrap::FragTrap(const ClapTrap &other) : ClapTrap(other)
{
	std::cout << "FRAGFRAGAFRAGSFRAGFragTrap copy constructor" << std::endl;
}

FragTrap::~FragTrap(void) 
{
	std::cout << "FragTrap " << this->_name << " out" << std::endl;
}

void FragTrap::highFivesGuys(void) const
{
		std::cout << "FragTrap " << this->_name << " is begging for a high five" << std::endl;
}

// FragTrap &FragTrap::operator=(const FragTrap &other)
// {
// 	this->_name = other.getName();
// 	this->_hit_points = other.getHitPoints();
// 	this->_energy_points = other.getEnergyPoints();
// 	this->_attack_damage = other.getAttackDamage();

// 	std::cout << "Scav = operator" << std::endl;
// 	return *this;
// }
