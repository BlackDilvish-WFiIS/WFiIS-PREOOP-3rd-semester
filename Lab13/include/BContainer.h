#pragma once

#include<iostream>
#include<vector>
#include"Box.h"
#include"Volume.h"

class BContainer 
{
public:
	//domyslny konstruktor
	BContainer() = default;

	//domyslny destruktor
	~BContainer() = default;

	//dodaje pudelko do pojemnika
	void Insert(Box* box);

	//zwraca wskaznik do pudelka o zadanym indeksie
	Box* operator[](int n);

	//przeladowany operator wypisuje dane pojemnika na ekran
	friend std::ostream& operator<<(std::ostream& os, const BContainer& container);

	//funkcja zwraca najbardziej optymalny pojemnik wg. podenej funkcji
	friend Box* find_box_optimum(const BContainer& container, Comparator comp);


private:
	std::vector<Box*> _boxes;

};
