#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Trapezium.h"

using namespace std;

int main()
{
	Rectangle a;
	cin >> a;
	a.Show();

	Circle b;
	cin >> b;
	b.Show();

	Trapezium c;
	cin >> c;
	c.Show();

	Figure* x = new Rectangle();
	Figure* y = new Circle();
	Figure* z = new Trapezium();

	cout << endl;
	cout << typeid(x).name() << endl;
	cout << typeid(*x).name() << endl;
	cout << typeid(y).name() << endl;
	cout << typeid(*y).name() << endl;
	cout << typeid(z).name() << endl;
	cout << typeid(*z).name() << endl << endl;

	Figure* arr[3] = { new Rectangle(a), new Circle(b), new Trapezium(c) };
	for (int k = 0; k < 3; k++)
		arr[k]->Show();

	return 0;
}