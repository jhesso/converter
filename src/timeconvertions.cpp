#include "converter.hpp"

// as stated in notes file. there has to be a better way to do this but this is the only thing i came up with for now.

double			convertFromPicos(double timeO, double timeC, std::string unitT)
{
	if (unitT == "nanos")
		timeC = timeO / 1000;
	if (unitT == "micros")
		timeC = timeO / 1000 / 1000;
	if (unitT == "ms")
		timeC = timeO / 1000 / 1000 / 1000;
	if (unitT == "s")
		timeC = timeO / 1000 / 1000 / 1000 / 1000;
	if (unitT == "min")
		timeC = timeO / 1000 / 1000 / 1000 / 1000 / 60;
	else if (unitT == "h")
		timeC = timeO / 1000 / 1000 / 1000 / 1000 / 60 / 60;
	else if (unitT == "d")
		timeC = timeO / 1000 / 1000 / 1000 / 1000 / 60 / 60/ 24;
	else if (unitT == "week")
		timeC = timeO / 1000 / 1000 / 1000 / 1000 / 60 / 60/ 24 / 7;
	else if (unitT == "month")
		timeC = timeO / 1000 / 1000 / 1000 / 1000 / 60 / 60/ 24 / 7 / 4.3482142857;
	else if (unitT == "y")
		timeC = timeO / 1000 / 1000 / 1000 / 1000 / 60 / 60/ 24 / 7 / 4.3482142857 / 12;
	return (timeC);
}

double			convertFromNanos(double timeO, double timeC, std::string unitT)
{
	if (unitT == "micros")
		timeC = timeO / 1000;
	if (unitT == "ms")
		timeC = timeO / 1000 / 1000;
	if (unitT == "s")
		timeC = timeO / 1000 / 1000 / 1000;
	if (unitT == "min")
		timeC = timeO / 1000 / 1000 / 1000 / 60;
	else if (unitT == "h")
		timeC = timeO / 1000 / 1000 / 1000 / 60 / 60;
	else if (unitT == "d")
		timeC = timeO / 1000 / 1000 / 1000 / 60 / 60/ 24;
	else if (unitT == "week")
		timeC = timeO / 1000 / 1000 / 1000 / 60 / 60/ 24 / 7;
	else if (unitT == "month")
		timeC = timeO / 1000 / 1000 / 1000 / 60 / 60/ 24 / 7 / 4.3482142857;
	else if (unitT == "y")
		timeC = timeO / 1000 / 1000 / 1000 / 60 / 60/ 24 / 7 / 4.3482142857 / 12;
	else if (unitT == "picos")
		timeC = timeO * 1000;
	return (timeC);
}

double			convertFromMicros(double timeO, double timeC, std::string unitT)
{
	if (unitT == "ms")
		timeC = timeO / 1000;
	if (unitT == "s")
		timeC = timeO / 1000 / 1000;
	if (unitT == "min")
		timeC = timeO / 1000 / 1000 / 60;
	else if (unitT == "h")
		timeC = timeO / 1000 / 1000 / 60 / 60;
	else if (unitT == "d")
		timeC = timeO / 1000 / 1000 / 60 / 60/ 24;
	else if (unitT == "week")
		timeC = timeO / 1000 / 1000 / 60 / 60/ 24 / 7;
	else if (unitT == "month")
		timeC = timeO / 1000 / 1000 / 60 / 60/ 24 / 7 / 4.3482142857;
	else if (unitT == "y")
		timeC = timeO / 1000 / 1000 / 60 / 60/ 24 / 7 / 4.3482142857 / 12;
	else if (unitT == "nanos")
		timeC = timeO  * 1000;
	else if (unitT == "picos")
		timeC = timeO * 1000 * 1000;
	return (timeC);
}

