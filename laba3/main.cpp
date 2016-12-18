#include "land.h"
#include "sea.h"
#include "state.h"
#include "island.h"
#include "continent.h"
#include <iostream>
#include "windows.h"
#include "printer.h"
using namespace std;
void main()
{
	Land earth;	
	Continent c;
	State e;
	Island greenland;
	Sea b;
	Sea::Fish r; // nested class

	
	earth.setSquare(40000);
	cout <<"square of the earth "<< earth.getSquare() << endl;
	c.setSquare(2000);
	c.setName("Africa");
	cout << "square of the "<<c.getName() <<" "<< c.getSquare() << endl;
	e.setSquare(500);
	e.setName("Egypt");
	cout << "square of the " << e.getName() << " " << e.getSquare() << endl;
	c.seaobj.setName("Black");
	c.seaobj.setDeep(12);
	cout << "deep of the " << c.seaobj.getName() << " sea is " << c.seaobj.getDeep() << endl;
	b.GetNested(r);




	

	cout << earth.GetCounter() << endl;

	Continent *america = new Continent;
	Continent continent1;
	america = &continent1;
	america->setLandshare(500);
	america->setName("America");
	america->setSquare(1000);
	Printer all;
	all.iAmPrinting(america);

	State USA;
	USA.setCapital("Washington");
	USA.setName("USA");
	USA.setPopulation(5000000);
	USA.toConsole();

	// преобразование типов dynamic_cast
	Land *land = new Continent();
	Continent *cont;
	cont = dynamic_cast<Continent*>(land);

	// static_cast
	Land *ttt;
	Continent *mmm = new Continent();
	ttt = mmm;
	mmm = static_cast<Continent*>(ttt);

	//сonst_cast
	const int t = 777;
	int *ptr;
	ptr = const_cast<int*>(&t);
	system("pause");
}
