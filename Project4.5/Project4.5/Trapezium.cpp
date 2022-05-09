#include "Trapezium.h"

istream& operator>>(istream& in, Trapezium& t)
{
	double a, b;
	double c, d, h;
	cout << endl;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;
	cout << "c = "; in >> c;
	cout << "d = "; in >> d;
	cout << "h = "; in >> h;

	t.SetA(a);
	t.SetB(b);
	t.SetC(c);
	t.SetD(d);
	t.SetH(h);
	return in;
}

void Trapezium::Show()
{
	cout << "Area of Trapezium: " << Area() << endl;
	cout << "Perimeter of Trapezium: " << Perimeter() << endl;
}

double Trapezium::Area()
{
	return (a + b) * h / 2;
}

double Trapezium::Perimeter()
{
	return a * b * c * d;
}