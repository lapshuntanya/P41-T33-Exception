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


	Lifecell.showList();

}