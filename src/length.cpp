#include "converter.hpp"

void    getType(int identifier, int unitOriginal, int unitTarget, double valueOriginal, double valueConverted);

double	convertToMeter(double valueOriginal, int unitTarget)
{
	double	converted;

	converted = valueOriginal * 3.2808;
	return (converted);
}

double	convertToFeet(double valueOriginal, int unitTarget)
{
	double	converted;

	converted = valueOriginal / 3.2808;
	return (converted);
}

void	length(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier)
{
	// works as sort of a main for the distance conversion program
	if (unitOriginal == 1)
		valueConverted = convertToMeter(unitOriginal, unitTarget);
	else if (unitOriginal == 2)
		valueConverted = convertToFeet(unitOriginal, unitTarget);
	getType(identifier, unitOriginal, unitTarget, valueOriginal, valueConverted);
}