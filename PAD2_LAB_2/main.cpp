#include <iostream>
#include <string>	
#include <vector>
#include "GeneralDevice.h"
#include "Coffeemachine.h"
#include "Heating.h"
#include "Radio.h"

using namespace std;

int main()
{
	GeneralDevice* actualDevice = nullptr;
	//Coffeemachine T("Tchibo KM 3");
	//Radio R1("Radio WZ");
	//Radio R2("Radio Kueche");
	//Heating H1("Heizung OG");
	//Heating H2("Heizung EG");

	vector<GeneralDevice*> devices;
	devices.push_back(new Coffeemachine("Tchibo KM 3"));
	devices.push_back(new Radio("Radio WZ"));
	devices.push_back(new Radio("Radio Kueche"));
	devices.push_back(new Heating("Heizung OG"));
	devices.push_back(new Heating("Heitung EG"));


	char select;


	cout << "Welcome to the Smart Home\n\nPlease type:\n1 for the device: "
		<< devices[0]->getDeviceName() << endl << "2 for the device: "
		<< devices[1]->getDeviceName() << endl << "3 for the device:"
		<< devices[2]->getDeviceName() << endl << "4 for the device:"
		<< devices[3]->getDeviceName() << endl << "5 for the device:"
		<< devices[4]->getDeviceName() << endl
		<< endl << "? for an overview "
		<< endl << "0 to shut down "
		<< endl << "+ to increment "
		<< endl << "- to decrement "
		<< endl << "\nInput: ";


	bool an = true;


	while (an)
	{
		cin >> select;
		switch (select)
		{
		case '0':
			an = false;
			cout << "Smart Home shuts down.";
			break;
		case '1':
			cout << devices[0]->toString();
			actualDevice = devices[0];
			break;
		case '2':
			cout << devices[1]->toString();
			actualDevice = devices[1];
			break;
		case '3':
			cout << devices[2]->toString();
			actualDevice = devices[2];
			break;
		case '4':
			cout << devices[3]->toString();
			actualDevice = devices[3];
			break;
		case '5':
			cout << devices[4]->toString();
			actualDevice = devices[4];
			break;
		case '+':
			if (actualDevice == nullptr)
			{
				cout << "Invalid input, no device selected." << endl;
			}
			else
			{
				//++(*actualDevice);
				actualDevice->operator++();
				cout << actualDevice->showDevice();
			}
			break;
		case '-':
			if (actualDevice == nullptr)
			{
				cout << "Invalid input, no device selected." << endl;
			}
			else
			{
				actualDevice->operator--();
				cout << actualDevice->showDevice();
			}
			break;
		case'?':

			cout << "\n\nDevice overview: \n\n";

			for (auto dev : devices)
			{
				actualDevice = dev;
				cout << actualDevice->getDeviceName() << dev->showDevice() << endl;
			}
			break;
		default:
			cout << "Invalid input.\n\n";
			actualDevice = nullptr;
			break;

		}

	}

	for (auto dev : devices)
	{
		delete dev;
	}
}