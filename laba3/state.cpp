#include "state.h"
#include <iostream>
using namespace std;


State::State()
{
}

State::~State()
{
}

void State::setPopulation(int population)
{
	population_ = population;
}

int State::getPopulation()
{
	return population_;
}

void State::setCapital(char* capital)
{
	this->capital_ = capital;
}

char* State::getCapital()
{
	return this->capital_;
}
