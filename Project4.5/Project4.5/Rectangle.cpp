#include "Rectangle.h"

istream& operator>>(istream& in, Rectangle& r)
{
	double a, b;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;

	r.SetA(a);
	r.SetB(b);
	return in;
}

void Rectangle::Show()
{
	cout << "Area of Rectangle: " << Area() << endl;
	cout << "Perimeter of Rectangle: " << Perimeter() << endl;
}

double Rectangle::Area()
{
	return a * b;
}

double Rectangle::Perimeter()
{
	return 2 * (a + b);
}