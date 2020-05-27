#pragma once

#include<iostream> 

class Box
{
public:
	//Konstruktor tworzy pudelko z przekazanych 3 zmiennych
	Box(double x, double y, double z);

	//Konstruktor tworzy pudelko z przekazanych 3 zmiennych
	Box(std::size_t x, std::size_t y, std::size_t z);

	//domyslny destruktor
	~Box() = default;

	//zwraca szerokosc pudelka
	double GetWidth() const;

	//zwraca dlugosc pudelka
	double GetLength() const;

	//zwraca wysokosc pudelka
	double GetHeight() const;

private:
	double _x;
	double _y;
	double _z;

};

using Comparator =  bool (*)(Box* a, Box* b);

//przeladowany operator wypisuje dane pudelka na ekran
std::ostream& operator<<(std::ostream& os, const Box& box);

//funkcja zwracajaca prawde jesli objetosc pierwszego pudelka 
//jest mniejsza od drugiego
bool smaller(Box* a, Box* b);
