#pragma once
#include <iostream>
#include "planet.h"
	class Land : public Planet
	{
	public:
		void setSquare(int square);
		int getSquare();
		Land();
		~Land();
		static int GetCounter(); // —четчик объектов
		void toConsole() { std::cout << typeid(this).name() << " " << square_ << " " <<counter<<  std::endl; }
	private:
	static int counter;
	int square_; // площадь

	};