double			convertFromMs(double timeO, double timeC, std::string unitT)
{
	if (unitT == "s")
		timeC = timeO / 1000;
	if (unitT == "min")
		timeC = timeO / 1000 / 60;
	else if (unitT == "h")
		timeC = timeO / 1000 / 60 / 60;
	else if (unitT == "d")
		timeC = timeO / 1000 / 60 / 60/ 24;
	else if (unitT == "week")
		timeC = timeO / 1000 / 60 / 60/ 24 / 7;
	else if (unitT == "month")
		timeC = timeO / 1000 / 60 / 60/ 24 / 7 / 4.3482142857;
	else if (unitT == "y")
		timeC = timeO / 1000 / 60 / 60/ 24 / 7 / 4.3482142857 / 12;
	else if (unitT == "micros")
		timeC = timeO * 1000;
	else if (unitT == "nanos")
		timeC = timeO * 1000 * 1000;
	else if (unitT == "picos")
		timeC = timeO * 1000 * 1000 * 1000;
	return (timeC);
}

double			convertFromSec(double timeO, double timeC, std::string unitT)
{
	if (unitT == "min")
		timeC = timeO / 60;
	else if (unitT == "h")
		timeC = timeO / 60 / 60;
	else if (unitT == "d")
		timeC = timeO / 60 / 60/ 24;
	else if (unitT == "week")
		timeC = timeO / 60 / 60/ 24 / 7;
	else if (unitT == "month")
		timeC = timeO / 60 / 60/ 24 / 7 / 4.3482142857;
	else if (unitT == "y")
		timeC = timeO / 60 / 60/ 24 / 7 / 4.3482142857 / 12;
	else if (unitT == "ms")
		timeC = timeO * 1000;
	else if (unitT == "micros")
		timeC = timeO * 1000 * 1000;
	else if (unitT == "nanos")
		timeC = timeO * 1000 * 1000 * 1000;
	else if (unitT == "picos")
		timeC = timeO * 1000 * 1000 * 1000 * 1000;
	return (timeC);	
}

double			convertFromMinutes(double timeO, double timeC, std::string unitT)
{
	if (unitT == "h")
		timeC = timeO / 60;
	if (unitT == "d")
		timeC = timeO / 60 / 24;
	if (unitT == "week")
		timeC = timeO / 60 / 24 / 7;
	if (unitT == "month")
		timeC = timeO / 60 / 24 / 7 / 4.3482142857;
	if (unitT == "y")
		timeC = timeO / 60 / 24 / 7 / 4.3482142857 / 12;
	if (unitT == "s")
		timeC = timeO * 60;
	if (unitT == "ms")
		timeC = timeO * 60 * 1000;
	if (unitT == "micros")
		timeC = timeO * 60 * 1000 * 1000;
	if (unitT == "nanos")
		timeC = timeO * 60 * 1000 * 1000 * 1000;
	if (unitT == "picos")
		timeC = timeO * 60 * 1000 * 1000 * 1000 * 1000;
	return (timeC);
}

double			convertFromHours(double timeO, double timeC, std::string unitT)
{
	if(unitT == "d")
		timeC = timeO / 24;
	if(unitT == "week")
		timeC = timeO / 24 / 7;
	if(unitT == "month")
		timeC = timeO / 24 / 7 / 4.3482142857;
	if(unitT == "y")
		timeC = timeO / 24 / 7 / 4.3482142857 / 12;
	if(unitT == "min")
		timeC = timeO * 60;
	if(unitT == "s")
		timeC = timeO * 60 * 60;
	if(unitT == "ms")
		timeC = timeO * 60 * 60 * 1000;
	if(unitT == "micros")
		timeC = timeO * 60 * 60 * 1000 * 1000;
	if(unitT == "nanos")
		timeC = timeO * 60 * 60 * 1000 * 1000 * 1000;
	if(unitT == "picos")
		timeC = timeO * 60 * 60 * 1000 * 1000 * 1000 * 1000;
	return (timeC);
}

