#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) 
{
	this->_name = "Default Name";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Default constructor called" << std::endl;
	this->announce();
}

ClapTrap::ClapTrap(std::string name) 
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Name constructor called" << std::endl;
	this->announce();
}

ClapTrap::ClapTrap(std::string name, unsigned int health, unsigned int attack) 
{
	this->_name = name;
	this->_hit_points = health;
	this->_energy_points = 100;
	this->_attack_damage = attack;
	std::cout << "Complete constructor called" << std::endl;
	this->announce();
}
	
ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->_name = other.getName();
	this->_hit_points = other.getHitPoints();
	this->_energy_points = other.getEnergyPoints();
	this->_attack_damage = other.getAttackDamage();
	std::cout << "Copy constructor called" << std::endl;
	this->announce();
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other.getName();
	this->_hit_points = other.getHitPoints();
	this->_energy_points = other.getEnergyPoints();
	this->_attack_damage = other.getAttackDamage();

	// std::cout << " = Operator claptrap" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Bye bye " << this->_name << "!" << std::endl;
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

int ClapTrap::getHitPoints() const
{
	return this->_hit_points;
}

int ClapTrap::getEnergyPoints() const
{
	return this->_energy_points;
}

int ClapTrap::getAttackDamage() const
{
	return this->_attack_damage;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points >= 1)
	{
		std::cout << this->_name << " attacks " << target << " for " << this->_attack_damage << " damage!" << std::endl;
		this->_energy_points -= 1;
	}
	else
		std::cout << this->_name << " is exhausted and can't attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	if (this->_hit_points < 0)
		this->_hit_points = 0;
	std::cout << this->_name << " takes " << amount << " damage and is now at: " << this->_hit_points << " HP." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hit_points += amount;
	std::cout << this->_name << " was repaired for " << amount << " HP and is now at: " << this->_hit_points << " HP." << std::endl;
}

void ClapTrap::announce(void) const
{
	std::cout << "   -- Welcome : " << this->_name << " --" << std::endl;
	std::cout << "      Stats: " << this->_hit_points << "HP / " << this->_attack_damage << "AD" << std::endl;
}
