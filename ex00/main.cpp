#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap c1;
	ClapTrap c2("Bibu");
	ClapTrap c3("Tipu", 99, 25);
	ClapTrap c4(c3);

	c1.attack(c2.getName());
	c2.takeDamage(c1.getAttackDamage());
	c2.beRepaired(5000);
	for (int i = 0; i < 15; i++)
		c2.attack("an innocent squirrel");
	return 0;
}