double			convertFromDays(double timeO, double timeC, std::string unitT)
{
	if (unitT == "week")
		timeC = timeO / 7;
	if (unitT == "month")
		timeC = timeO / 7 / 4.3482142857;
	if (unitT == "y")
		timeC = timeO / 7 / 4.3482142857 / 12;
	if (unitT == "h")
		timeC = timeO * 24;
	if (unitT == "min")
		timeC = timeO * 24 * 60;
	if (unitT == "s")
		timeC = timeO * 24 * 60 * 60;
	if (unitT == "ms")
		timeC = timeO * 24 * 60 * 60 * 1000;
	if (unitT == "micros")
		timeC = timeO * 24 * 60 * 60 * 1000 * 1000;
	if (unitT == "nanos")
		timeC = timeO * 24 * 60 * 60 * 1000 * 1000 * 1000;
	if (unitT == "picos")
		timeC = timeO * 24 * 60 * 60 * 1000 * 1000 * 1000 * 1000;
	return (timeC);
}

double			convertFromWeeks(double timeO, double timeC, std::string unitT)
{
	if (unitT == "month")
		timeC = timeO / 4.3482142857;
	if (unitT == "y")
		timeC = timeO / 4.34821428570 / 12;
	if (unitT == "d")
		timeC = timeO * 7;
	if (unitT == "h")
		timeC = timeO * 7 * 24;
	if (unitT == "min")
		timeC = timeO * 7 * 24 * 60;
	if (unitT == "s")
		timeC = timeO * 7 * 24 * 60 * 60;
	if (unitT == "ms")
		timeC = timeO * 7 * 24 * 60 * 60 * 1000;
	if (unitT == "micros")
		timeC = timeO * 7 * 24 * 60 * 60 * 1000 * 1000;
	if (unitT == "nanos")
		timeC = timeO * 7 * 24 * 60 * 60 * 1000 * 1000 * 1000;
	if (unitT == "picos")
		timeC = timeO * 7 * 24 * 60 * 60 * 1000 * 1000 * 1000 * 1000;
	return (timeC);
}

double			convertFromMonths(double timeO, double timeC, std::string unitT)
{
	if (unitT == "y")
		timeC = timeO / 12;
	if (unitT == "week")
		timeC = timeO * 4.3482142857;
	if (unitT == "d")
		timeC = timeO * 4.3482142857 * 7;
	if (unitT == "h")
		timeC = timeO * 4.3482142857 * 7 * 24;
	if (unitT == "min")
		timeC = timeO * 4.3482142857 * 7 * 24 * 60;
	if (unitT == "s")
		timeC = timeO * 4.3482142857 * 7 * 24 * 60 * 60;
	if (unitT == "ms")
		timeC = timeO * 4.3482142857 * 7 * 24 * 60 * 60 * 1000;
	if (unitT == "micros")
		timeC = timeO * 4.3482142857 * 7 * 24 * 60 * 60 * 1000 * 1000;
	if (unitT == "nanos")
		timeC = timeO * 4.3482142857 * 7 * 24 * 60 * 60 * 1000 * 1000 * 1000;
	if (unitT == "picos")
		timeC = timeO * 4.3482142857 * 7 * 24 * 60 * 60 * 1000 * 1000 * 1000 * 1000;
	return (timeC);
}

double			convertFromYears(double timeO, double timeC, std::string unitT)
{
	if (unitT == "month")
		timeC = timeO * 12;
	if (unitT == "week")
		timeC = timeO * 12 * 4.3482142857;
	if (unitT == "d")
		timeC = timeO * 12 * 4.3482142857 * 7;
	if (unitT == "h")
		timeC = timeO * 12 * 4.3482142857 * 7 * 24;
	if (unitT == "min")
		timeC = timeO * 12 * 4.3482142857 * 7 * 24 * 60;
	if (unitT == "s")
		timeC = timeO * 12 * 4.3482142857 * 7 * 24 * 60 * 60;
	if (unitT == "ms")
		timeC = timeO * 12 * 4.3482142857 * 7 * 24 * 60 * 60 * 1000;
	if (unitT == "micros")
		timeC = timeO * 12 * 4.3482142857 * 7 * 24 * 60 * 60 * 1000 * 1000;
	if (unitT == "nanos")
		timeC = timeO * 12 * 4.3482142857 * 7 * 24 * 60 * 60 * 1000 * 1000 * 1000;
	if (unitT == "picos")
		timeC = timeO * 12 * 4.3482142857 * 7 * 24 * 60 * 60 * 1000 * 1000 * 1000 * 1000;
	return (timeC);
}
