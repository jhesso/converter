#include "converter.hpp"

double convertToLiters(double valueOriginal, double valueConverted)
{
	valueConverted = valueOriginal / 0.26417; // liter = 1gal / 0.26417
	return (valueConverted);
}

double convertToGallons(double valueOriginal, double valueConverted)
{
	valueConverted = valueOriginal * 0.26417; //gallon = liter * 0.26417
	return (valueConverted);
}

void	volume(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier)
{
	switch (unitOriginal)
	{
	case 1:
		switch (unitTarget)
		{
		case 2:
			valueConverted = convertToGallons(valueOriginal, valueConverted);
			break;
		default:
			printError(3);
			break;
		}
		break;
	case 2:
		switch (unitTarget)
		{
		case 1:
			valueConverted = convertToLiters(valueOriginal, valueConverted);
			break;
		default:
			printError(3);
			break;
		}
		break;
	default:
		printError(3);
		break;
	}
	getType(identifier, unitOriginal, unitTarget, valueOriginal, valueConverted);
}