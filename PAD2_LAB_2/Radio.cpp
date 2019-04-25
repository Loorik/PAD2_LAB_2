#include <iostream>
#include <sstream>
#include <iomanip>
#include"Radio.h"
using namespace std;

Radio::Radio(string r)
	: GeneralDevice(r)
{

}

/*void Radio::increase()
{
	volume += 0.5;
}

void Radio::decrease()
{
	volume -= 0.5;					//Option 2, wenn man keine Operatorüberladung durchführt
}

string Radio::toString() const
{
	stringstream outstream;
	outstream << "Radio: ";
	outstream << GeneralDevice::toString();
	return outstream.str();
}*/

string Radio::showDevice() const
{
	stringstream outstream;
	outstream << fixed << setprecision(2);
	outstream << "\nActual Device value: " << volume<< " db" << endl;
	return outstream.str();
}

Radio& Radio::operator++()
{
	volume += 1;
	return *this;
}

Radio& Radio::operator--()
{
	volume -= 1;
	return *this;
}