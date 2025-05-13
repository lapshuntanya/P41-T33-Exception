#pragma once
#include <string>
using std::string;

class MobileException
{
public:
	MobileException(string text) { this->text = text; }
	virtual ~MobileException(){}
	virtual string showMessage()const = 0;

protected:
	string text;
};

 
//===========================================================
class NameException : public MobileException {
private:
	string name;
public:
	NameException(string text, string name) :MobileException(text) {
		this->name = name;
	}
	string showMessage()const {
		return "NameException ( " + name + "): " + text  + "!!!";
	}
};
//===========================================================

class PriceException : public MobileException {
	float price;
public:
	PriceException(string text, float price) :MobileException(text) {
		this->price = price;
	}
	string showMessage()const {
		return "PriceException ( " + std::to_string(price) + "): " + text + "!!!";
	}
};
//===========================================================
class SecondsException : public MobileException {
	int seconds;
public:
	SecondsException(string text, int seconds) :MobileException(text) {
		this->seconds = seconds;
	}
	string showMessage()const {
		return "SecondsException ( " + std::to_string(seconds) + "): " + text + "!!!";
	}
};