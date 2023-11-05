#include "Header.h"
#include "Quadrate.h"
#include "Rectangle.h"
#include "Tiangle.h"

/*
    Промоделировать отливку листов стали.
    Листы стали характеризуются толщиной (в мм), и плотностю стали 
    (в кг.м3).
    Листы делятся на:
    1. Квадратные (дополнительно задаются одним числом размеры, ширена и длинна в мм).
    2. Прямоугольные (отдельно ширена и длинна в мм).
    3. Треугольные (в виде прямоугольного треугольника, задаются двума катетами в мм).
    Для каждого типа стали определите виртуальный метод "Площадь" - возвращающий площадь листа.
    Также определите метод "Вес", который вечисляет вес листа, умножая площадь листа 
    на его толщину и плотность стали. Также задайте метод "Информация", который будет выдавать информацию о листе.
    В главной програме создать масив из 15 листов стали, с которых: 
    (5 - квадратных, 7 - прямоугольных, и 3 - треугольных листа случайных размеров).
    Вывести инфу, сумарную площадь и сумарный вес всех листов.

*/
int main()
{
    cout << "\n Steel Calc:\n";
    cout << "~~~~~~~~~~~~~~~\n";
    // ->
    int size(15);
    Steel** item = new Steel * [size] {
            new Quadrate("Quadrate", 20, 7856, 1000),
            new Quadrate("Quadrate", 8, 7850, 50),
            new Quadrate("Quadrate", 8, 7850, 80),
            new Quadrate("Quadrate", 10, 7850, 100),
            new Quadrate("Quadrate", 10, 7850, 100),
            new Rectangle("Rectangle", 10, 7850, 100, 250),
            new Rectangle("Rectangle", 10, 7850, 100, 350),
            new Rectangle("Rectangle", 8, 7850, 1000, 2050),
            new Rectangle("Rectangle", 8, 7850, 180, 450),
            new Rectangle("Rectangle", 10, 7850, 3700, 4550),
            new Rectangle("Rectangle", 12, 7850, 100, 250),
            new Rectangle("Rectangle", 12, 7850, 800, 900),
            new Tiangle("Tiangle", 10, 7850, 1000, 2000),
            new Tiangle("Tiangle", 10, 7850, 1500, 2000),
            new Tiangle("Tiangle", 10, 7850, 900, 200)
        };
    // 
    double S = 0;
    double P = 0;
    for (int i = 0; i < size; i++) {
        item[i]->Info();
        S += item[i]->Square();
        P += item[i]->Weight();
    }

    cout << "~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << " Total Square = " << S << " m2" << endl;
    cout << " Total Weight = " << P << " kg" << endl;


    for (int i = 0; i < size; i++) {
        delete item[i];
    }
    delete[] item;
    
}