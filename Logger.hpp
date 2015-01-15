#ifndef JOYSTICKWRAPPER_HPP
#define JOYSTICKWRAPPER_HPP

#include <WPILib.h>
#include <string>

class Logger
{
private:
	Timer timer;
	static Logger instance;
	std::string fileName;
public:
	void log(std::string message);
	static Logger *get();
	/*RobotLocation*/int loc;
	Logger();
	~Logger();
};

#endif

