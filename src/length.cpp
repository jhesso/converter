#include "converter.hpp"

double	convertm(double original, char target)
{
	double	converted;

	converted = original * 3.2808;
	return (converted);
}

double	convertf(double original, char target)
{
	double	converted;

	converted = original / 3.2808;
	
	return (converted);
}

void	length(void)
{
	// works as sort of a main for the distance conversion program
	double		disto; // original distance
	double		distc; // converted distance
	char		target; // target unit
	char		unit; // what unit we're converting from
	
	std::cout << "available units currently are m(meter) and f(feet)\n";
	std::cout << "Please give the unit we're converting from: ";
	unit = 'a';
	while (unit != 'm' && unit != 'f')
	{
		std::cin >> unit;
		if (unit != 'm' && unit != 'f')
			 std::cout << "plase try again, make sure its a lowercase character and that you didnt typo :";
	}
	if (unit == 'm')
		target = 'f';
	else
		target = 'm';
	/*std::cout << "available units currently are m(meter) and f(feet)\n";
	std::cout << "plase give the unit we're converting to: ";
	while (target != 'm' && target != 'f')
	{
		std::cin >> target;
		if (target != 'm' && target != 'f')
			std::cout << "please try again, make sure its a lowercase character and that you didnt typo: ";
	}*/
	std::cout << "please give the length you want to convert: ";
	std::cin >> disto;
	if (unit == 'm')
	{
		distc = convertm(disto, target);
		std::cout << disto << unit << " = " << distc << "ft\n";
	}
	else
	{	
		distc = convertf(disto, target);
		std::cout << disto << "ft" << " = " << distc << target << std::endl;
	}
}