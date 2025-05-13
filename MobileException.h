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
		return "NameException ( " + name + ") " + text;
	}
};