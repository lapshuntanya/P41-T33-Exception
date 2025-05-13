#include "MobileProvider.h"

MobileProvider::MobileProvider(string name)
{
    this->name = name;
}

void MobileProvider::setName(string name)
{
    this->name = name;
}

string MobileProvider::getName() const
{
    return name;
}

void MobileProvider::addTariff(Tariff* obj)
{
    tariffs.push_back(obj);
}

void MobileProvider::showList() const
{
    for (int i = 0; i < tariffs.size(); i++) {
        tariffs[i]->show();
        cout << endl;
    }
}
