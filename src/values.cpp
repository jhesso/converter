//using this to get the values and units needed for conversion
//(will replace the "main" in each unit type to decrease amount of repeating code)

#include "converter.hpp"

void	printUnits(int selectedTypeOfUnit)
{
	std::string		fileName;

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
	printFile(fileName);
	/*std::ifstream inf(fileName, std::ifstream::in); // old code that i will keep around incase i find a bug and need to come back to this
	if (!inf)
	{
		std::cout << "could not open file.";
		return ;
	}
	while (inf)
	{
		std::getline(inf, strInput);
		std::cout << strInput << '\n';
	}*/
}

void	values(int selectedTypeOfUnit, int identifier)
{
	double	valueOriginal;
	double	valueConverted;
	int		unitOriginal;
	int		unitTarget;

	valueOriginal = 0;
	valueConverted = 0;
	unitOriginal = 0;
	unitTarget = 0;
	printUnits(selectedTypeOfUnit);
	std::cout << "\n\nPlease select the original unit.\n";
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
		if (unitTarget < 1 || unitTarget > 3 || unitOriginal < 1 || unitOriginal > 3) // making sure that a proper unit is selected.
			printError(1);
		else
			temperature(valueOriginal, valueConverted, unitOriginal, unitTarget, identifier);
		break;
	case 2: // length
		if (unitTarget < 1 || unitTarget > 2 || unitOriginal < 1 || unitOriginal > 2) // making sure that a proper unit is selected.
			printError(1);
		else
			length(valueOriginal, valueConverted, unitOriginal, unitTarget, identifier);
		break;
	case 3: // mass
		if (unitTarget < 1 || unitTarget > 3 || unitOriginal < 1 || unitOriginal > 3) // making sure that a proper unit is selected.
			printError(1);
		else
			mass(valueOriginal, valueConverted, unitOriginal, unitTarget, identifier);
		break;
	case 4: // speed
		if (unitTarget < 1 || unitTarget > 2 || unitOriginal < 1 || unitOriginal > 2) // making sure that a proper unit is selected.
			printError(1);
		else
			speed(valueOriginal, valueConverted, unitOriginal, unitTarget, identifier);
		break;
	case 5: // area
		if (unitTarget < 1 || unitTarget > 2 || unitOriginal < 1 || unitOriginal > 2) // making sure that a proper unit is selected.
			printError(1);
		else
			area(valueOriginal, valueConverted, unitOriginal, unitTarget, identifier);
		break;
	case 6: // volume
		if (unitTarget < 1 || unitTarget > 2 || unitOriginal < 1 || unitOriginal > 2) // making sure that a proper unit is selected.
			printError(1);
		else
			volume(valueOriginal, valueConverted, unitOriginal, unitTarget, identifier);
		break;
	case 7: // time
		if (unitTarget < 1 || unitTarget > 11 || unitOriginal < 1 || unitOriginal > 11) // making sure that a proper unit is selected.
			printError(1);
		else
			time(valueOriginal, valueConverted, unitOriginal, unitTarget, identifier); 
		break;
	default:
		printError(4);
		break;
	}
}