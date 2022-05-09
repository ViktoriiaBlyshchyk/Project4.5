#include "Circle.h"

istream& operator>>(istream& in, Circle& c)
{
	double r;
	cout << endl;
	cout << "r = "; in >> r;

	c.SetR(r);
	return in;
}

void Circle::Show()
{
	cout << "Area of Circle: " << Area() << endl;
	cout << "Perimeter of Circle: " << Perimeter() << endl;
}

double Circle::Area()
{
	return pi * pow(r, 2);
}

double Circle::Perimeter()
{
	return 2 * pi * r;
}