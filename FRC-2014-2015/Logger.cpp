#include "Logger.hpp"
#include <iostream>
#include <WPILib.h>
#include <string>
#include <fstream>

void Logger::log(std::string message)
{
	std::cout<< "Outputting" << std::endl;
}

static Logger* Logger::get()
{
	std::cout<< "Outputting2" << std::endl;
}

Logger::Logger()
{
	std::cout<< "Outputting3" << std::endl;
}

Logger::~Logger()
{
	std::cout<< "Outputting4" << std::endl;
}
