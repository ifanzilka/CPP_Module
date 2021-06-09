#include "Logger.hpp"

int main(void)
{
	Logger logger("log");


		logger.log("logToConsole", "Initialization...");
		logger.log("logToConsole", "Starting engines...");
		logger.log("logToConsole", "Next messages will be sent to file");
		// logger.log("logToFile", "Logging messages of Logger");
		// logger.log("logToFile", "I'm on another line");
		// logger.log("logToFile", "This is the last message");
		// logger.log("logToConsole", "It's over.");
		//logger.log("logToUndefined", "I shall throw.");

	return (0);
}