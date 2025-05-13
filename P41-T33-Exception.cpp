#include "MobileProvider.h"

int main() {

	MobileProvider Lifecell("Lifecell");

	Tariff* ptr = nullptr;
	try {
		ptr = new MinutesTariff("XXX", 0.1);
		Lifecell.addTariff(ptr);
	}
	catch (const MobileException * obj) {
		cout << obj->showMessage() << endl;
		delete obj;
	}
	cout << ptr << endl;
	//------------------------------------------------------

	try {		Lifecell.addTariff(new MinutesTariff(" ", 0.2));	}	
	catch (const MobileException* obj) {cout << obj->showMessage() << endl;	delete obj;	}

	try { Lifecell.addTariff(new SecondsTariff("Day", -0.05)); }
	catch (const MobileException* obj) { cout << obj->showMessage() << endl;	delete obj; }

	try { Lifecell.addTariff(new SecondsTariff("Night", 0.01)); }
	catch (const MobileException* obj) { cout << obj->showMessage() << endl;	delete obj; }

	cout << "=============================================\n";
	Lifecell.showList();
	cout << "=============================================\n";

	Tariff* ptr2 = new SecondsTariff("Free", 0.01);

	try { cout << "Summary: " << ptr2->calcCost(20) << "UAH per 20 seconds." << endl; }
	catch (const MobileException* obj) { cout << obj->showMessage() << endl;	delete obj; }

	try { cout << "Summary: " << ptr2->calcCost(-20) << "UAH per 20 seconds." << endl; }
	catch (const MobileException* obj) { cout << obj->showMessage() << endl;	delete obj; }
}