#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	bot("Box");
	ClapTrap	bo("Bo");

	bot.attack("some creatures");
	bot.attack("some creatures");
	bot.attack("some creatures");
	bot.attack("some creatures");
	bot.attack("some creatures");
	bot.attack("some creatures");
	bot.attack("some creatures");
	bot.takeDamage(8);
	bot.attack("some creatures");
	bot.beRepaired(5);
	bot.beRepaired(5);
	bot.beRepaired(5);
	bot.takeDamage(18);
	bot.takeDamage(20);
	bot.beRepaired(5);
	bot.beRepaired(5);
	bot.attack("void");
	
	return (EXIT_SUCCESS);
}