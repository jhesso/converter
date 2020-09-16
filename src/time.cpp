#include "converter.hpp"

double			convertFromPicos(double timeO, double timeC, int unitTarget);
double			convertFromNanos(double timeO, double timeC, int unitTarget);
double			convertFromMicros(double timeO, double timeC, int unitTarget);
double			convertFromMs(double timeO, double timeC, int unitTarget);
double			convertFromSec(double timeO, double timeC, int unitTarget);
double			convertFromMinutes(double timeO, double timeC, int unitTarget);
double			convertFromHours(double timeO, double timeC, int unitTarget);
double			convertFromDays(double timeO, double timeC, int unitTarget);
double			convertFromWeeks(double timeO, double timeC, int unitTarget);
double			convertFromMonths(double timeO, double timeC, int unitTarget);
double			convertFromYears(double timeO, double timeC, int unitTarget);

double			chooseConvert(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget)
{
	if (unitOriginal == 1)
		valueConverted = convertFromPicos(valueOriginal, valueConverted, unitTarget);
	if (unitOriginal == 2)
		valueConverted = convertFromNanos(valueOriginal, valueConverted, unitTarget);
	if (unitOriginal == 3)
		valueConverted = convertFromMicros(valueOriginal, valueConverted, unitTarget);
	if (unitOriginal == 4)
		valueConverted = convertFromMs(valueOriginal, valueConverted, unitTarget);
	if (unitOriginal == 5)
		valueConverted = convertFromSec(valueOriginal, valueConverted, unitTarget);
	if (unitOriginal == 6)
		valueConverted = convertFromMinutes(valueOriginal, valueConverted, unitTarget);
	if (unitOriginal == 7)
		valueConverted = convertFromHours(valueOriginal, valueConverted, unitTarget);
	if (unitOriginal == 8)
		valueConverted = convertFromDays(valueOriginal, valueConverted, unitTarget);
	if (unitOriginal == 9)
		valueConverted = convertFromWeeks(valueOriginal, valueConverted, unitTarget);
	if (unitOriginal == 10)
		valueConverted = convertFromMonths(valueOriginal, valueConverted, unitTarget);
	if (unitOriginal == 11)
		valueConverted = convertFromYears(valueOriginal, valueConverted, unitTarget);
	return (valueConverted);
}

/*std::string		unitSelection(void) // I'm fairly certain this function isnt needed for anything anymore but ill keep it to make sure
{
	std::string		unit;
	std::string		options[] = {"picos", "nanos", "micros", "ms", "s", "min", "h", "d", "week", "month", "y"};
	int				index;

	unit = "";
	index = 0;
	std::cin >> unit;
	while (options[index] != "\0")
	{
		if (unit == options[index])
			return (unit);
		else
			index++;
	}
	std::cout << "Please try again.\n";
	unit = "false";
	return (unit);
}*/

void			time(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier)
{
	switch (unitOriginal)
	{
	case 1:
		switch (unitTarget)
		{
			case 2:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 3:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 4:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 5:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 6:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 7:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 8:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 9:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 10:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 11:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
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
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 3:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 4:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 5:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 6:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 7:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 8:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 9:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 10:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 11:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			default:
				printError(3);
				break;
		}
		break;
	case 3:
		switch (unitTarget)
		{
			case 1:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 2:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 4:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 5:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 6:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 7:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 8:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 9:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 10:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 11:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			default:
				printError(3);
				break;
		}
		break;
	case 4:
		switch (unitTarget)
		{
			case 1:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 2:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 3:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 5:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 6:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 7:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 8:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 9:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 10:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 11:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			default:
				printError(3);
				break;
		}
		break;
	case 5:
		switch (unitTarget)
		{
			case 1:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 2:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 3:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 4:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 6:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 7:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 8:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 9:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 10:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 11:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			default:
				printError(3);
				break;
		}
		break;
	case 6:
		switch (unitTarget)
		{
			case 1:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 2:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 3:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 4:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 5:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 7:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 8:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 9:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 10:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 11:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			default:
				printError(3);
				break;
		}
		break;
	case 7:
		switch (unitTarget)
		{
			case 1:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 2:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 3:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 4:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 5:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 6:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 8:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 9:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 10:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 11:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			default:
				printError(3);
				break;
		}
		break;
	case 8:
		switch (unitTarget)
		{
			case 1:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 2:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 3:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 4:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 5:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 6:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 7:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 9:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 10:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 11:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			default:
				printError(3);
				break;
		}
		break;
	case 9:
		switch (unitTarget)
		{
			case 1:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 2:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 3:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 4:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 5:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 6:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 7:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 8:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 10:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 11:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			default:
				printError(3);
				break;
		}
		break;
	case 10:
		switch (unitTarget)
		{
			case 1:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 2:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 3:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 4:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 5:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 6:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 7:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 8:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 9:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 11:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			default:
				printError(3);
				break;
		}
		break;
	case 11:
		switch (unitTarget)
		{
			case 1:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 2:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 3:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 4:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 5:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 6:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 7:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 8:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 9:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
				break;
			case 10:
				valueConverted = chooseConvert(valueOriginal, valueConverted, unitOriginal, unitTarget);
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