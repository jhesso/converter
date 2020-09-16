#include "converter.hpp"

void	printFile(std::string fileName){
	std::string strInput;

	strInput = "";
	std::ifstream inf(fileName, std::ifstream::in);
	if (!inf)
	{
		std::cout << "could not open file.";
		return ;
	}
	while (inf)
	{
		std::getline(inf, strInput);
		std::cout << strInput << '\n';
	}
}

void	printError(int errorCode)
{
	
	std::string fileName;

	fileName = "";
	switch (errorCode)
	{
	case 1: // error selecting a proper target unit
		fileName = "../files/errors/badTarget.txt";
		break;
	case 2: // error selecting a proper unit in selection.cpp
		fileName = "../files/errors/badSelection.txt";
		break;
	case 3:
		fileName = "../files/errors/badUnitSelected.txt";
		break;
	case 4:
		fileName= "../files/errors/badValues.txt";
	default:
		fileName = "../files/errors/default.txt";
		break;
	}
	printFile(fileName);
	/*std::ifstream inf(fileName, std::ifstream::in); // old code that i will keep around incase i find a bug and need to come back to this
	if (!inf)
	{
		std::cout << "could not open file.";
		return ;
	}
	while (inf)
	{
		std::getline(inf, strInput);
		std::cout << strInput << '\n';
	}*/
}