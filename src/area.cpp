#include "converter.hpp"

double	convertToSqrMtr(double valueOriginal, double valueConverted) // convert to square meter
{
	valueConverted = valueOriginal / 10.764; // sqrmtr = sqrft / 10,764
	return (valueConverted);
}

double	convertToSqrFt(double valueOriginal, double valueConverted) // convert to square foot
{
	valueConverted = valueOriginal * 10.764; // sqrft = sqrmtr * 10.764
	return (valueConverted);
}

void	area(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier) // "main" for the area conversion
{
	switch (unitOriginal)
	{
	case 1:
		switch (unitTarget)
		{
		case 2:
			valueConverted = convertToSqrFt(valueOriginal, valueConverted);
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
			valueConverted = convertToSqrMtr(valueOriginal, valueConverted);
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