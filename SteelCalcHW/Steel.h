#pragma once
class Steel
{
	string typeList;
public:
	double thickness; // толщина (в мм)
	double density; // плотность стали (в кг.м3)
	Steel();
	Steel(string typeList, double thickness, double density);
	~Steel();
	virtual double Square() = 0; // Площадь
	virtual double Weight() = 0; // Вес
	virtual void Info(); // Информация
};

