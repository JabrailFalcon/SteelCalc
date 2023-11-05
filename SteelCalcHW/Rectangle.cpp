#include "Header.h"
#include "Rectangle.h"

Rectangle::Rectangle() : Steel(), sizeH(300), sizeW(400)
{
}

Rectangle::Rectangle(string typeList, double thickness, double density, double sizeH, double sizeW) 
	: Steel(typeList, thickness, density), sizeH(sizeH), sizeW(sizeW)
{
}

Rectangle::~Rectangle()
{
}

double Rectangle::Square()
{
	return (sizeH * sizeW) / 1000000;
}

double Rectangle::Weight()
{
	return Square() * (thickness * density) / 1000;
}

void Rectangle::Info()
{
	Steel::Info();
	cout << " Height = " << sizeH << " mm" << endl;
	cout << " Widht = " << sizeW << " mm" << endl;
	cout << " Square = " << Square() << " m2" << endl;
	cout << " Weight = " << Weight() << " kg" << endl << endl;
}
