#include "converter.hpp"

void    getType(int identifier, int unitOriginal, int unitTarget, double valueOriginal, double valueConverted);

double	convertToPounds(double valueOriginal, double valueConverted) //convert to pounds
{
	valueConverted = valueOriginal / 0.45359237;	// might need to add logic in order to convert stones to pounds
	return (valueConverted);
}

double	convertTokilogram(double valueOriginal, double valueConverted) // convert to kilograms
{
	valueConverted = valueOriginal * 0.45359237;		// might need to add logic in order to convert stones to kilograms
	return (valueConverted);	
}

double	convertToStone(double valueOriginal, double valueConverted, int unitTarget) // convert to stones
{
	valueConverted = valueOriginal / 14; // convert pounds to stones. only send mass in pounds to this function..
	if (unitTarget != 3)		   // adding a stones to pounds formula here so i dont have to write another function for that
		valueConverted = valueOriginal * 14;
	return (valueConverted);
}

void	mass(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier)
{
	/*std::cout << "available units are k = kilogram(kg), l = pound(lb) and s = stone\n";
	std::cout << "Please give the unit you're converting from: ";*/
	
	//unit == unitOriginal
	//target == unitTarget
	double		tempValue;

	tempValue = 0;
	switch (unitOriginal)
	{
	case 1:
		switch (unitTarget)
		{
		case 2:
			valueConverted = convertToPounds(valueOriginal, valueConverted);
			break;
		case 3:
			tempValue = convertToPounds(valueOriginal, valueConverted); // need to convert kilograms to pounds first
			valueConverted = convertToStone(tempValue, valueConverted, unitTarget); // sending the original value as pounds to the converting function to get the stones value.
			break;
		default:
			// print an error message wondering how you got this far with the same target and original units...
			break;
		}
		break;
	case 2:
		switch (unitTarget)
		{
		case 1:
			valueConverted = convertTokilogram(valueOriginal, valueConverted);
			break;
		case 3:
			valueConverted = convertToStone(valueOriginal, valueConverted, unitTarget);
			break;
		default:
			// print an error message wondering how you got this far with the same target and original units...
			break;
		}
		break;
		case 3:
		switch (unitTarget)
		{
		case 1:
			valueConverted = convertToStone(valueOriginal, valueConverted, unitTarget);
			valueOriginal = valueConverted;
			valueConverted = convertTokilogram(valueOriginal, valueConverted);
			valueOriginal = valueOriginal / 14;
			// might have to divide the original value by 14 here
			break;
		case 2:
			valueConverted = convertToStone(valueOriginal, valueConverted, unitTarget);
			break;
		default:
			// print an error message wondering how you got this far with the same target and original units...
			break;
		}
		break;
	default:
		break;
	}
	getType(identifier, unitOriginal, unitTarget, valueOriginal, valueConverted);
	/*if (unit == 'k')
	{
			converted = convertk(original, converted, target);
			if (target == 's')
			{
				original = converted; // saving the converted value (which is the amount of pounds the original kilogram value is so we can send the variables in the original order to convertToStone)
				converted =	convertToStone(original, converted, target);
				std::cout << original << "kg" << " = " << converted << " stones" << std::endl;
			}
			else
				std::cout << original << "kg" << " = " << converted << "lb" << std::endl;
	}
	else if (unit == 'l')
	{
		if (target == 's')
		{
			converted = convertToStone(original, converted, target);
			std::cout << original << "lb" << " = " << converted << " stones" << std::endl;
		}
		else
		{
			converted = convertl(original, converted, target);
			std::cout << original << "lb" << " = " << converted << "kg" << std::endl;
		}
	}
	else if (unit == 's')
	{
		if (target == 'l')
		{
			converted = convertToStone(original, converted, target);
			std::cout << original << " stones" << " = " << converted << "lb" << std::endl;
		}
		else if (target == 'k')
		{
			converted = convertToStone(original, converted, target);
			original = converted;
			converted = convertl(original, converted, target);
			std::cout << original / 14 << " stones = " << converted << "kg" << std::endl; 
		}// dividing original by 14 here because original is the amount of stones converted to pounds
		// which is 14x the amount of stones
	}*/
}