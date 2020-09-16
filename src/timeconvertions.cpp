#include "converter.hpp"

// as stated in notes file. there has to be a better way to do this but this is the only thing i came up with for now.
// its really interesting to see how i have implemented shit like this. as i was working on the new way to get the user input
// I started imagining using something like exponents and a way to determine the exponent so i could probably get away with 
// half of one of these functions.. ofc. atm im way too lazy to do that so it will need to be at a later date :)
// hello future me! (this was written on 16/9/2020)

double			convertFromPicos(double valueOriginal, double valueConverted, int unitTarget)
{
	if (unitTarget == 2)
		valueConverted = valueOriginal / 1000;
	if (unitTarget == 3)
		valueConverted = valueOriginal / 1000 / 1000;
	if (unitTarget == 4)
		valueConverted = valueOriginal / 1000 / 1000 / 1000;
	if (unitTarget == 5)
		valueConverted = valueOriginal / 1000 / 1000 / 1000 / 1000;
	if (unitTarget == 6)
		valueConverted = valueOriginal / 1000 / 1000 / 1000 / 1000 / 60;
	else if (unitTarget == 7)
		valueConverted = valueOriginal / 1000 / 1000 / 1000 / 1000 / 60 / 60;
	else if (unitTarget == 8)
		valueConverted = valueOriginal / 1000 / 1000 / 1000 / 1000 / 60 / 60/ 24;
	else if (unitTarget == 9)
		valueConverted = valueOriginal / 1000 / 1000 / 1000 / 1000 / 60 / 60/ 24 / 7;
	else if (unitTarget == 10)
		valueConverted = valueOriginal / 1000 / 1000 / 1000 / 1000 / 60 / 60/ 24 / 7 / 4.3482142857;
	else if (unitTarget == 11)
		valueConverted = valueOriginal / 1000 / 1000 / 1000 / 1000 / 60 / 60/ 24 / 7 / 4.3482142857 / 12;
	return (valueConverted);
}

double			convertFromNanos(double valueOriginal, double valueConverted, int unitTarget)
{
	if (unitTarget == 3)
		valueConverted = valueOriginal / 1000;
	if (unitTarget == 4)
		valueConverted = valueOriginal / 1000 / 1000;
	if (unitTarget == 5)
		valueConverted = valueOriginal / 1000 / 1000 / 1000;
	if (unitTarget == 6)
		valueConverted = valueOriginal / 1000 / 1000 / 1000 / 60;
	else if (unitTarget == 7)
		valueConverted = valueOriginal / 1000 / 1000 / 1000 / 60 / 60;
	else if (unitTarget == 8)
		valueConverted = valueOriginal / 1000 / 1000 / 1000 / 60 / 60/ 24;
	else if (unitTarget == 9)
		valueConverted = valueOriginal / 1000 / 1000 / 1000 / 60 / 60/ 24 / 7;
	else if (unitTarget == 10)
		valueConverted = valueOriginal / 1000 / 1000 / 1000 / 60 / 60/ 24 / 7 / 4.3482142857;
	else if (unitTarget == 11)
		valueConverted = valueOriginal / 1000 / 1000 / 1000 / 60 / 60/ 24 / 7 / 4.3482142857 / 12;
	else if (unitTarget == 1)
		valueConverted = valueOriginal * 1000;
	return (valueConverted);
}

double			convertFromMicros(double valueOriginal, double valueConverted, int unitTarget)
{		// this is where i left off
	if (unitTarget == 4)
		valueConverted = valueOriginal / 1000;
	if (unitTarget == 5)
		valueConverted = valueOriginal / 1000 / 1000;
	if (unitTarget == 6)
		valueConverted = valueOriginal / 1000 / 1000 / 60;
	else if (unitTarget == 7)
		valueConverted = valueOriginal / 1000 / 1000 / 60 / 60;
	else if (unitTarget == 8)
		valueConverted = valueOriginal / 1000 / 1000 / 60 / 60/ 24;
	else if (unitTarget == 9)
		valueConverted = valueOriginal / 1000 / 1000 / 60 / 60/ 24 / 7;
	else if (unitTarget == 10)
		valueConverted = valueOriginal / 1000 / 1000 / 60 / 60/ 24 / 7 / 4.3482142857;
	else if (unitTarget == 11)
		valueConverted = valueOriginal / 1000 / 1000 / 60 / 60/ 24 / 7 / 4.3482142857 / 12;
	else if (unitTarget == 2)
		valueConverted = valueOriginal  * 1000;
	else if (unitTarget == 1)
		valueConverted = valueOriginal * 1000 * 1000;
	return (valueConverted);
}

