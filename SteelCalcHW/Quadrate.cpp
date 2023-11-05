#include "Header.h"
#include "Quadrate.h"

Quadrate::Quadrate() : Steel(), size(300)
{}

Quadrate::Quadrate(string typeList, double thickness, double density, double size)
	: Steel(typeList, thickness, density), size(size)
{
}

Quadrate::~Quadrate()
{
}

double Quadrate::Square()
{
	return (size * size) / 1000000;
}

double Quadrate::Weight()
{

	return Square() * (thickness * density) / 1000;
}

void Quadrate::Info()
{

	Steel::Info();
	cout << " Height = " << size << " mm" << endl;
	cout << " Widht = " << size << " mm" << endl;
	cout << " Square = "  << setprecision(2) << Square() << " S(m2)" << endl;
	cout << " Weight = " << fixed << setprecision(2) << Weight() << " M(kg)" << endl << endl;
	
}
