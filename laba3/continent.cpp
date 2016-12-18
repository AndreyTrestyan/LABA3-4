#include "continent.h"
#include <iostream>
using namespace std;


	Continent::Continent()
	{
	}

	Continent::~Continent()
	{
		cout << "continent is deleted" << endl;
	}

	void Continent::setLandshare(int landshare)
	{
		landshare_ = landshare;
	}

	int Continent::getLandshare()
	{
		return landshare_;
	}

	void Continent::setName(char* name)
	{
		this->name_ = name;
	}

	char* Continent::getName()
	{
		return this->name_;
	}

	const void Continent::showcontnumb()
	{
		cout << contnumber << endl;
	}
	