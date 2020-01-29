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

void	temperature(void)
{
	// works kind of as a main for the temperature conversion
	double		tempo; // temperature original
	double		tempc; // converted temperature
	char		type; // type of the temperature we're converting from
	char		target; // what we are converting to

	// first make selection from which type of temperature you're converting from
	type = 'a';
	while (type != 'F' && type != 'C' && type != 'K') // here we have a little while loop to make sure we get the correct input we want from the user to try and limit false input
	{	
		std::cout << "please type out the correspondign character of the unit you're converting from (F, C or K): ";
		std::cin >> type;
		if (type != 'F' && type != 'C' && type != 'K')
			std::cout << "please try again. make sure the character is a capital letter and that it is the correct one.\n";
	}
	// get the original temperature
	std::cout << "please enter the temperature you want to convert: ";
	std::cin >> tempo;
	// get target unit
	target = 'a';
	while (target != 'F' && target != 'C' && target != 'K') // here we have a little while loop to make sure we get the correct input we want from the user to try and limit false input
	{
		std::cout << "Please enter the type you want to convert to (F, C or K): ";
		std::cin >> target;
		if (target != 'F' && target != 'C' && target != 'K')
			std::cout << "please try again. make sure the character is a capital letter and that it is the correct one.\n";
	}
	tempc = 0;
	if (target == type) // checking that they're not trying to convert from for example celcius back to celcius as that could cause problems.
	{
		std::cout << tempo << type << " = " << tempo << target << std::endl;
		return ;
	}
	else
	{	
		if (type == 'F')
			tempc = convertF(tempo, target);
		else if (type == 'C')
			tempc = convertC(tempo, target);
		else
			tempc = convertK(tempo, target);
	}
	std::cout << tempo << type << " = " << tempc << target << std::endl;
}