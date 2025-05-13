#pragma once
#include"SecondsTariff.h"
#include"MinutesTariff.h"

#include<vector>
using std::vector;
using std::string;

class MobileProvider
{
	string name;
	vector<Tariff*>tariffs;
public:
	MobileProvider(string name);

	void setName(string name);
	string getName()const;

	void addTariff(Tariff* obj);
	void showList()const;
};

