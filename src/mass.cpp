#include "converter.hpp"

double	convertk(double original, double converted, char target) //convert to pounds
{
	converted = original / 0.45359237;							// might need to add logic in order to convert stones to pounds
	return (converted);
}

double	convertl(double original, double converted, char target) // convert to kilograms
{
	converted = original * 0.45359237;							// might need to add logic in order to convert stones to kilograms
	return (converted);	
}

double	convertToStone(double original, double converted, char target) // convert to stones
{
	converted = original / 14; // convert pounds to stones. only send mass in pounds to this function..
	if (target != 's')		   // adding a stones to pounds formula here so i dont have to write another function for that
		converted = original * 14;
	return (converted);
}

void	mass(void)
{
	// works as a main function for the weight conversion
	double	original; // what we're converting from
	double	converted; // the converted weight
	char	unit; // what unit we're converting from
	char	target; // what unit we're converting to

	std::cout << "available units are k = kilogram(kg), l = pound(lb) and s = stone\n";
	std::cout << "Please give the unit you're converting from: ";
	unit = 'a';
	while (unit != 'k' && unit != 'l' && unit != 's')
	{
		std::cin >> unit;
		if (unit != 'k' && unit != 'l' && unit != 's')
			std::cout << "please try again. make sure you're not typoing and that you're typing a lowercase character: ";
	}
	target = 'a';
	std::cout << "Please give the unit you're converting to: ";
	while (target != 'k' && target != 'l' && target != 's')
	{
		std::cin >> target;
		if (target != 'k' && target != 'l' && target != 's')
			std::cout << "Please try again. make sure you're not typoing and that you're typing a lowercase character: ";
	}
	std::cout << "please give the mass you want to convert: ";
	std::cin >> original;
	if (target == unit)	// just handling the edge case where the target unit is the same as the one given.
		{
			if (target == 'l')
				std::cout << original << "lb = " << original << "lb" << std::endl;
			else if (target == 'k')
				 std::cout << original << "kg = " << original << "kg" << std::endl;
			else
				std::cout << original << " stones = " << original << " stones" << std::endl;
			std::cout << "I dont know wether you're trying to be a wise ass or if it was a mistake but obviously\n the target unit is the same as the one given if both units are the same\n";
		}
	converted = 0;
	if (unit == 'k')
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
			std::cout << original / 14 << " stones = " << converted << "kg" << std::endl; // dividing original by 14 here because original is the amount of stones converted to pounds which is 14x the amount of stones
		}
	}
}