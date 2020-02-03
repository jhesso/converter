#include "converter.hpp"

void	temperature(void);
void	length(void);
void	mass(void);
void	speed(void);

void	selection(void)
{
	// let's determine what type of unit we're working with
	std::string		selection;

	selection = "";
	std::cout << "available options:\n";
	std::cout << " - temperature\n - length\n - mass\n - speed\n\n";
	std::cout << "what type of unit do you want to convert? ";
	std::cin >> selection;
	if (selection == "temperature")
	{
		std::cout << "you selected " << selection << " temperature.\n";
		temperature();
	}
	else if (selection == "length")
	{
		std::cout << "you selected " << selection << " length.\n";
		length();
	}
	else if (selection == "mass")
	{
		std::cout << "you selected " << selection << " mass.\n";
		mass();
	}
	else if (selection == "speed")
	{
		std::cout << "you selected " << selection << " speed.\n";
		speed();
	}
}