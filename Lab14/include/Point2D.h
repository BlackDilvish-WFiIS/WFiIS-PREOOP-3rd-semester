#pragma once 

#include<iostream>

class Point2D
{
public:
	//konstruktor twarzacy punkt 2D z podanych argumentow
	Point2D(double x = 0, double y = 0);
	//destruktor domyslny
	~Point2D() = default;

	//przeladowany operator new
	void* operator new(std::size_t size);

	//przeladowany operator delete
	void operator delete(void* ptr);

	//przeladowany operator dodawania
	Point2D operator+(const Point2D& point);

	//zaprzyjazniona fukncja dodawania
	friend Point2D operator+(double d, const Point2D& point);

	//przeladowany operator predekremencaji
	Point2D operator--();

	//przeladowany operator postinkrementcji
	Point2D operator++(int);

	//przeladowany operator dzielenia przez liczbe
	Point2D operator/(int divider);

	//wypisuje wspolrzedne punktu
	void Print() const;

	//przeladowany operator wypisywania na ekrean
	friend std::ostream& operator<<(std::ostream& os, const Point2D& point);

private:

	double _x;
	double _y;

};
