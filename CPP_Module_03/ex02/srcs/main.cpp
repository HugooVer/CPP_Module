#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	box("Box");
	ScavTrap	bot("Serena");
	FragTrap	bok("Frog");

	bok.attack("some creatures");
	bok.beRepaired(5);
	bok.attack("some creatures");
	bok.beRepaired(5);
	bok.takeDamage(5);
	bok.highFivesGuys();

	std::cout << "-----------------------------------------" << std::endl;

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
	
	return (EXIT_SUCCESS);
}