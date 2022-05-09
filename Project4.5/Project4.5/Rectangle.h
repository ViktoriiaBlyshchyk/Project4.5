#pragma once
#include "Figure.h"

class Rectangle :
    public Figure
{
    double a, b;

public:
	double GetA() { return a; }
	double GetB() { return b; }
	void SetA(double x) { a = x; }
	void SetB(double y) { b = y; }

	friend istream& operator >> (istream& in, Rectangle& r);
	virtual void Show();
	
	virtual double Area();
	virtual double Perimeter();
};