//using this to get the values and units needed for conversion
//(will replace the "main" in each unit type to decrease amount of repeating code)

#include "converter.hpp"

void	printUnits(int selectedTypeOfUnit)
{
	std::string		strInput;
	std::string		fileName;

	strInput = "";
	fileName = "";
	switch (selectedTypeOfUnit)
	{
		case 1:
			fileName = "../files/temperature.txt";
			break;
		case 2:
			fileName = "../files/length.txt";
			break;
		case 3:
			fileName = "../files/mass.txt";
			break;
		case 4:
			fileName = "../files/speed.txt";
			break;
		case 5:
			fileName = "../files/area.txt";
			break;
		case 6:
			fileName = "../files/volume.txt";
			break;
		case 7:
			fileName = "../files/time.txt";
			break;
		default:
			break;
	}
	std::ifstream inf(fileName, std::ifstream::in);
	if (!inf)
	{
		std::cout << "could not open file length.txt";
		return ;
	}
	while (inf)
	{
		std::getline(inf, strInput);
		std::cout << strInput << '\n';
	}
}

void	values(int selectedTypeOfUnit)
{
	double	valueOriginal;
	int		unitOriginal;
	int		unitTarget;

	std::cout << "Please select the original unit.\n";
	printUnits(selectedTypeOfUnit);
	std::cin >> unitOriginal;
	std::cout << "please select the target unit.\n";
	std::cin >> unitTarget;
	std::cout << "Please enter the original value: ";
	std::cin >> valueOriginal;
	// add a switch statement to continue to the correct type of unit.
}