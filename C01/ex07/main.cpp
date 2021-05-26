#include <iostream>
#include <fstream>
#include <ostream>

#ifndef COLOR

# define COLOR
# define F_NONE		"\033[37m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define CYANE		"\033[36m"
# define F_BOLD		"\033[1m"
# define F_ORANGE	"\033[38m"
# define F_YELLOW	"\033[0;33m"
# define F_BLUE		"\033[34m" 

#endif


void	getLineText(std::string &fileText, std::ifstream &fileIn)
{
	std::string temp;
	while (std::getline(fileIn, temp))
	{
		fileText.append(temp);
		fileText.append("\n");
	}
}

void	replaceText(std::string &fileText, std::string &s1, std:: string &s2)
{
	size_t	index = 0;

	while (1)
	{
		index = fileText.find(s1, index);
		if (index == std::string::npos)
				break;
		fileText.replace(index, s1.length(), s2);
		index += s2.length();
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string fileName = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		
		/* For write string */
		std::string fileText;

		/*Init and open file*/
		std::ifstream fileIn(fileName, std::ios_base::in);
		if (!fileIn) 	
 		{
			std::cout << RED;
 			std::cout << "File don't open :(\n"; 
			std::cout << F_NONE;
			return (-1);
 		}
		if (s1.empty() || s2.empty())
		{
			std::cout << RED;
			std::cerr << "Is empty line s1 or s2 :(" << std::endl;
			fileIn.close();
			std::cout << RED;
			return (2);
		}
		getLineText(fileText, fileIn);
		replaceText(fileText, s1, s2);
		//std::cout << fileText;


		std::string fileNameOut;

		fileNameOut.append(fileName);
		fileNameOut.append(".replace");

		/*Open in new file*/
		std::ofstream fileOut(fileNameOut, std::ios_base::out);
		if (!fileOut.is_open())
		{	
			std::cout << RED;
			std::cerr << "Uh oh, " << "\"" << fileName << "\"" << " could not be opened for reading!" << std::endl;
			std::cout << F_NONE;
			return (3);
		}
	
		/*Write in file*/

		fileOut << fileText;

		fileOut.close();
		fileIn.close();

	}
	else
	{
		std::cout << RED;
		std::cout << "Wrong count argument!" << std::endl;
		std::cout << F_NONE;
		return (1);
	}
	return (0);
}
