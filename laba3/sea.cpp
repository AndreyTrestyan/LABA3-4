#include "sea.h"
#include <iostream>
using namespace std;

void Sea::Fish::GetAny(Sea &obj)
{
	obj.setName("nEsTeD");
}

void Sea::GetNested(Fish &obj)
{
	cout << obj.numberof() << endl;
}

Sea::Sea()
{
}

Sea::~Sea()
{
	cout << "sea is deleted" << endl;

}


void Sea::setDeep(int deep)
{
	deep_ = deep;
}

int Sea::getDeep()
{
	return deep_;
}


void Sea::setSalt(int salt)
{
	salt_ = salt;
}

int Sea::getSalt()
{
	return salt_;
}


void Sea::setName(char* name)
{
	this->name_ = name;
}

char* Sea::getName()
{
	return this->name_;
}

int Sea::Fish::numberof()
{
	return 9999;
}