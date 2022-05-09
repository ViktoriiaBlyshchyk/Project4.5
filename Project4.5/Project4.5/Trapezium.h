#pragma once
#include "Figure.h"

class Trapezium :
    public Figure
{
    double a, b, c, d, h;

public:
	double GetA() { return a; }
	double GetB() { return b; }
	double GetC() { return c; }
	double GetD() { return d; }
	double GetH() { return h; }

	void SetA(double x) { a = x; }
	void SetB(double y) { b = y; }
	void SetC(double z) { c = z; }
	void SetD(double v) { d = v; }
	void SetH(double k) { h = k; }

	friend istream& operator >> (istream& in, Trapezium& t);
	virtual void Show();

	virtual double Area();
	virtual double Perimeter();
};