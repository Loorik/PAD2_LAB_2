#include <iostream>
#include <iomanip>
#include <sstream>
#include"Heating.h"
using namespace std;

Heating::Heating(string s)
	: GeneralDevice(s)
{

}

/*void Heating::increase()
{
	temperature += 0.5;
}

void Heating::decrease()			//Option 2, wenn man keine Operatorüberladung durchführt
{
	temperature -= 0.5;
}

string Heating::toString() const
{
	stringstream outstream;
	outstream << "Heating: ";
	outstream << GeneralDevice::toString();
	return outstream.str();
}*/

string Heating::showDevice() const
{
	stringstream outstream;
	outstream << fixed << setprecision(2);
	outstream << "\nActual Device value: " << temperature << " C"<< endl;
	return outstream.str();
}

Heating& Heating::operator++()
{
	temperature += 1;
	return *this;
}

Heating& Heating::operator--()
{
	temperature -= 1;
	return *this;
}