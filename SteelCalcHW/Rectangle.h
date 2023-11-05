#pragma once
#include "Steel.h"
class Rectangle : public Steel
{
	double sizeH;
	double sizeW;
public:
	Rectangle();
	Rectangle(string typeList, double thickness, double density, double sizeH, double sizeW);
	~Rectangle();
	double Square() override;
	double Weight() override;
	void Info() override;
};

