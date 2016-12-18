#pragma once
#include "state.h"
#include <iostream>
class Region: protected State, public Planet
{
public: int forrest;
		void toConsole() { std::cout << typeid(this).name() << " " << lakes << std::endl; }
protected: int lakes;
};

