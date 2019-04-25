#include <iostream>
#include <sstream>
#include "GeneralDevice.h"
using namespace std;

GeneralDevice::GeneralDevice(string dname)
	:deviceName(dname)
{

}

string GeneralDevice::getDeviceName() const
{
	return deviceName;
}

string GeneralDevice::toString() const
{
	stringstream outstream;
	outstream << "Device: " << deviceName << endl;
	return outstream.str();

}

GeneralDevice::~GeneralDevice()
{

}

