#pragma once
//Baseclass abstract
#include <iostream>

class GeneralDevice
{
public:

	GeneralDevice(std::string);
	/*virtual void increase() = 0;
	virtual void decrease() = 0;*/

	virtual std::string showDevice() const =0;
	std::string getDeviceName() const;
	virtual std::string toString() const;
	virtual GeneralDevice& operator++() =0;
	virtual GeneralDevice& operator--() =0;
	virtual ~GeneralDevice();

protected:
	
	std::string deviceName;

};