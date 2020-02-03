#include "converter.hpp"

// named areaconverter and not just area because visual studio code fucks it up if its named area.cpp

double	convertToSqrMtr(double areaOriginal, double areaConverted, char targetUnit)
{
	areaConverted = areaOriginal * 10.764; // sqrmtr = sqrft * 10,764
	return (areaConverted);
}

void	area(void) // "main" for the area conversion
{
	double	areaOriginal;
	double	areaConverted;
	char	originalUnit;
	char	targetUnit;

	originalUnit = 'a';
	while (originalUnit != 'm' && originalUnit != 'f')
	{
		std::cout << "Available units are m = square meters, f = square feet\n";
		std::cout << "Please select the unit you're converting from: ";
		std::cin >> originalUnit;
		if (originalUnit != 'm' && originalUnit != 'f')
			std::cout << "Please try again.\n";
	}
	targetUnit = 'a';
	while (targetUnit != 'm' && targetUnit != 'f')
	{
		std::cout << "Available units are m = square meters, f = square feet\n";
		std::cout << "Please select the unit you're converting to: ";
		std::cin >> targetUnit;
		if (targetUnit != 'm' && targetUnit != 'f')
			std::cout << "Please try again.\n";
	}
	std::cout << "Please enter the area you're converting: ";
	std::cin >> areaOriginal;
	if (originalUnit == targetUnit)
		std::cout << areaOriginal << originalUnit << " = " << areaOriginal << targetUnit << std::endl;
	areaConverted = 0;
	if (targetUnit == 'm')
	{
		areaConverted = convertToSqrMtr(areaOriginal, areaConverted, targetUnit);
		std::cout << areaOriginal << originalUnit << " = " << areaConverted << targetUnit << std::endl;
	}
}