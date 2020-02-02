#include "converter.hpp"

void	speed(void)
{
	// works kind of as a main for the speed conversion
	double	speedOriginal; // original speed
	double	speedConverted; // answer (what conversion results to)
	char	unitOriginal; // original unit
	char	unitTarget; // target unit

	unitOriginal = 'a';
	while (unitOriginal != 'k' && unitOriginal != 'm')
	{
		std::cout << "Available units are m = mph and k = kmh\n";
		std::cout << "Please select the original unit\n";
		std::cin >> unitOriginal;
		if (unitOriginal != 'k' && unitOriginal != 'm')
			std::cout << "Please try again.\n";
	}
	unitTarget = 'a';
	while (unitTarget != 'k' && unitTarget != 'm')
	{
		std::cout << "Available units are m = mph and k = kmh\n";
		std::cout << "please select the target unit\n";
		std::cin >> unitTarget;
		if (unitTarget != 'k' && unitTarget != 'm')
			std::cout << "Please try again.\n";
	}
	speedOriginal = 0;
	std::cout << "Enter the speed you're converting: ";
	std::cin >> speedOriginal;
	if (unitOriginal == unitTarget)
	{
		std::cout << speedOriginal << unitOriginal << " = " << speedConverted << unitTarget << std::endl;
		return ;
	}
	else
	{
		if (unitOriginal == 'k')
			// goto convert kmh to mph
			;
	}
	
}