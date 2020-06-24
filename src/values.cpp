//using this to get the values and units needed for conversion
//(will replace the "main" in each unit type to decrease amount of repeating code)

#include "converter.hpp"

void	temperature(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget);
void	length(void);
void	mass(void);
void	speed(void);
void	area(void);
void	volume(void);
void	time(void);
void	printError(int errorCode);

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
	double	valueConverted;
	int		unitOriginal;
	int		unitTarget;

	valueOriginal = 0;
	valueConverted = 0;
	unitOriginal = 0;
	unitTarget = 0;
	std::cout << "Please select the original unit.\n";
	printUnits(selectedTypeOfUnit);
	std::cin >> unitOriginal;
	std::cout << "please select the target unit.\n";
	std::cin >> unitTarget;
	std::cout << "Please enter the original value: ";
	std::cin >> valueOriginal;
	// just making sure that target unit is not the same as original
	// need to convert this into using the error functions!
	if (unitOriginal == unitTarget)
	{
		std::cout << "your original unit is the same as target unit..\n";
		return ;
	}
	// add a switch statement to continue to the correct type of unit.
	switch (selectedTypeOfUnit)
	{
	case 1: // temperature
		if (unitTarget != 1 && unitTarget != 2 && unitTarget != 3) // making sure that a proper unit is selected.
			printError(1);
		else
			temperature(valueOriginal, valueConverted, unitOriginal, unitTarget);
		break;
	case 2: // length
		length();
		break;
	case 3: // mass
		mass();
		break;
	case 4: // speed
		speed();
		break;
	case 5: // area
		area();
		break;
	case 6: // volume
		volume();
		break;
	case 7: // time
		time(); 
		break;
	default:
		break;
	}
}