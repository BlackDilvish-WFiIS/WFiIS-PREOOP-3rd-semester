#pragma once 
 
#include<iostream>
#include"Point2D.h"

class PointAverage
{
public:
	//konstruktor inicjalizujacy zmienne sredniej
	PointAverage();

	//domyslsny destruktor
	~PointAverage() = default;

	//przeladowany operator nawiastow okraglych (funktor)
 	void operator()(const Point2D& point);

	//wypisuje srednia na ekran
	void Print();

	//resetuje zmienne sredniej
	void Reset();

private:
	Point2D _sum;
	int _counter;
};
