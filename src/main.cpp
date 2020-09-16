//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																											//
//	       .__               .__                                                   __                		//
//	  _____|__| _____ ______ |  |   ____     ____  ____   _______  __ ____________/  |_  ___________ 		//
//	 /  ___/  |/     \\____ \|  | _/ __ \  _/ ___\/  _ \ /    \  \/ // __ \_  __ \   __\/ __ \_  __ \		//
//	 \___ \|  |  Y Y  \  |_> >  |_\  ___/  \  \__(  <_> )   |  \   /\  ___/|  | \/|  | \  ___/|  | \/		//
//	/____  >__|__|_|  /   __/|____/\___  >  \___  >____/|___|  /\_/  \___  >__|   |__|  \___  >__|   		//
//	     \/         \/|__|             \/       \/           \/          \/                 \/       		//
//																											//
//																							by: Jhesso		//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "converter.hpp"
// All libraries used are included in the header file. only include the header file on top of cpp files.

void	selection(void);
void	help(void);
void	commands(void);

int		main(void)
{
	// keeping main as short as possible. basically we just jump to a function from main and after finishing runnin the program we return to main and then exit..
	std::string		command;
	bool			exit;
	
	exit = false;
	command = "";
	// this is where i want to print out the ascii art and then a newline or two..
	printFile("../documents/author");
	std::cout << "\nwelcome to Jhesso's simple converter.\n\n";
	while (exit != true)
	{
		
		std::cout << "\ntype 'help' for help with the program\n\n";
		std::cout << "command: ";
		std::cin >> command;
		std::cout << std::endl;
		if (command == "convert")
			selection();
		else if (command == "help")
			help();
		else if (command == "commands")
			commands();
		else if (command == "exit")
			exit = true;
	}
	return (0);
}