#include "MinutesTariff.h"

MinutesTariff::MinutesTariff()
{
    price = 1.0f;
}

MinutesTariff::MinutesTariff(std::string name, float price):Tariff(name)
{
    setPrice(price);
}

void MinutesTariff::setPrice(float price)
{
    if (price <= 0) throw new PriceException("Ціна не може бути від'ємною.", price);
    this->price = price;
}

float MinutesTariff::getPrice() const
{
    return price;
}

float MinutesTariff::calcCost(int seconds) const
{
    if (seconds < 0) throw new SecondsException("Довжина дзвінка не може бути від'ємним числом", seconds);
    return (seconds / 60.0)*price;
}

void MinutesTariff::show() const
{
    cout << "Minutes Tariff\n";
    Tariff::show();
    cout << "Price for minutes: " << price << endl;
}
