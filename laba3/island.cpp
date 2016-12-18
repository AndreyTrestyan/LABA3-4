#include "island.h"
#include <iostream>
using namespace std;


Island::Island()
{
}

Island::~Island()
{
}

void Island::setCountry(char* country)
{
	this->country_ = country;
}

char* Island::getCountry()
{
	return this->country_;
}
