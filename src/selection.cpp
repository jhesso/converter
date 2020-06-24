#include "converter.hpp"

void	temperature(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget);
void	length(void);
void	mass(void);
void	speed(void);
void	area(void);
void	volume(void);
void	time(void);
void	values(int selectedTypeOfUnit);

void	selection(void)
{
	// let's determine what type of unit we're working with
	std::string		selection;
	int				selectedTypeOfUnit;

	selection = "";
	selectedTypeOfUnit = 0;
	// need to change into using integers "1 = temperature, select the corresponding integer..."
	std::cout << "available options:\n";
	std::cout << " - temperature\n - length\n - mass\n - speed\n - area\n - volume\n - time\n\n";
	std::cout << "what type of unit do you want to convert? ";
	std::cin >> selectedTypeOfUnit;
	if (selectedTypeOfUnit == 1) // do this for all the cases.
	{
		std::cout << "you selected " << "temperature" << ".\n";
		values(selectedTypeOfUnit);
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
	else if (selection == "time")
	{
		std::cout << "you selected " << selection << ".\n";
		time();
	}
}
