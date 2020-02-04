#include "converter.hpp"

void	temperature(void);
void	length(void);
void	mass(void);
void	speed(void);
void	area(void);
void	volume(void);

void	selection(void)
{
	// let's determine what type of unit we're working with
	std::string		selection;

	selection = "";
	std::cout << "available options:\n";
	std::cout << " - temperature\n - length\n - mass\n - speed\n - area\n - volume\n\n";
	std::cout << "what type of unit do you want to convert? ";
	std::cin >> selection;
	if (selection == "temperature")
	{
		std::cout << "you selected " << selection << ".\n";
		temperature();
	}
	else if (selection == "length")
	{
		std::cout << "you selected " << selection << ".\n";
		length();
	}
	else if (selection == "mass")
	{
		std::cout << "you selected " << selection << ".\n";
		mass();
	}
	else if (selection == "speed")
	{
		std::cout << "you selected " << selection << ".\n";
		speed();
	}
	else if (selection == "area")
	{
		std::cout << "you selected " << selection << ".\n";
		area();
	}
	else if (selection == "volume")
	{
		std::cout << "you selected " << selection << ".\n";
		volume();
	}
}