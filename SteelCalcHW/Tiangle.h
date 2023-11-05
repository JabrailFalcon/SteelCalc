#pragma once
#include "Steel.h"
class Tiangle : public Steel
{
	double katetA;
	double katetB;
public:
	Tiangle();
	Tiangle(string typeList, double thickness, double density, double katetA, double katetB);
	~Tiangle();
	double Square() override;
	double Weight() override;
	void Info() override;
};

