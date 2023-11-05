#include "Header.h"
#include "Tiangle.h"

Tiangle::Tiangle() : Steel(), katetA(0.0), katetB(0.0)
{}

Tiangle::Tiangle(string typeList, double thickness, double density, double katetA, double katetB)
	: Steel(typeList, thickness, density), katetA(katetA), katetB(katetB)
{}

Tiangle::~Tiangle()
{
}

double Tiangle::Square()
{
	return ((katetA * katetB) / 2) / 1000000;
}

double Tiangle::Weight()
{
	return Square() * (thickness * density) / 1000;
}

void Tiangle::Info()
{
	Steel::Info();
	cout << " Katet A = " << katetA << " mm" << endl;
	cout << " Katet B = " << katetB << " mm" << endl;
	cout << " Square = " << Square() << " m2" << endl;
	cout << " Weight = " << Weight() << " kg" << endl << endl;
}