double			convertFromMs(double valueOriginal, double valueConverted, int unitTarget)
{
	if (unitTarget == 5)
		valueConverted = valueOriginal / 1000;
	if (unitTarget == 6)
		valueConverted = valueOriginal / 1000 / 60;
	else if (unitTarget == 7)
		valueConverted = valueOriginal / 1000 / 60 / 60;
	else if (unitTarget == 8)
		valueConverted = valueOriginal / 1000 / 60 / 60/ 24;
	else if (unitTarget == 9)
		valueConverted = valueOriginal / 1000 / 60 / 60/ 24 / 7;
	else if (unitTarget == 10)
		valueConverted = valueOriginal / 1000 / 60 / 60/ 24 / 7 / 4.3482142857;
	else if (unitTarget == 11)
		valueConverted = valueOriginal / 1000 / 60 / 60/ 24 / 7 / 4.3482142857 / 12;
	else if (unitTarget == 3)
		valueConverted = valueOriginal * 1000;
	else if (unitTarget == 2)
		valueConverted = valueOriginal * 1000 * 1000;
	else if (unitTarget == 1)
		valueConverted = valueOriginal * 1000 * 1000 * 1000;
	return (valueConverted);
}

double			convertFromSec(double valueOriginal, double valueConverted, int unitTarget)
{
	if (unitTarget == 6)
		valueConverted = valueOriginal / 60;
	else if (unitTarget == 7)
		valueConverted = valueOriginal / 60 / 60;
	else if (unitTarget == 8)
		valueConverted = valueOriginal / 60 / 60/ 24;
	else if (unitTarget == 9)
		valueConverted = valueOriginal / 60 / 60/ 24 / 7;
	else if (unitTarget == 10)
		valueConverted = valueOriginal / 60 / 60/ 24 / 7 / 4.3482142857;
	else if (unitTarget == 1)
		valueConverted = valueOriginal / 60 / 60/ 24 / 7 / 4.3482142857 / 12;
	else if (unitTarget == 4)
		valueConverted = valueOriginal * 1000;
	else if (unitTarget == 3)
		valueConverted = valueOriginal * 1000 * 1000;
	else if (unitTarget == 2)
		valueConverted = valueOriginal * 1000 * 1000 * 1000;
	else if (unitTarget == 1)
		valueConverted = valueOriginal * 1000 * 1000 * 1000 * 1000;
	return (valueConverted);	
}

double			convertFromMinutes(double valueOriginal, double valueConverted, int unitTarget)
{
	if (unitTarget == 7)
		valueConverted = valueOriginal / 60;
	if (unitTarget == 8)
		valueConverted = valueOriginal / 60 / 24;
	if (unitTarget == 9)
		valueConverted = valueOriginal / 60 / 24 / 7;
	if (unitTarget == 10)
		valueConverted = valueOriginal / 60 / 24 / 7 / 4.3482142857;
	if (unitTarget == 11)
		valueConverted = valueOriginal / 60 / 24 / 7 / 4.3482142857 / 12;
	if (unitTarget == 5)
		valueConverted = valueOriginal * 60;
	if (unitTarget == 4)
		valueConverted = valueOriginal * 60 * 1000;
	if (unitTarget == 3)
		valueConverted = valueOriginal * 60 * 1000 * 1000;
	if (unitTarget == 2)
		valueConverted = valueOriginal * 60 * 1000 * 1000 * 1000;
	if (unitTarget == 1)
		valueConverted = valueOriginal * 60 * 1000 * 1000 * 1000 * 1000;
	return (valueConverted);
}

double			convertFromHours(double valueOriginal, double valueConverted, int unitTarget)
{
	if(unitTarget == 8)
		valueConverted = valueOriginal / 24;
	if(unitTarget == 9)
		valueConverted = valueOriginal / 24 / 7;
	if(unitTarget == 10)
		valueConverted = valueOriginal / 24 / 7 / 4.3482142857;
	if(unitTarget == 11)
		valueConverted = valueOriginal / 24 / 7 / 4.3482142857 / 12;
	if(unitTarget == 6)
		valueConverted = valueOriginal * 60;
	if(unitTarget == 5)
		valueConverted = valueOriginal * 60 * 60;
	if(unitTarget == 4)
		valueConverted = valueOriginal * 60 * 60 * 1000;
	if(unitTarget == 3)
		valueConverted = valueOriginal * 60 * 60 * 1000 * 1000;
	if(unitTarget == 2)
		valueConverted = valueOriginal * 60 * 60 * 1000 * 1000 * 1000;
	if(unitTarget == 1)
		valueConverted = valueOriginal * 60 * 60 * 1000 * 1000 * 1000 * 1000;
	return (valueConverted);
}

