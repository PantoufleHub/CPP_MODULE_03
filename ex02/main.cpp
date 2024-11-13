#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	// ClapTrap c1;
	// ClapTrap c2("Bibu");
	// ClapTrap c3("Tipu", 99, 25);
	// ClapTrap c4(c3);

	// c1.attack(c2.getName());
	// c2.takeDamage(c1.getAttackDamage());
	// c2.beRepaired(5000);
	// for (int i = 0; i < 15; i++)
	// 	c2.attack("an innocent squirrel");

	// ScavTrap s1;
	// ScavTrap s2("Scavos");
	// ScavTrap s3("Blipblop", 12345, 54321);
	// ScavTrap s4(s3);
	// s1.attack(s2.getName());
	// s2.takeDamage(s1.getAttackDamage());
	// s2.beRepaired(5000);
	// for (int i = 0; i < 51; i++)
	// 	s2.attack("an innocent squirrel");
	// s1.guardGate();
	// s4.guardGate();


	FragTrap f1;
	FragTrap f2("Scavos");
	FragTrap f3("Blipblop", 12345, 54321);
	FragTrap f4(f3);
	f1.attack(f2.getName());
	f2.takeDamage(f1.getAttackDamage());
	f2.beRepaired(5000);
	for (int i = 0; i < 51; i++)
		f2.attack("an innocent squirrel");
	f1.highFivesGuys();
	f4.highFivesGuys();
	return 0;
}