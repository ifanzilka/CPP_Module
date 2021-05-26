#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <iomanip>
# include <fstream>
# include <string>
# include <sstream>
# include <chrono>

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

class Logger
{
private:
	std::ofstream olog;

	std::string makeLogEntry(std::string const &value);
	void logToConsole(std::string const &value);
	void logToFile(std::string const &value);
public:
	Logger(std::string const &logfile);
	~Logger();

	void log(std::string const &dest, std::string const &message);
};

#endif