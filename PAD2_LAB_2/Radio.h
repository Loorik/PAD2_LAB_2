#pragma once
//Radio class
#include <iostream>
#include "GeneralDevice.h"

class Radio : public GeneralDevice
{
public:
	Radio(std::string);
	/*virtual void increase();
	virtual void decrease();*/
	
	virtual std::string showDevice() const override;
	virtual Radio& operator++() override;
	virtual Radio& operator--() override;

private:
	double volume =0;
};