#include "converter.hpp"

double			convertFromPicos(double timeO, double timeC, std::string unitT);
double			convertFromNanos(double timeO, double timeC, std::string unitT);
double			convertFromMicros(double timeO, double timeC, std::string unitT);
double			convertFromMs(double timeO, double timeC, std::string unitT);
double			convertFromSec(double timeO, double timeC, std::string unitT);
double			convertFromMinutes(double timeO, double timeC, std::string unitT);
double			convertFromHours(double timeO, double timeC, std::string unitT);
double			convertFromDays(double timeO, double timeC, std::string unitT);
double			convertFromWeeks(double timeO, double timeC, std::string unitT);
double			convertFromMonths(double timeO, double timeC, std::string unitT);
double			convertFromYears(double timeO, double timeC, std::string unitT);

double			chooseConvert(double timeO, double timeC, std::string unitO, std::string unitT)
{
	if (unitO == "picos")
		timeC = convertFromPicos(timeO, timeC, unitT);
	if (unitO == "nanos")
		timeC = convertFromNanos(timeO, timeC, unitT);
	if (unitO == "micros")
		timeC = convertFromMicros(timeO, timeC, unitT);
	if (unitO == "ms")
		timeC = convertFromMs(timeO, timeC, unitT);
	if (unitO == "s")
		timeC = convertFromSec(timeO, timeC, unitT);
	if (unitO == "min")
		timeC = convertFromMinutes(timeO, timeC, unitT);
	if (unitO == "h")
		timeC = convertFromHours(timeO, timeC, unitT);
	if (unitO == "d")
		timeC = convertFromDays(timeO, timeC, unitT);
	if (unitO == "week")
		timeC = convertFromWeeks(timeO, timeC, unitT);
	if (unitO == "month")
		timeC = convertFromMonths(timeO, timeC, unitT);
	if (unitO == "y")
		timeC = convertFromYears(timeO, timeC, unitT);
	return (timeC);
}

std::string		unitSelection(void)
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
}

void	time(void)
{
	// works as a main for time conversion
	double			timeO;	// time original
	double			timeC;	// time converted
	std::string		unitO;	// unit original || using string here so its easier to identify the unit (ms = millisecond, s = second, micros = microsecond etc.)
	std::string		unitT;	// unit target   || using string here so its easier to identify the unit /\

	unitO = "";
	std::cout << "available units are: picos = picoseconds, nanos = nanoseconds, micros = microseconds,\
	ms = milliseconds, s = seconds, min = minutes, h = hours, d = days, week, month, y = years\n" ;
	std::cout << "Please type the unit you're converting from: ";
	unitO = unitSelection();
	while (unitO == "false")
		unitSelection();
	unitT = "";
	std::cout << "available units are: s =seconds, min = minutes, h = hours, d = days, ms = milliseconds, week,\
	 month, y = years, micros = microseconds, nanos = nanoseconds, picos = picoseconds\n" ;
	std::cout << "Please type the unit you're converting to: ";
	unitT = unitSelection();
	while (unitT == "false")
		unitSelection();
	std::cout << "Please enter the amount you're converting: \n";
	std::cin >> timeO;
	if (unitT == unitO)
	{
		std::cout << timeO << unitO << " = " << timeC << unitT << std::endl;
		return ;
	}
	else
	{
		timeC = chooseConvert(timeO, timeC, unitO, unitT);
		std::cout << timeO << unitO << " = " << timeC << unitT << std::endl;	
	}
}