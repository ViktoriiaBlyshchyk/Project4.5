#pragma once
#include <iostream>

using namespace std;

class Figure
{
public:
	virtual void Show() = 0;
	virtual double Area() = 0;
	virtual double Perimeter() = 0;
};