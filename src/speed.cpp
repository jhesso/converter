#include "converter.hpp"

void	printError(int errorCode);
void    getType(int identifier, int unitOriginal, int unitTarget, double valueOriginal, double valueConverted);

double	convertToMph(double valueOriginal, double valueConverted)
{
	// converting kmh to mph here
	valueConverted = valueOriginal / 1.609344; // mph = km/h ÷ 1.609344
	return (valueConverted);
}

double	convertToKmh(double valueOriginal, double valueConverted)
{
	// converting mph to kmh here
	valueConverted = valueOriginal * 1.609344; // kmh = mp/h * 1.609344
	return (valueConverted);
}

void	speed(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier)
{
	switch (unitOriginal)
	{
	case 1:
		switch (unitTarget)
		{
		case 2:
			valueConverted = convertToKmh(valueOriginal, valueConverted);
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
			valueConverted = convertToMph(valueOriginal, valueConverted);
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