#pragma once
#include <iostream>
#include "continent.h"
class State : public Continent, public Planet
{
public:
	void setPopulation(int population);
	int getPopulation();
	void setCapital(char *name);
	char* getCapital();
	State();
	~State();
	void toConsole() { std::cout << typeid(this).name() << " " << *capital_ << " " << population_ << std::endl; }
private:
	char *capital_; // столица
	int population_; // население
};