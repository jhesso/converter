#ifndef CONVERTER_H
# define CONVERTER_H

//      includes here
# include <iostream>
# include <string>
# include <fstream>

//      function definitions here
void	getType(int identifier, int unitOriginal, int unitTarget, double valueOriginal, double valueConverted);
void	temperature(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier);
void	length(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier);
void	mass(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier);
void	speed(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier);
void	area(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier);
void	volume(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier);
void	time(double valueOriginal, double valueConverted, int unitOriginal, int unitTarget, int identifier);
void	printError(int errorCode);
void	printFile(std::string fileName);

#endif