double			convertFromDays(double valueOriginal, double valueConverted, int unitTarget)
{
	if (unitTarget == 9)
		valueConverted = valueOriginal / 7;
	if (unitTarget == 10)
		valueConverted = valueOriginal / 7 / 4.3482142857;
	if (unitTarget == 11)
		valueConverted = valueOriginal / 7 / 4.3482142857 / 12;
	if (unitTarget == 7)
		valueConverted = valueOriginal * 24;
	if (unitTarget == 6)
		valueConverted = valueOriginal * 24 * 60;
	if (unitTarget == 5)
		valueConverted = valueOriginal * 24 * 60 * 60;
	if (unitTarget == 4)
		valueConverted = valueOriginal * 24 * 60 * 60 * 1000;
	if (unitTarget == 3)
		valueConverted = valueOriginal * 24 * 60 * 60 * 1000 * 1000;
	if (unitTarget == 2)
		valueConverted = valueOriginal * 24 * 60 * 60 * 1000 * 1000 * 1000;
	if (unitTarget == 1)
		valueConverted = valueOriginal * 24 * 60 * 60 * 1000 * 1000 * 1000 * 1000;
	return (valueConverted);
}

double			convertFromWeeks(double valueOriginal, double valueConverted, int unitTarget)
{
	if (unitTarget == 10)
		valueConverted = valueOriginal / 4.3482142857;
	if (unitTarget == 11)
		valueConverted = valueOriginal / 4.34821428570 / 12;
	if (unitTarget == 8)
		valueConverted = valueOriginal * 7;
	if (unitTarget == 7)
		valueConverted = valueOriginal * 7 * 24;
	if (unitTarget == 6)
		valueConverted = valueOriginal * 7 * 24 * 60;
	if (unitTarget == 5)
		valueConverted = valueOriginal * 7 * 24 * 60 * 60;
	if (unitTarget == 4)
		valueConverted = valueOriginal * 7 * 24 * 60 * 60 * 1000;
	if (unitTarget == 3)
		valueConverted = valueOriginal * 7 * 24 * 60 * 60 * 1000 * 1000;
	if (unitTarget == 2)
		valueConverted = valueOriginal * 7 * 24 * 60 * 60 * 1000 * 1000 * 1000;
	if (unitTarget == 1)
		valueConverted = valueOriginal * 7 * 24 * 60 * 60 * 1000 * 1000 * 1000 * 1000;
	return (valueConverted);
}

double			convertFromMonths(double valueOriginal, double valueConverted, int unitTarget)
{
	if (unitTarget == 11)
		valueConverted = valueOriginal / 12;
	if (unitTarget == 9)
		valueConverted = valueOriginal * 4.3482142857;
	if (unitTarget == 8)
		valueConverted = valueOriginal * 4.3482142857 * 7;
	if (unitTarget == 7)
		valueConverted = valueOriginal * 4.3482142857 * 7 * 24;
	if (unitTarget == 6)
		valueConverted = valueOriginal * 4.3482142857 * 7 * 24 * 60;
	if (unitTarget == 5)
		valueConverted = valueOriginal * 4.3482142857 * 7 * 24 * 60 * 60;
	if (unitTarget == 4)
		valueConverted = valueOriginal * 4.3482142857 * 7 * 24 * 60 * 60 * 1000;
	if (unitTarget == 3)
		valueConverted = valueOriginal * 4.3482142857 * 7 * 24 * 60 * 60 * 1000 * 1000;
	if (unitTarget == 2)
		valueConverted = valueOriginal * 4.3482142857 * 7 * 24 * 60 * 60 * 1000 * 1000 * 1000;
	if (unitTarget == 1)
		valueConverted = valueOriginal * 4.3482142857 * 7 * 24 * 60 * 60 * 1000 * 1000 * 1000 * 1000;
	return (valueConverted);
}

double			convertFromYears(double valueOriginal, double valueConverted, int unitTarget)
{
	if (unitTarget == 10)
		valueConverted = valueOriginal * 12;
	if (unitTarget == 9)
		valueConverted = valueOriginal * 12 * 4.3482142857;
	if (unitTarget == 8)
		valueConverted = valueOriginal * 12 * 4.3482142857 * 7;
	if (unitTarget == 7)
		valueConverted = valueOriginal * 12 * 4.3482142857 * 7 * 24;
	if (unitTarget == 6)
		valueConverted = valueOriginal * 12 * 4.3482142857 * 7 * 24 * 60;
	if (unitTarget == 5)
		valueConverted = valueOriginal * 12 * 4.3482142857 * 7 * 24 * 60 * 60;
	if (unitTarget == 4)
		valueConverted = valueOriginal * 12 * 4.3482142857 * 7 * 24 * 60 * 60 * 1000;
	if (unitTarget == 3)
		valueConverted = valueOriginal * 12 * 4.3482142857 * 7 * 24 * 60 * 60 * 1000 * 1000;
	if (unitTarget == 2)
		valueConverted = valueOriginal * 12 * 4.3482142857 * 7 * 24 * 60 * 60 * 1000 * 1000 * 1000;
	if (unitTarget == 1)
		valueConverted = valueOriginal * 12 * 4.3482142857 * 7 * 24 * 60 * 60 * 1000 * 1000 * 1000 * 1000;
	return (valueConverted);
}
