#include "converter.hpp"

void    getType(int identifier, int unitOriginal, int unitTarget, double valueOriginal, double valueConverted);

double convertC(double tempo, int unitTarget)
{
	double converted;

	if (unitTarget == 2)
		converted = tempo * 1.8 + 32;
	else if (unitTarget == 3)
		converted = tempo + 273.15;
	return (converted);
}

double	convertF(double tempo, int unitTarget)
{
	double converted;

	converted = (tempo - 32) / 1.8;
	if (unitTarget == 2)
		converted = convertC(converted, unitTarget);
	return (converted);
}

double	convertK(double tempo, int unitTarget)
{
	double	converted;
	
	converted = tempo - 273.15;
	if (unitTarget == 2)
		converted = convertC(converted, unitTarget);
	return (converted);
}

void	temperature(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier)
{
	if (unitOriginal == 1)
		valueConverted = convertC(valueOriginal, unitTarget);
	else if (unitOriginal == 2)
		valueConverted = convertF(valueOriginal, unitTarget);
	else
		valueConverted = convertK(valueOriginal, unitTarget);
	getType(identifier, unitOriginal, unitTarget, valueOriginal, valueConverted);
	/*if (unitOriginal == 1)	// all of this will be handeled in results.cpp
	{
		type = 'C';
		if (unitTarget == 2)
			target = 'F';
		else
			target = 'K';
	}
	if (unitOriginal == 2)
	{
		type = 'F';
		if (unitTarget == 1)
			target = 'C';
		else
			target = 'K';
	}
	if (unitOriginal == 3)
	{
		type = 'K';
		if (unitTarget == 1)
			target = 'C';
		else
			target = 'F';
	}
	std::cout << valueOriginal << type << " = " << valueConverted << target << std::endl;*/
}