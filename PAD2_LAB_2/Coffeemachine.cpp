#include <iostream>
#include <sstream>
#include"Coffeemachine.h"
using namespace std;

Coffeemachine::Coffeemachine(string c)
	:GeneralDevice(c)
{

}

string Coffeemachine::showDevice() const
{
	stringstream outstream;
	outstream << "\nActual Device value: " << to_string(numberOfCups)<<" Cups" << endl;
	return outstream.str();
}

Coffeemachine& Coffeemachine::operator++()
{
	numberOfCups += 1;
	return *this;
}

Coffeemachine& Coffeemachine::operator--()
{
	numberOfCups -= 1;
	return *this;
}

