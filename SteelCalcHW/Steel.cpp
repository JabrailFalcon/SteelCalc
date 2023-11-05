#include "Header.h"
#include "Steel.h"

Steel::Steel() : typeList("undefined"), thickness(0.0), density(0.0)
{}

Steel::Steel(string typeList, double thickness, double density)
	: typeList(typeList), thickness(thickness), density(density)
{}

Steel::~Steel()
{}



void Steel::Info()
{
	cout << "\n Metal list - " << typeList << ": \n";
	cout << " Thickness - " << thickness << " mm" << endl;
	cout << " Density - " << density << " kg/m3" << endl;
}
