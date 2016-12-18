#pragma once

#include "region.h"
class City : public Region, public Planet
{
public:
	void toConsole() { std::cout << typeid(this).name() << " " << streets << " " << std::endl; }
	int streets;

};