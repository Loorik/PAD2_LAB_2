#pragma once
// Coffemachine class
#include <iostream>
#include "GeneralDevice.h"

class Coffeemachine : public GeneralDevice
{
public:
	Coffeemachine(std::string);
	/*virtual void increase() override;
	virtual void decrease() override;*/

	virtual std::string showDevice() const override;
	virtual Coffeemachine& operator++() override;
	virtual Coffeemachine& operator--() override;

private:
	int numberOfCups = 0;

};