#include "land.h"
#include <iostream>
using namespace std;
int Land::counter = 0;
int Land::GetCounter()
{
	return counter;
}
	Land::Land()
	{
		counter++;
	}

	Land::~Land()
	{
		counter--;
	}

	void Land::setSquare(int square)
	{
		square_ = square;
	}

	int Land::getSquare()
	{
		return square_;
	}

