#include "converter.hpp"

void	commands(void)
{
	std::cout << "\na list of all available commands:\n\n";
	std::cout << "'commands'\t\t--\t\tlists all the commands\n";
	std::cout << "'exit'\t\t\t--\t\tquits the program\n";
	std::cout << "'convert'\t\t--\t\truns the converter\n";
}

void	help(void)
{
	std::cout << "\nthis is the help page.\n\n";
	std::cout << "to get a list of available commands type 'commands'\n";
	std::cout << "when selecting what type of unit you're working with, type out the name of the unit as listed there.\n";
	std::cout << "for example: 'what type of unit do you want to convert? [mass]' without the square brackets\n";
}