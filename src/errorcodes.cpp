#include "converter.hpp"

void	printError(int errorCode)
{
	std::string strInput;
	std::string fileName;

	strInput = "";
	fileName = "";
	switch (errorCode)
	{
	case 1: // error selecting a proper target unit
		fileName = "../files/errors/badTarget.txt";
		break;
	default:
		break;
	}
	std::ifstream inf(fileName, std::ifstream::in);
	if (!inf)
	{
		std::cout << "could not open file length.txt";
		return ;
	}
	while (inf)
	{
		std::getline(inf, strInput);
		std::cout << strInput << '\n';
	}
}