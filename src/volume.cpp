#include "converter.hpp"

double convertToLiters(double volumeOriginal, double volumeConverted, char unitTarget)
{
	volumeConverted = volumeOriginal / 0.26417; // liter = 1gal / 0.26417
	return (volumeConverted);
}

double convertToGallons(double volumeOriginal, double volumeConverted, char unitTarget)
{
	volumeConverted = volumeOriginal * 0.26417; //gallon = liter * 0.26417
	return (volumeConverted);
}

void	volume(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier)
{
	// acts as a "main" for volume conversion.
	double		volumeOriginal;
	double		volumeConverted;
	char		unitOriginal;
	char		unitTarget;

	volumeOriginal = 0;
	volumeConverted = 0;
	unitOriginal = 'a';
	unitTarget = 'a';
	while (unitOriginal != 'l' && unitOriginal != 'g')
	{
		std::cout << "Available units are l = liter, g = gallon.\n";
		std::cout << "Please enter the unit you're converting from: ";
		std::cin  >> unitOriginal;
		if (unitOriginal != 'l' && unitOriginal != 'g')
			std::cout << "Please try again.\n";
	}
	while (unitTarget != 'l' && unitTarget != 'g')
	{
		std::cout << "Available units are l = liter, g = gallon.\n";
		std::cout << "Please enter the unit you're converting to: ";
		std::cin >> unitTarget;
		if (unitTarget != 'l' && unitTarget != 'g')
			std::cout << "Please try again.\n";
	}
	std::cout << "Please enter the amount you're converting: ";
	std::cin >> volumeOriginal;
	if (unitTarget == unitOriginal && unitOriginal == 'l')
	{
		std::cout << volumeOriginal << unitTarget << " = " << volumeOriginal << unitOriginal << std::endl;
		return ;
	}
	else if (unitTarget == unitOriginal && unitOriginal == 'g')
	{
		std::cout << volumeOriginal << "gallons = " << volumeOriginal << "gallons" << std::endl;
		return ;
	}
	if (unitTarget == 'l')
	{
		volumeConverted = convertToLiters(volumeOriginal, volumeConverted, unitTarget);
		std::cout << volumeOriginal << "gallons = " << volumeConverted << unitTarget << std::endl;
	}
	else if (unitTarget == 'g')
	{
		volumeConverted = convertToGallons(volumeOriginal, volumeConverted, unitTarget);
		std::cout << volumeOriginal << unitOriginal << " = " << volumeConverted << "gallons\n";
	}
}