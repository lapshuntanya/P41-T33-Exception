#include "MobileProvider.h"

int main() {

	MobileProvider Lifecell("Lifecell");

	Lifecell.addTariff(new MinutesTariff("Student", 0.1));
	Lifecell.addTariff(new MinutesTariff("Teacher", 0.2));
	Lifecell.addTariff(new SecondsTariff("Day", 0.05));
	Lifecell.addTariff(new SecondsTariff("Night", 0.01));


	Lifecell.showList();

}