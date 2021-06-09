#include "Logger.hpp"

Logger::Logger(std::string const &logfile)
{
	std::cout << GREEN;
	this->olog.open(logfile, std::ios::app);
	std::cout << "Open " << logfile << " !\n";
	std::cout << F_NONE;
}

Logger::~Logger()
{
	std::cout << RED;
	if (this->olog.is_open())
		this->olog.close();
	std::cout << "Close file !\n";
	std::cout << F_NONE;	
}

std::string Logger::makeLogEntry(std::string const &value)
{
	std::stringstream ss;
	
  	std::time_t t = std::time(0);   // get time now
	tm utc_tm = *localtime(&t);
	ss << std::setfill('0') << "[" << (utc_tm.tm_year + 1900) << "/"
			<< std::setw(2) << utc_tm.tm_mon + 1 << "/"
			<< std::setw(2) << utc_tm.tm_mday << ":"
			<< std::setw(2) << utc_tm.tm_hour << "h"
			<< std::setw(2) << utc_tm.tm_min << "m"
			<< std::setw(2) << utc_tm.tm_sec << "s] ";
	ss << value;
	return (ss.str());
}

void Logger::logToConsole(std::string const &value)
{
	std::cout << this->makeLogEntry(value) << std::endl;
}

void Logger::logToFile(std::string const &value)
{
	if (!this->olog.is_open() || !this->olog.good())
	{
		std::cout << RED;
		std::cout << "Error\n";
		std::cout << F_NONE;
		return ;
	}
	olog << this->makeLogEntry(value) << std::endl;
}

void Logger::log(std::string const &dest, std::string const &message)
{
	int key;
	void (Logger::* const actions[2])(std::string const &value) = {
		&Logger::logToConsole,
		&Logger::logToFile
	};

	key = ("logToConsole" == dest) ? 0 :
		("logToFile" == dest) ? 1
		: 0;

	(this->*actions[key])(message);
}