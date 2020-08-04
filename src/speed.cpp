#include "converter.hpp"

double	convertToMph(double speedOriginal, double speedConverted, char unitTarget)
{
	// converting kmh to mph here
	speedConverted = speedOriginal / 1.609344; // mph = km/h ÷ 1.609344
	return (speedConverted);
}

double	convertToKmh(double speedOriginal, double speedConverted, char unitTarget)
{
	// converting mph to kmh here
	speedConverted = speedOriginal * 1.609344; // kmh = mp/h * 1.609344
	return (speedConverted);
}

void	speed(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier)
{
	// works kind of as a main for the speed conversion
	double	speedOriginal; // original speed
	double	speedConverted; // answer (what conversion results to)
	char	unitOriginal; // original unit
	char	unitTarget; // target unit

	unitOriginal = 'a';
	while (unitOriginal != 'k' && unitOriginal != 'm') // asking user to select the original unit
	{
		std::cout << "Available units are m = mph and k = kmh\n";
		std::cout << "Please select the original unit\n";
		std::cin >> unitOriginal;
		if (unitOriginal != 'k' && unitOriginal != 'm') // just some error handling
			std::cout << "Please try again.\n";
	}
	unitTarget = 'a';
	while (unitTarget != 'k' && unitTarget != 'm') // asking user to select the unit they want to end up with
	{
		std::cout << "Available units are m = mph and k = kmh\n";
		std::cout << "please select the target unit\n";
		std::cin >> unitTarget;
		if (unitTarget != 'k' && unitTarget != 'm') // just some error handling
			std::cout << "Please try again.\n";
	}
	speedOriginal = 0;
	std::cout << "Enter the speed you're converting: "; // asking for the actual speed we're converting
	std::cin >> speedOriginal;
	if (unitOriginal == unitTarget) // just here not to waste resources if the user tries to be nosey
	{
		std::cout << speedOriginal << unitOriginal << " = " << speedConverted << unitTarget << std::endl;
		return ; // this is actually a useless line of code but i guess i like it..
	}
	else
	{
		if (unitOriginal == 'k')
		{
			// goto convert kmh to mph
			speedConverted = convertToMph(speedOriginal, speedConverted, unitTarget);
			std::cout << speedOriginal << "kmh" << " = " << speedConverted << "mph" << std::endl;
		}
		else if (unitOriginal == 'm')
		{
			// goto convert mph to kmh
			speedConverted = convertToKmh(speedOriginal, speedConverted, unitTarget);
			std::cout << speedOriginal << "mph" << " = " << speedConverted << "kmh" << std::endl;
		}
	}
}