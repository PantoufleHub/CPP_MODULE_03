#ifndef CLAPTRAP
# define CLAPTRAP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, unsigned int health, unsigned int energy, unsigned int attack);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();

		std::string getName() const;
		int getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void announce() const;
};

#endif