#pragma once
#include "Steel.h"
class Quadrate : public Steel
{
	double size;
public:
	Quadrate();
	Quadrate(string typeList, double thickness, double density, double size);
	~Quadrate();
	double Square() override;
	double Weight() override;
	void Info() override;
};

