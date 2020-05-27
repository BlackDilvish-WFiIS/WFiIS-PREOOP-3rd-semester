#pragma once

#include<iostream>
#include"Box.h"

class Volume 
{
public:
	//domyslny konstruktor
	Volume() = default;

	//domyslny destruktor
	~Volume() = default;

	//zwraca objetosc pudelka o podanych parametrach
	double operator()(double x, double y, double z);

	//zwraca objetosc przekazanego pudelka
	double operator()(const Box& box);

};
