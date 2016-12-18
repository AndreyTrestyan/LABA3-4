#pragma once
#include "planet.h"
#include <iostream>

class Printer
{
public:
	void iAmPrinting(Planet *someobj)
	{
		std::cout << typeid(someobj).name() << std::endl;
		someobj->toConsole();
	}

};