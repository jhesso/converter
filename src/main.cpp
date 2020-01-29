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
	std::cout << "\n\nwelcome to Jhesso's simple converter.\n\n";
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