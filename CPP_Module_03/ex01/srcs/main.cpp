#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	box("Box");
	ScavTrap	bot("Serena");

	bot.attack("some creatures");
	bot.beRepaired(5);
	bot.attack("some creatures");
	bot.beRepaired(5);
	bot.takeDamage(5);
	bot.guardGate();

	std::cout << "-----------------------------------------" << std::endl;

	box.attack("some creatures");
	box.beRepaired(5);
	box.attack("some creatures");
	box.beRepaired(5);
	box.takeDamage(5);

	std::cout << "--------------------------------" << std::endl;

	ScavTrap cp("cpy");
	cp.beRepaired(1);
	ScavTrap cpy(cp);
	cpy.beRepaired(1);
	
	return (EXIT_SUCCESS);
}