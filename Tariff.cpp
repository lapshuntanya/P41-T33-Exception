#include "Tariff.h"

Tariff::Tariff()
{
    name = "none";

}

Tariff::Tariff(std::string name)
{
    setName(name);
}

void Tariff::setName(std::string name)
{
    if (name.find("XXX") != -1) throw new NameException("Нецензурне слово.", name);
    if (name.size() < 2)  throw new NameException("Дуже коротке ім'я.", name);
    if (name == " ") throw new NameException("Пустий рядок.", "_");

    this->name = name;
}

std::string Tariff::getName() const
{
    return name;
}


void Tariff::show() const
{
    cout << "Name tariff: " << name << endl;
}
