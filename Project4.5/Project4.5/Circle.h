#pragma once
#include "Figure.h"

class Circle :
    public Figure
{
	double r;
	double pi = 3.14;

public:
	double GetR() { return r; }
	void SetR(double x) { r = x; }

	friend istream& operator >> (istream& in, Circle& c);
	virtual void Show();

	virtual double Area();
	virtual double Perimeter();
};