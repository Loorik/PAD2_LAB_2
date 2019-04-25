#pragma once
//Heating class
#include <iostream>
#include "GeneralDevice.h"

class Heating : public GeneralDevice
{
public:
	Heating(std::string);
	/*virtual void increase();
	virtual void decrease();*/

	virtual std::string showDevice() const override;	
	virtual Heating& operator++() override;
	virtual Heating& operator--() override;


private:

	float temperature = 0;
};