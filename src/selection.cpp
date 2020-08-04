#include "converter.hpp"

void	values(int selectedTypeOfUnit, int identifier);
void	printError(int errorCode);

void	selection(void)
{
	// let's determine what type of unit we're working with
	int				selectedTypeOfUnit;
	int				errorCheck;
	int				identifier;
	std::string		selection;

	selection = " ";
	selectedTypeOfUnit = 0;
	errorCheck = 0;
	identifier = 0;
	// need to change into using integers "1 = temperature, select the corresponding integer..."
	std::cout << "available options:\n";
	std::cout << " 1 temperature\n 2 length\n 3 mass\n 4 speed\n 5 area\n 6 volume\n 7 time\n\n";
	std::cout << "what type of unit do you want to convert? (enter corresponding number of the unit) ";
	std::cin >> selection;
	errorCheck = std::stoi(selection);
	if (errorCheck < 1 || errorCheck > 7)
		printError(2);
	selectedTypeOfUnit = std::stoi(selection);
	if (selectedTypeOfUnit == 1) // do this for all the cases.
	{
		std::cout << "you selected " << "temperature" << ".\n";
		identifier = selectedTypeOfUnit;
		values(selectedTypeOfUnit, identifier);
	}
	else if (selectedTypeOfUnit == 2)
	{
		std::cout << "you selected " << "length" << ".\n";
		identifier = selectedTypeOfUnit;
		values(selectedTypeOfUnit, identifier);
	}
	else if (selectedTypeOfUnit == 3)
	{
		std::cout << "you selected " << "mass" << ".\n";
		identifier = selectedTypeOfUnit;
		values(selectedTypeOfUnit, identifier);
	}
	else if (selectedTypeOfUnit == 4)
	{
		std::cout << "you selected " << "speed" << ".\n";
		identifier = selectedTypeOfUnit;
		values(selectedTypeOfUnit, identifier);
	}
	else if (selectedTypeOfUnit == 5)
	{
		std::cout << "you selected " << "area" << ".\n";
		identifier = selectedTypeOfUnit;
		values(selectedTypeOfUnit, identifier);
	}
	else if (selectedTypeOfUnit == 6)
	{
		std::cout << "you selected " << "volume" << ".\n";
		identifier = selectedTypeOfUnit;
		values(selectedTypeOfUnit, identifier);
	}
	else if (selectedTypeOfUnit == 7)
	{
		std::cout << "you selected " << "time" << ".\n";
		identifier = selectedTypeOfUnit;
		values(selectedTypeOfUnit, identifier);
	}
}
