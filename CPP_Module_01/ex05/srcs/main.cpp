
#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("THIS");
	harl.complain("IS");
	harl.complain("NOT");
	harl.complain("A");
	harl.complain("VALID");
	harl.complain("ARGUMENT");
	harl.complain("");
	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	return 0;
}