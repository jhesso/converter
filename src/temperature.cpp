#include "converter.hpp"

double convertC(double tempo, char target)
{
	double converted;

	if (target == 'F')
		converted = tempo * 1.8 + 32;
	else if (target == 'K')
		converted = tempo + 273.15;
	return (converted);
}

double	convertF(double tempo, char target)
{
	double converted;

	converted = (tempo - 32) / 1.8;
	if (target == 'K')
		converted = convertC(converted, target);
	return (converted);
}

double	convertK(double tempo, char target)
{
	double	converted;
	
	converted = tempo - 273.15;
	if (target == 'F')
		converted = convertC(converted, target);
	return (converted);
}

void	temperature(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget)
{
	char	type;
	char	target;

	type = 'a';
	target = 'a';
	if (unitOriginal == 1)
		valueConverted = convertF(valueOriginal, unitTarget);
	else if (unitOriginal == 2)
		valueConverted = convertC(valueOriginal, unitTarget);
	else
		valueConverted = convertK(valueOriginal, unitTarget);
	if (unitOriginal == 1)
	{
		type = 'F';
		if (unitTarget == 2)
			target = 'C';
		else
			target = 'K';
	}
	if (unitOriginal == 2)
	{
		type = 'C';
		if (unitTarget == 1)
			target = 'F';
		else
			target = 'K';
	}
	if (unitOriginal == 3)
	{
		type = 'K';
		if (unitTarget == 1)
			target = 'F';
		else
			target = 'C';
	}
	std::cout << valueOriginal << type << " = " << valueConverted << target << std::endl;
}